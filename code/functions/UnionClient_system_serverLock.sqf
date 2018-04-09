/*

	Filename: 	UnionClient_system_serverLock.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
/* Выключено до лучших времен
#include "..\..\script_macros.hpp"
private ["_type","_modifier","_amount","_rnd"];
if(FETCH_CONST(life_adminlevel) > 0) exitWith {};
uiSleep 60;

[format["Внимание! Вы зашли на сервер Verum #%1.<br/><br/>Через 5 минут вы будете закреплены и не сможете зайти на другие сервера Verum до рестарта!",life_server]] call UnionClient_system_hint;

uiSleep 300;

life_myserver = life_server;
if (life_playerTrasnferDone) exitWith {};
[16] call UnionClient_session_updatePartial;

["Вы были закреплены на этом сервере и не сможете зайти на другие сервера Verum до следующего рестарта!","done"] call UnionClient_system_hint;
*/