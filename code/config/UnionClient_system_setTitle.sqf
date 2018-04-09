/*

	Filename: 	UnionClient_system_setTitle.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"
[] call UnionClient_system_titleConfig;
[player,"realtitle",M_CONFIG(getText,"LifeCfgTitles",life_myTitleID,"title")] call CBA_fnc_setVarNet;