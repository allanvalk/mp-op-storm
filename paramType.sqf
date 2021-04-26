private ["_type"];
if !(player call bis_fnc_isUnitVirtual) then {
	_type = _this select 0;
	if (_type > 0) then {
		_fnc_init = {
			_this spawn {
				_player = _this select 0;
				if !(alive _player) exitwith {};
				waituntil {!([] call bis_fnc_isLoading)};
				_player addrating -1e10;
			};
		};

		[player,objnull] call _fnc_init;
		player addeventhandler ["respawn",_fnc_init];
	};
};
