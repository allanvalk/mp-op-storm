ARES_deliverSupplies = {
	_spawnPos = [7479.68,1757.85,0];
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "CityCenter"];
	_locationPos = locationPosition _location;
	_targetObj = createVehicle ["Land_FoodSack_01_empty_brown_F", _locationPos];
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];

	_deliverObj = createVehicle ["CargoNet_01_box_F", _spawnPos];
	_deliverObj allowDamage false;
	
	[west, ["deliverSupplies"], ["Доставить ящик с гуманитарным грузом для улучшения отношений с местным населением.", "Доставить припасы", ""], getPos _targetObj, 0, -1, true, ""] call BIS_fnc_taskCreate;

	_nil = [_targetObj, _deliverObj] spawn {
		_targetObj = (_this select 0);
		_deliverObj = (_this select 1);
		sleep 6350;
		["deliverSupplies","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["deliverSupplies"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _targetObj;
		deleteVehicle _deliverObj;
	};

	waitUntil { (_deliverObj distance _targetObj) < 10 };

	["deliverSupplies","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["deliverSupplies"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
	deleteVehicle _deliverObj;
};

ARES_saveCivilian = {
	_savePos = getPos ARES_taskPos;
	_spawnPos = [0,0,0];

	_spawnPos = [nil, ["water", "closedArea"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_spawnPos, "CityCenter"];
	_locationPos = locationPosition _location;
	_saveGrp = createGroup civilian;
	_saveObj = _saveGrp createUnit ["UK3CB_TKC_C_CIV", _locationPos, [], 0, "FORM"];
	_saveObj setVehiclePosition [getPos _saveObj, [], 0, "CAN_COLLIDE"];
	_saveObj setCaptive true;
	[_saveGrp, getPos _saveObj, 50] call BIS_fnc_taskPatrol;
	
	[west, ["saveCivilian"], ["Захватите гражданского, который передаёт информацию о наших силах противнику.", "Захватить информатора", ""], [_saveObj, false], 0, -1, true, ""] call BIS_fnc_taskCreate;

	_nil = [_saveObj] spawn {
		_saveObj = (_this select 0);
		sleep 6350;
		["saveCivilian","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["saveCivilian"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _saveObj;
	};

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

	["saveCivilian","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["saveCivilian"] call BIS_fnc_deleteTask;
	deleteVehicle _saveObj;
};

ARES_radioTower = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR"]] call BIS_fnc_randomPos;
	
	_location = nearestLocation [_targetPos, "Mount"];
	_locationPos = locationPosition _location;
	_targetObj = createVehicle ["Land_Vysilac_FM", _locationPos];
	_targetObj setVehiclePosition [getPos _targetObj, [], 0, "CAN_COLLIDE"];
	
	[west, ["radioTower"], ["Уничтожить вышку, которую войска противника используют для связи и глушения наших каналов связи.", "Уничтожить вышку", ""], ([getPos _targetObj, random 100, random 360] call BIS_fnc_relPos), 0, -1, true, ""] call BIS_fnc_taskCreate;

	_nil = [_targetObj] spawn {
		_targetObj = (_this select 0);
		sleep 6350;
		["radioTower","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["radioTower"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _targetObj;
	};

	waitUntil { !alive _targetObj };

	["radioTower","SUCCEEDED"] call BIS_fnc_taskSetState;
	["resourceCounter", 5] call ARES_updateCounter;

	sleep 120;
	
	["radioTower"] call BIS_fnc_deleteTask;
	deleteVehicle _targetObj;
};

ARES_killOfficer = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR"]] call BIS_fnc_randomPos;
	
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
	
	_nil = [_targetObj] spawn {
		_targetObj = (_this select 0);
		sleep 6350;
		["killOfficer","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["killOfficer"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _targetObj;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_1;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_2;
	};

	waitUntil { !alive _targetObj };

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
};

ARES_destroyCache = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR"]] call BIS_fnc_randomPos;
	
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
	
	_nil = [] spawn {
		sleep 6350;
		["destroyCache","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["destroyCache"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _targetObj;
		deleteVehicle _targetCamoObj;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_1;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_2;
	};

	waitUntil { !alive _targetObj };

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
};

ARES_destroyAA = {
	_targetPos = [0,0,0];

	_targetPos = [nil, ["water", "closedArea", "AO_BLUFOR"]] call BIS_fnc_randomPos;
	
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
	
	_nil = [] spawn {
		sleep 6350;
		["destroyAA","FAILED"] call BIS_fnc_taskSetState;
		sleep 10;
		["destroyAA"] call BIS_fnc_deleteTask;
		sleep 10;
		deleteVehicle _targetObj;
		deleteVehicle _targetCamoObj;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_1;
		{
			deleteVehicle _x;
		} forEach units _targetGuard_2;
	};

	waitUntil { !alive _targetObj };

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
};
