/*

	Filename: 	UnionClient_system_WeaponAssembled.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"
params ["_unit","_object"];
if (EQUAL((typeof _object),"sab_CUAV_UAV_Orange")) exitWith {};
if (EQUAL((typeof _object),"B_UAV_01_F")) exitWith {};

_object disableTIEquipment true;