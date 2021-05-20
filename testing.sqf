_nil = [] spawn {
	["ChromAberration", 200, [0.05, 0.05, true]] spawn {
		params ["_name", "_priority", "_effect", "_handle"];
		ppEffectCreate [_name, _priority];
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
		_handle ppEffectEnable true;
		_nil = [] spawn {
			while {player inArea labArea_1} do {
				playSound "Sound_numbers";
				sleep 39;
			};
		};
		while {player inArea labArea_1} do {
			_handle ppEffectAdjust [0.08, 0.08, true];
			_handle ppEffectCommit 5;
			uiSleep 5;
			[player, 0.25, "head", "unknown"] call ace_medical_fnc_addDamageToUnit;
			_handle ppEffectAdjust [0.03, 0.03, true];
			_handle ppEffectCommit 2;
			uiSleep 2;	
		};
		_handle ppEffectAdjust [0, 0, true];
		_handle ppEffectCommit 5;
		uiSleep 5;
		_handle ppEffectEnable false;
		ppEffectDestroy _handle;
	};
};


[objNull, player] call ace_medical_treatment_fnc_fullHeal;

_cargoItem = getItemCargo crate1;
_cargoWeapon = getWeaponCargo crate1;
_cargoMagazine = getMagazineCargo crate1;
_cargo = [[], []];
			
(_cargo select 0) append (_cargoItem select 0);
(_cargo select 0) append (_cargoWeapon select 0);
(_cargo select 0) append (_cargoMagazine select 0);
(_cargo select 1) append (_cargoItem select 1);
(_cargo select 1) append (_cargoWeapon select 1);
(_cargo select 1) append (_cargoMagazine select 1);

copyToClipboard str _cargo;


[["rhs_weap_fgm148","rhs_fgm148_magazine_AT"],[1,5]]
[["rhs_weap_fim92","rhs_fim92_mag"],[1,5]]
[["launch_NLAW_F"],[10]]
UK3CB_B_MaxxPro_M2_US_W

[["hithull","hitfuel","hitavionics","hitmissiles","hitengine1","hitengine2","hitengine","hithrotor","hittail","hitvrotor","hitglass1","hitglass2","hitglass3","hitglass4","hitglass5","hitglass6","hitpylon1","hitpylon2","hitpylon3","hitpylon4","hitpylon5","hitpylon6","hitglass7","hitglass8","hitwinch","hitrglass","hitlglass","hitengine3","hittransmission","hitlight","hithydraulics","hitgear","hithstabilizerl1","hithstabilizerr1","hitvstabilizer1","hitpitottube","hitstaticport","hitstarter1","hitstarter2","hitstarter3","hitturret","hitgun","#l svetlo"],["","fuel_hit","avionics_hit","","engine_1_hit","engine_2_hit","","velka vrtule","","mala vrtule","glass1","glass2","glass3","glass4","glass5","","hit_pylon_1","hit_pylon_2","hit_pylon_3","hit_pylon_4","hit_pylon_5","hit_pylon_6","","","","","","","","","","","","","","","","","","","","","l svetlo"],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]]
[["hithull","hitfuel","hitengine","hitduke1","hitduke2","hitglass1","hitglass2","hitglass3","hitglass4","hitglass5","hitglass6","hitlfwheel","hitlf2wheel","hitrfwheel","hitrf2wheel","hitbody","hitrglass","hitlglass","hitlbwheel","hitlmwheel","hitrbwheel","hitrmwheel","#light_l","#light_l","#light_r","#light_r","#light_l","#light_r","#light_r","#light_l"],["karoserie","palivo","motor","","","glass1","glass2","glass3","glass4","glass5","glass6","wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering","karoserie","","","","","","","light_l","light_l","light_r","light_r","light_l","light_r","light_r","light_l"],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]]

speakerLab say3D ["production", 1000]

playSound3D [getMissionPath "production.ogg", speakerLab, false, [], 5, 1, 1000];

[filename, soundSource, isInside, soundPosition, volume, soundPitch, distance]

[speakerLab ,"Sound_production", 1000] remoteExec ["say3D", 0];
["Sound_comp_turrets", 1000] remoteExec ["say3D", 0];
["Sound_comp_turrets_shutdown", 1000] remoteExec ["say3D", 0];

speakerLab say3D ["Sound_production", 1000];

serverStuff = str diag_activeSQFScripts;

{ diag_log _x } forEach diag_activeSQFScripts;

diag_activeSQFScripts

copyToClipboard