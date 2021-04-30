ARES_deliverSupplies = {
	_spawnPos = [7479.68,1757.85,0];
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "CityCenter"];
	_locationPos = locationPosition _location;
	_targetObj = createVehicle ["Land_FoodSack_01_empty_brown_F", _locationPos];
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];

	_deliverObj = createVehicle ["CargoNet_01_box_F", _spawnPos];
	_deliverObj allowDamage false;
	
	[west, ["deliverSupplies"], ["Доставить ящик с гуманитарным грузом для улучшения отношений с местным населением.", "Доставить припасы", ""], getPos _targetObj, 0, -1, true, ""] call BIS_fnc_taskCreate;

	ARES_activeCustomTask = ["deliverSupplies", [_targetObj, _deliverObj]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { (_deliverObj distance _targetObj) < 10 };

	if (("deliverSupplies" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["deliverSupplies","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["deliverSupplies"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
	deleteVehicle _deliverObj;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_saveCivilian = {
	_savePos = getPos ARES_taskPos;
	_spawnPos = [0,0,0];

	_spawnPos = [nil, ["water", "closedArea", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_spawnPos, "CityCenter"];
	_locationPos = locationPosition _location;
	_saveGrp = createGroup civilian;
	_saveObj = _saveGrp createUnit ["UK3CB_TKC_C_CIV", _locationPos, [], 0, "FORM"];
	_saveObj setVehiclePosition [getPos _saveObj, [], 0, "CAN_COLLIDE"];
	_saveObj setCaptive true;
	[_saveGrp, getPos _saveObj, 50] call BIS_fnc_taskPatrol;
	
	[west, ["saveCivilian"], ["Захватите гражданского, который передаёт информацию о наших силах противнику.", "Захватить информатора", ""], [_saveObj, false], 0, -1, true, ""] call BIS_fnc_taskCreate;

	ARES_activeCustomTask = ["saveCivilian", [_saveObj]];
	publicVariable "ARES_activeCustomTask";

	_nil = [_saveObj] spawn {
		_saveObj = (_this select 0);
		waitUntil { !alive _saveObj };
		["saveCivilian","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["saveCivilian"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _saveObj;
	};

	waitUntil { (ARES_taskPos distance _saveObj) < 10 };

	if (("saveCivilian" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["saveCivilian","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["saveCivilian"] call BIS_fnc_deleteTask;
	deleteVehicle _saveObj;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_radioTower = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "Mount"];
	_locationPos = locationPosition _location;
	_targetObj = createVehicle ["Land_Vysilac_FM", _locationPos];
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	
	[west, ["radioTower"], ["Уничтожить вышку, которую войска противника используют для связи и глушения наших каналов связи.", "Уничтожить вышку", ""], ([getPos _targetObj, random 100, random 360] call BIS_fnc_relPos), 0, -1, true, ""] call BIS_fnc_taskCreate;

	ARES_activeCustomTask = ["radioTower", [_targetObj]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { !alive _targetObj };

	if (("radioTower" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["radioTower","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["radioTower"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_killOfficer = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "NameLocal"];
	_locationPos = locationPosition _location;
	_targetGrp = createGroup east;
	_targetObj = _targetGrp createUnit ["UK3CB_TKA_O_OFF", _locationPos, [], 0, "FORM"];
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	[_targetGrp, getPos _targetObj, 50] call BIS_fnc_taskPatrol;

	_targetGuard_1 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKA_O" >> "Infantry" >> "UK3CB_TKA_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_1, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	_targetGuard_2 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKA_O" >> "Infantry" >> "UK3CB_TKA_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_2, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	
	[west, ["killOfficer"], ["Убейте офицера. Он командует местным гарнизоном и осуществляет пропаганду среди местного населения.", "Убить офицера", ""], ([getPos _targetObj, random 50, random 360] call BIS_fnc_relPos), 0, -1, true, ""] call BIS_fnc_taskCreate;
	
	ARES_activeCustomTask = ["killOfficer", [_targetObj, _targetGuard_1, _targetGuard_2]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { !alive _targetObj };

	if (("killOfficer" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["killOfficer","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["killOfficer"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_1;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_2;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_destroyCache = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "Mount"];
	_locationPos = locationPosition _location;
	_targetObj = createVehicle ["UK3CB_AK47_Equipbox_Opfor", _locationPos];
	_targetCamoObj = createVehicle ["CamoNet_BLUFOR_open_F", _locationPos];
	_targetCamoObj allowDamage false;
	clearItemCargoGlobal _targetObj;
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	_targetCamoObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];

	_targetGuard_1 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKM_O" >> "Infantry" >> "UK3CB_TKM_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_1, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	_targetGuard_2 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKM_O" >> "Infantry" >> "UK3CB_TKM_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_2, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	
	[west, ["destroyCache"], ["Местное ополчение хранит своё вооружение в данном схроне. Взорвите его и ликвидируйте охрану.", "Взорвать схрон", ""], ([getPos _targetObj, random 100, random 360] call BIS_fnc_relPos), 0, -1, true, ""] call BIS_fnc_taskCreate;
	
	ARES_activeCustomTask = ["destroyCache", [_targetObj, _targetGuard_1, _targetGuard_2]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { !alive _targetObj };

	if (("destroyCache" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["destroyCache","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["destroyCache"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
	deleteVehicle _targetCamoObj;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_1;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_2;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_destroyAA = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR", "labAreaMarker"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "FlatArea"];
	_locationPos = locationPosition _location;
	
	_targetObjList = [_locationPos, 0, (selectRandom ["UK3CB_TKA_O_ZsuTank", "UK3CB_TKA_O_Ural_Zu23", "UK3CB_TKA_O_MTLB_ZU23"]), east] call BIS_fnc_spawnVehicle;
	_targetObj = (_targetObjList select 0);
	_targetCamoObj = createVehicle ["CamoNet_BLUFOR_big_F", _locationPos];
	_targetCamoObj allowDamage false;
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	_targetCamoObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	_targetObj setFuel 0;

	_targetGuard_1 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKA_O" >> "Infantry" >> "UK3CB_TKA_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_1, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	_targetGuard_2 = [getPos _targetObj, east, (configfile >> "CfgGroups" >> "East" >> "UK3CB_TKA_O" >> "Infantry" >> "UK3CB_TKA_O_RIF_FireTeam")] call BIS_fnc_spawnGroup;
	[_targetGuard_2, getPos _targetObj, 200] call BIS_fnc_taskPatrol;
	
	[west, ["destroyAA"], ["Найдите и уничтожьте ПВО противника в секторе. ", "Уничтожить ПВО", ""], ([getPos _targetObj, random 100, random 360] call BIS_fnc_relPos), 0, -1, true, ""] call BIS_fnc_taskCreate;
	
	ARES_activeCustomTask = ["destroyAA", [_targetObj, _targetGuard_1, _targetGuard_2]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { !alive _targetObj };

	if (("destroyAA" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["destroyAA","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["destroyAA"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
	deleteVehicle _targetCamoObj;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_1;
	{
		deleteVehicle _x;
	} forEach units _targetGuard_2;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_clearMinefield = {
	_targetPos = [0,0,0];
	_mineList = [];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR", "labAreaMarker"]] call BIS_fnc_randomPos;

	for [{_i = 0}, {_i < 10}, {_i = _i + 1}] do {
		_mine = createMine [(selectRandom ["APERSMine", "ATMine", "APERSBoundingMine", "APERSMineDispenser_Mine_F"]), _targetPos, [], 0];
		_mineList append [_mine];
	};

	{
		_x setVehiclePosition [([_targetPos, random 50, random 360] call BIS_fnc_relPos), [], 0, "CAN_COLLIDE"];
	} forEach _mineList;

	[west, ["clearMinefield"], ["Расчистите местность от мин, чтобы избежать жертв среди местного населения.", "Минное поле", ""], _targetPos, 0, -1, true, ""] call BIS_fnc_taskCreate;

	ARES_activeCustomTask = ["clearMinefield", [_mineList]];
	publicVariable "ARES_activeCustomTask";

	waitUntil { ({alive _x} count _mineList) == 0 };

	if (("clearMinefield" call BIS_fnc_taskState) == "FAILED") exitWith {};

	["clearMinefield","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["clearMinefield"] call BIS_fnc_deleteTask;

	{
		deleteVehicle _x;
	} forEach _mineList;

	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};