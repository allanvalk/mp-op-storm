_nil = [] execVM "fpsCounter.sqf";
_nil = [] execVM "customTasks.sqf";

enableSentences false;
enableRadio false;

ARES_musicList = [["Armored_Cavalry", 217], ["Heat", 157], ["Hindsight", 137], ["Infiltration", 215], ["Jumping_In", 264], ["KIA", 149], ["Main_Menu", 200], ["Main_Theme", 103], ["Multiplayer_Victory_and_Stats", 105], ["On_My_Way", 192], ["On_The_Offensive", 296], ["Run_For_Cover", 106], ["Scythe", 230], ["Search_and_Destroy", 176], ["Suicide_Mission", 171], ["Take_It_Out", 201], ["Temper", 131], ["The_Final_Push", 138], ["Turmoil", 151], ["Undaunted", 133], ["Underground", 184]];
ARES_activeCustomTask = [];

_nil = [] spawn {
	waitUntil
	{
		if (alive player && cameraView in ["EXTERNAL","GROUP"] && isNull getAssignedCuratorLogic player) then
		{
			cameraOn switchCamera "INTERNAL";
		};

		false
	};
};

//ARES_activeCustomTask = ["", []];

[west, "aresDefaultRespawn"] call BIS_fnc_addRespawnInventory;

ARES_cancelTask = {
	_taskName = (ARES_activeCustomTask select 0);
	_objectsDelete = (ARES_activeCustomTask select 1);

	[_taskName,"CANCELED"] call BIS_fnc_taskSetState;
	[_taskName] call BIS_fnc_deleteTask;
	{
		if ((typeName _x) == "OBJECT") then {
			deleteVehicle _x;
		};
		if ((typeName _x) == "GROUP") then {
			{
				deleteVehicle _x;
			} forEach units _x;
		};
		if ((typeName _x) == "STRING") then {
			{
				deleteMarker _x;
			} forEach _x;
		};
		if ((typeName _x) == "ARRAY") then {
			{
				deleteVehicle _x;
			} forEach _x;
		};
	} forEach _objectsDelete;
	ARES_activeCustomTask = [];
	publicVariable "ARES_activeCustomTask";
};

ARES_updateCounter = {
	_counter = (_this select 0);
	_amount = (_this select 1);

	_resourceCounterStr = markerText _counter;
	_resourceCounterInt = _resourceCounterStr call BIS_fnc_parseNumber;
	_resourceCounter = _resourceCounterInt + _amount;
	resourceCounterVar = _resourceCounter;
	publicVariable "resourceCounterVar";
	_resourceCounterStr = str _resourceCounter;
	_counter setMarkerText _resourceCounterStr;
};

ARES_updateSupportCounter = {
	_counter = (_this select 0);
	_amount = (_this select 1);

	_resourceCounterStr = markerText _counter;
	_resourceCounterInt = _resourceCounterStr call BIS_fnc_parseNumber;
	_resourceCounter = _resourceCounterInt + _amount;
	supportCounterVar = _resourceCounter;
	publicVariable "supportCounterVar";
	_resourceCounterStr = str _resourceCounter;
	_counter setMarkerText _resourceCounterStr;
};

ARES_playMusic = {
	1 fadeMusic 0.25;
	while {true} do {
		_musicElement = selectRandom ARES_musicList;
		_musicName = (_musicElement select 0);
		_musicTime = (_musicElement select 1);

		playMusic _musicName;
		sleep _musicTime;
	};
};

ARES_buyEntity = {
	// ['rhsusf_m1151_usarmy_wd', 5] call ARES_buyEntity;
	_entity = (_this select 0);
	_cost = (_this select 1);
	_spawnPos = [7482.96,1717.07,0];

	if (_cost > resourceCounterVar) exitWith {
		hint "Недостаточно ресурсов!";
	};

	["resourceCounter", -(_cost)] call ARES_updateCounter;

	_vehicle = _entity createVehicle _spawnPos;
	_vehicle setVariable ["ARES_vehicleToSave", true, true];
};

ARES_buyCrate = {
	// ['Box_Syndicate_Ammo_F', 5, [['SMG_02_F','UK3CB_SVD_OLD','hlc_rifle_ACR68_full_black_grip','hgun_ACPC2_F','rhs_weap_6p53','30Rnd_556x45_Stanag_Tracer_Red'],[5,5,10,5,5,30]]] call ARES_buyCrate;
	_entity = (_this select 0);
	_cost = (_this select 1);
	_cargo = (_this select 2);
	_spawnPos = [7482.96,1717.07,0];

	if (_cost > resourceCounterVar) exitWith {
		hint "Недостаточно ресурсов!";
	};

	["resourceCounter", -(_cost)] call ARES_updateCounter;

	_vehicle = _entity createVehicle _spawnPos;
	_vehicle setVariable ["ARES_vehicleToSave", true, true];

	clearWeaponCargoGlobal _vehicle;
	clearMagazineCargoGlobal _vehicle;
	clearItemCargoGlobal _vehicle;

	_cargoLength = count (_cargo select 0);
	for [{_i = 0}, {_i < _cargoLength}, {_i = _i + 1}] do {
		_cargoNameList = (_cargo select 0);
		_cargoCountList = (_cargo select 1);
		_vehicle addItemCargoGlobal [(_cargoNameList select _i), (_cargoCountList select _i)];
	};
};

ARES_showGui = {
	disableSerialization;
	createDialog "ARES_BuyMenu_Dialog";
};

ARES_requestMission = {
	remoteExecCall ["ARES_cancelTask", 2];
	_nil = [] spawn selectRandom [ARES_saveCivilian, ARES_deliverSupplies, ARES_radioTower, ARES_killOfficer, ARES_destroyCache, ARES_destroyAA, ARES_clearMinefield];
};
/* Obsolete since 10/5/2021
ARES_playMessage = {
	[terminal,3] call BIS_fnc_dataTerminalAnimate;
	sleep 3;
	terminal say3D "Sound_message";
	terminal setObjectTexture [0,"eye.jpg"];
	screen1 setObjectTexture [0,"eye.jpg"]; 
	screen2 setObjectTexture [0,"eye.jpg"]; 
	sleep 45;
	_nil = [] spawn {
		while {alive speakerBase} do {
			speakerBase say3D ["Sound_alarm", 1000];
			sleep 2;
		};
	};
	bomb1a setDamage 1;
};

ARES_playSaved = {
	sleep 1;
	computer say3D "Sound_saved_data";
	sleep 30;
	[terminal,1] call BIS_fnc_dataTerminalAnimate;
	[
		terminal,											// Object the action is attached to
		"Установить связь",										// Title of the action
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Idle icon shown on screen
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Progress icon shown on screen
		"_this distance _target < 3",						// Condition for the action to be shown
		"_caller distance _target < 3",						// Condition for the action to progress
		{},													// Code executed when action starts
		{},													// Code executed on every progress tick
		{ remoteExec ["ARES_playMessage"] },													// Code executed on completion
		{},													// Code executed on interrupted
		[],													// Arguments passed to the scripts as _this select 3
		5,													// Action duration [s]
		5,													// Priority
		true,												// Remove on completion
		false												// Show in unconscious state
	] remoteExec ["BIS_fnc_holdActionAdd", 0, terminal];	// MP compatible implementation
};

[
	computer,											// Object the action is attached to
	"Проиграть запись",										// Title of the action
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Idle icon shown on screen
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",	// Progress icon shown on screen
	"_this distance _target < 3",						// Condition for the action to be shown
	"_caller distance _target < 3",						// Condition for the action to progress
	{},													// Code executed when action starts
	{},													// Code executed on every progress tick
	{ remoteExec ["ARES_playSaved"] },													// Code executed on completion
	{},													// Code executed on interrupted
	[],													// Arguments passed to the scripts as _this select 3
	5,													// Action duration [s]
	5,													// Priority
	true,												// Remove on completion
	false												// Show in unconscious state
] remoteExec ["BIS_fnc_holdActionAdd", 0, computer];	// MP compatible implementation
*/