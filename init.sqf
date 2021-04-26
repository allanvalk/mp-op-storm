_nil = [] execVM "fpsCounter.sqf";
_nil = [] execVM "customTasks.sqf";

ARES_musicList = [["Armored_Cavalry", 217], ["Heat", 157], ["Hindsight", 137], ["Infiltration", 215], ["Jumping_In", 264], ["KIA", 149], ["Main_Menu", 200], ["Main_Theme", 103], ["Multiplayer_Victory_and_Stats", 105], ["On_My_Way", 192], ["On_The_Offensive", 296], ["Run_For_Cover", 106], ["Scythe", 230], ["Search_and_Destroy", 176], ["Suicide_Mission", 171], ["Take_It_Out", 201], ["Temper", 131], ["The_Final_Push", 138], ["Turmoil", 151], ["Undaunted", 133], ["Underground", 184]];

[west, "aresDefaultRespawn"] call BIS_fnc_addRespawnInventory;

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

ARES_showGui = {
	disableSerialization;
	createDialog "ARES_BuyMenu_Dialog";
};

ARES_requestMission = {
	_nil = [] spawn selectRandom [ARES_saveCivilian, ARES_deliverSupplies, ARES_radioTower, ARES_killOfficer, ARES_destroyCache, ARES_destroyAA];
};
