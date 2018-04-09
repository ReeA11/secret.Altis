/*

	Filename: 	UnionClient_evh_cameraView.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\script_macros.hpp"
params ["_playerUnit", "_newCameraMode"];
if (life_inwarzone OR (_playerUnit GVAR ["inPBfight",false])) then {
	if !(_newCameraMode in ["INTERNAL","GUNNER"])  then {
		_playerUnit switchCamera "INTERNAL";
		hint "Вы находитесь в зоне боевых действий! Вид от третьего лица недоступен!";
	};
};