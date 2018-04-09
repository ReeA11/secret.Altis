/*

	Filename: 	UnionClient_system_isVehicleKind.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\script_macros.hpp"
private _vehicle = param [0,objNull,[objNull]];
((_vehicle isKindOf "LandVehicle") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "Air"))