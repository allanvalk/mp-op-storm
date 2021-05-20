_curator = allcurators select 0;
_curators = allcurators;

ARES_saveMission = {
	"[ ~ ] Save started..." remoteExec ["systemChat"];
	diag_log "[ ~ ] Save started...";
	profileNamespace setVariable ["ARES_resourceCounterSave", resourceCounterVar];
	profileNamespace setVariable ["ARES_supportCounterSave", resourceCounterVar];
	_savedVehicles = [];
	{

		if (_x getVariable ["ARES_vehicleToSave", false]) then {
			_className = typeOf _x;
			_postion = getPos _x;
			_status = damage _x;
			_rotationDir = vectorDir _x;
			_rotationUp = vectorUp _x;
			_cargoItem = getItemCargo _x;
			_cargoWeapon = getWeaponCargo _x;
			_cargoMagazine = getMagazineCargo _x;
			_cargoBackpack = getBackpackCargo _x;
			_cargo = [[], []];
			
			(_cargo select 0) append (_cargoItem select 0);
			(_cargo select 0) append (_cargoWeapon select 0);
			(_cargo select 0) append (_cargoMagazine select 0);
			(_cargo select 1) append (_cargoItem select 1);
			(_cargo select 1) append (_cargoWeapon select 1);
			(_cargo select 1) append (_cargoMagazine select 1);

			_vehicleData = [[_className, _postion, _status, _rotationDir, _rotationUp, _cargo, _cargoBackpack]];
			(str _vehicleData) remoteExec ["systemChat"];
			diag_log _vehicleData;
			_savedVehicles append _vehicleData;
			sleep 0.01;
		};

	} forEach allMissionObjects "all";
	profileNamespace setVariable ["ARES_savedVehicles", _savedVehicles];
	"[ * ] Mission saved" remoteExec ["systemChat"];
	diag_log "[ * ] Mission saved";
};

ARES_loadMission = {
	"[ ~ ] Load started..." remoteExec ["systemChat"];
	diag_log "[ ~ ] Load started...";
	["resourceCounter", (profileNamespace getVariable ["ARES_resourceCounterSave", 0])] call ARES_updateCounter;
	["supportCounter", (profileNamespace getVariable ["ARES_supportCounterSave", 0])] call ARES_updateSupportCounter;

	{ if (_x getVariable ["ARES_vehicleToSave", false]) then {deleteVehicle _x}; } forEach allMissionObjects "all";

	_savedVehicles = profileNamespace getVariable ["ARES_savedVehicles", [[]]];
	{
		_className = (_x select 0);
		_postion = (_x select 1);
		_status = (_x select 2);
		_rotationDir = (_x select 3);
		_rotationUp = (_x select 4);
		_cargo = (_x select 5);
		_cargoBackpack = (_x select 6);

		_vehicleData = [_className, _postion, _status, _rotationDir, _rotationUp, _cargo, _cargoBackpack];
		(str _vehicleData) remoteExec ["systemChat"];
		diag_log _vehicleData;
		
		_vehicle = createVehicle [_className, _postion, [], 0, "CAN_COLLIDE"];
		sleep 0.05;
		_vehicle enableSimulationGlobal false;
		_vehicle setDamage _status;
		_vehicle setVariable ["ARES_vehicleToSave", true, true];
		_vehicle setVectorDirAndUp [_rotationDir, _rotationUp];
		clearWeaponCargoGlobal _vehicle;
		clearMagazineCargoGlobal _vehicle;
		clearItemCargoGlobal _vehicle;
		clearBackpackCargoGlobal _vehicle;
		_cargoLength = count (_cargo select 0);
		for [{_i = 0}, {_i < _cargoLength}, {_i = _i + 1}] do {
			_cargoNameList = (_cargo select 0);
			_cargoCountList = (_cargo select 1);
			_vehicle addItemCargoGlobal [(_cargoNameList select _i), (_cargoCountList select _i)];
		};
		_cargoBackpackLength = count (_cargoBackpack select 0);
		for [{_i = 0}, {_i < _cargoBackpackLength}, {_i = _i + 1}] do {
			_cargoNameList = (_cargoBackpack select 0);
			_cargoCountList = (_cargoBackpack select 1);
			_vehicle addBackpackCargoGlobal [(_cargoNameList select _i), (_cargoCountList select _i)];
		};
		sleep 0.1;
		_vehicle enableSimulationGlobal true;
		if (_status == 1) then {
			deleteVehicle _vehicle;
		};
	} forEach _savedVehicles;
	"[ * ] Mission loaded" remoteExec ["systemChat"];
	diag_log "[ * ] Mission loaded";
};

_nil = [] spawn {
	sleep 5;
	["resourceCounter", 0] call ARES_updateCounter;
};

_nil = [] spawn {
	while {true} do {
		game addCuratorEditableObjects [allPlayers, true];
		sleep 60;
	};
};

_nil = [] spawn {
	while {true} do {
		publicVariable "ARES_activeCustomTask";
		sleep 30;
	};
};

if ((["autoTask", 0] call BIS_fnc_getParamValue) == 1) then {
	_nil = [] spawn {
		sleep 10;
		while {true} do {
			_nil = [] spawn selectRandom [ARES_saveCivilian, ARES_deliverSupplies, ARES_radioTower, ARES_killOfficer, ARES_destroyCache, ARES_destroyAA, ARES_clearMinefield];
			sleep 6400;
		};
	};
};

_nil = [] spawn {
	while {true} do {
		_delete = nearestObjects [mapCenter, ["O_Truck_02_covered_F", "O_Truck_02_transport_F", "O_Truck_02_box_F", "O_Truck_02_medical_F", "O_Truck_02_fuel_F", "O_Truck_02_Ammo_F", "UK3CB_TKA_O_BM21"], 12000];
		{
			deleteVehicle _x;
		} forEach _delete;
		sleep 30;
	};
};

_nil = [] spawn {
	if ((["autoLoad", 0] call BIS_fnc_getParamValue) == 1) then {
		sleep 15;
		remoteExec ['ARES_loadMission', 2];
	};
};

[ChaosJammer] remoteExec ["ARES_chaosJammer", 0, true]
