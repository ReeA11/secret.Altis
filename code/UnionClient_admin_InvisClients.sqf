/*
	
	Filename: 	UnionClient_admin_InvisClients.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {};
if (_unit == player) exitWith {};

_unit hideObject true;