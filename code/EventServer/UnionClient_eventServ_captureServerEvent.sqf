#include "..\..\script_macros.hpp"
private _hideout = nearestObject [player, "Flag_BI_F"];
private _group = _hideout GVAR ["gangOwner",grpNull];

if (isNil {grpPlayer GVAR "gang_name"}) exitWith {titleText["У вас нету группировки","PLAIN"];};
if (EQUAL(_group,grpPlayer)) exitWith {titleText["Эта территория уже под вашим контролем","PLAIN"]};

private ["_action","_cpRate"];
if(!isNull _group) then {
	private _gangName = _group GVAR ["gang_name",""];
	_action = [
		format[localize "STR_GNOTF_AlreadyControlled",_gangName],
		localize "STR_GNOTF_CurrentCapture",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
	] call BIS_fnc_guiMessage;
	
	_cpRate = 0.1;
};

if(!isNil "_action" && {!_action}) exitWith {titleText["Захват отменен","PLAIN"];};
call UnionClient_actions_inUse;

disableSerialization;

private _cP = 0;
titleText["Захватываю","PLAIN"];
while {true} do {
	_cP = _cP + 0.1;
	[_cP,"criminal"] call UnionClient_system_progressBar;
	[_hideout,"inCapture",true] call CBA_fnc_setVarNet;
	if (_cP >= 1 OR life_interrupted OR (call UnionClient_system_isInterrupted)) exitWith {};
	call UnionClient_animation_kneelWork;	
	uiSleep 0.5;
};

["life_progress"] call UnionClient_gui_DestroyRscLayer;
life_action_inUse = false;

[_hideout,"inCapture"] call UnionClient_system_clearGlobalVar;

if (call UnionClient_system_isInterrupted) exitWith {life_interrupted = false};

["AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon"] call UnionClient_system_animDo;

if (life_interrupted) exitWith {life_interrupted = false; titleText["Захват отменен","PLAIN"];};

titleText["Захват окончен","PLAIN"];
[_hideout,"gangOwner",grpPlayer] call CBA_fnc_setVarNet;

private _name = grpPlayer getVariable ["gang_name",""];

[1,format["Ресурс был захвачен группировкой %1!",_name]] remoteExec ["UnionClient_system_broadcast",0];