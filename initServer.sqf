_curator = allcurators select 0;
_curators = allcurators;

enableSentences false;
enableRadio false;

ARES_saveMission = {
	"Save started..." remoteExec ["hint"];
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

			_vehicleData = [[_className, _postion, _status, _rotationDir, _rotationUp]];
			_savedVehicles append _vehicleData;
		};

	} forEach allMissionObjects "all";
	profileNamespace setVariable ["ARES_savedVehicles", _savedVehicles];
	"Mission saved" remoteExec ["hint"];
};

ARES_loadMission = {
	"Load started..." remoteExec ["hint"];
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

		_vehicle = createVehicle [_className, _postion, [], 0, "CAN_COLLIDE"];
		sleep 0.05;
		_vehicle enableSimulationGlobal false;
		_vehicle setDamage _status;
		_vehicle setVariable ["ARES_vehicleToSave", true, true];
		_vehicle setVectorDirAndUp [_rotationDir, _rotationUp];
		sleep 0.1;
		_vehicle enableSimulationGlobal true;

	} forEach _savedVehicles;
	"Mission loaded" remoteExec ["hint"];
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

if ((["autoTask", 0] call BIS_fnc_getParamValue) == 1) then {
	_nil = [] spawn {
		sleep 10;
		while {true} do {
			_nil = [] spawn selectRandom [ARES_saveCivilian, ARES_deliverSupplies, ARES_radioTower, ARES_killOfficer, ARES_destroyCache, ARES_destroyAA];
			sleep 6400;
		};
	};
};

_nil = [] spawn {
	while {true} do {
		_delete = nearestObjects [mapCenter, ["O_Truck_02_covered_F", "O_Truck_02_transport_F", "O_Truck_02_box_F", "O_Truck_02_medical_F", "O_Truck_02_fuel_F", "O_Truck_02_Ammo_F"], 12000];
		{
			deleteVehicle _x;
		} forEach _delete;
		sleep 60;
	};
};

_nil = [] spawn {
	if ((["autoLoad", 0] call BIS_fnc_getParamValue) == 1) then {
		sleep 15;
		remoteExec ['ARES_loadMission', 2];
	};
};
