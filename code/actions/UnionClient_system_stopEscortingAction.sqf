/*

	Filename: 	UnionClient_system_stopEscortingAction.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/
	
*/
#include "..\..\script_macros.hpp"
{
	detach _x;
} forEach (attachedObjects player);