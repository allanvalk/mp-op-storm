_nil = [] spawn {
	sleep 0.1;
	_action = ["buyMenu","Buy Menu","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_requestleadership_ca.paa",{[] call ARES_showGui},{(player inArea base) && (player getVariable ["isCommand", false])}] call ace_interact_menu_fnc_createAction;
	[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
	sleep 0.1;
	_action = ["buildMenu","Build Menu","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_requestleadership_ca.paa",{[] call ARES_showBuildGui},{(player inArea base) && (player getVariable ["isCommand", false])}] call ace_interact_menu_fnc_createAction;
	[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
	sleep 0.1;
	if ((["autoTask", 0] call BIS_fnc_getParamValue) == 0) then {
		_action = ["requestMission","Request Mission","\a3\ui_f_orange\Data\CfgOrange\Missions\action_nato_ca.paa",{remoteExecCall ["ARES_requestMission", 2]},{(player getVariable ["isCommand", false]) && (count ARES_activeCustomTask == 0)}] call ace_interact_menu_fnc_createAction;
		[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
	};
	sleep 0.1;
	if ((["autoTask", 0] call BIS_fnc_getParamValue) == 0) then {
		_action = ["cancelMission","Cancel Mission","\a3\ui_f_orange\Data\CfgOrange\Missions\action_nato_ca.paa",{remoteExecCall ["ARES_cancelTask", 2]},{(player getVariable ["isCommand", false]) && (count ARES_activeCustomTask != 0)}] call ace_interact_menu_fnc_createAction;
		[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
	};
	sleep 0.1;
	_action = ["saveMission","Save Mission","\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\holdAction_sleep_ca.paa",{remoteExec ['ARES_saveMission', 2]},{(serverCommandAvailable "#lock")}] call ace_interact_menu_fnc_createAction;
	[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
	sleep 0.1;
	_action = ["loadMission","Load Mission","\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\holdAction_sleep_ca.paa",{remoteExec ['ARES_loadMission', 2]},{(serverCommandAvailable "#lock")}] call ace_interact_menu_fnc_createAction;
	[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

_nil = [] spawn {
	while {true} do {
		playSound "Sound_ambience";
		sleep 255;
	};
};

_nil = [] spawn {
	sleep 5;
	[] call ARES_playMusic;
};

_nil = [] spawn {
	sleep 5;
	"Добро пожаловать на сервер Ares Wargame!" hintC [
		"Ожесточённые столкновения в напряжённой борьбе за территорию.",
		"Доступ почти ко всем имеющимся видам экипировки и техники.",
		"Обилие уникальных дополнительных игровых возможностей и задач.",
		"Расширенный привычный PvE и PvP геймплей ArmA III.",
		"https://vk.com/ares_wargame"
	];
};