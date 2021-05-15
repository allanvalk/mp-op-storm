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
