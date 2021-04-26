params
[
	["_object",player,[objNull]],
	["_class","REPLACE",[""]],
	["_displayName","REPLACE",[""]],
	["_icon","\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa",[""]],
	["_role","Default",[""]],
	["_conditionShow","true",[""]]
];

private _indent = "	";
private _class = format ["class %1",_class];
private _displayName = format ["displayName = ""%1"";",_displayName];
private _icon = format ["icon = ""%1"";",_icon];
private _role = format ["role = ""%1"";",_role];
private _conditionShow = format ["show = ""%1"";",_conditionShow];
private _uniformClass = format ["uniformClass = ""%1"";",uniform _object];
private _backpack = format ["backpack = ""%1"";",backpack _object];
private _export = _class + endl + "{" + endl + _indent + _displayName + endl + _indent + _icon + endl + _indent + _role + endl + _indent + _conditionShow + endl + _indent + _uniformClass + endl + _indent + _backpack + endl;
private _weapons = weapons _object;
private _primWeaponItems = primaryWeaponItems _object;
private _secWeaponItems = secondaryWeaponItems _object;
private _assignedItems = assigneditems _object;
private _fnc_addArray =
{
	params ["_name","_array"];
	_export = _export + format [_indent + "%1[] = {",_name];
	{
		if (_foreachindex > 0) then {_export = _export + ",";};
		_export = _export + format ["""%1""",_x];
	} foreach _array;
	_export = _export + "};" + endl;
};

["weapons",_weapons + ["Throw","Put"]] call _fnc_addArray;
["magazines",magazines _object] call _fnc_addArray;
["items",items _object] call _fnc_addArray;
["linkedItems",[vest _object,headgear _object,goggles _object] + _assignedItems - _weapons + _primWeaponItems + _secWeaponItems] call _fnc_addArray;
_export = _export + "};" + endl + "//";

copyToClipboard _export;
_export

