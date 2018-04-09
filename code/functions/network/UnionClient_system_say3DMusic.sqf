#include "..\..\..\script_macros.hpp"
private["_object","_sound","_dist"];
_object = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;
_dist = [_this,2,100,[0]] call BIS_fnc_param;

if (isNull _object OR _sound == "") exitWith {};
if (_object distance player > _dist) exitWith {};

_object say3D _sound;