/*
	
	Filename: 	UnionClient_system_insurancePayDone.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"
private["_vehicle","_price","_displayName"];
_vehicle = [_this,0,"",[""]] call BIS_fnc_param;
_price = [_this,1,0,[0]] call BIS_fnc_param;

_price = round (_price / 2);

_displayName = getText(configFile >> "CfgVehicles" >> (_vehicle) >> "displayName");
hint format["Ваша техника (%1) попала под страховой случай!.\n\nСтраховая компания возмещает вам часть стоимости и переводит на банковский счет $%2",_displayName,[_price] call UnionClient_system_numberText];

["atm","add",_price,"insurancePay"] call UnionClient_system_myCash;
life_action_inUse = false;