#include "..\..\script_macros.hpp"
private["_countDown","_time","_timer","_uiDisp","_rscLayer","_marker","_markerName","_warn","_EvTime","_timeToEnd"];
_EvTime = param [0,15,[0]];
life_event_endtime = 0;

_uiDisp = GVAR_UINS ["life_timer",displayNull];
if (isNull _uiDisp) then {
	["life_timer","PLAIN"] call UnionClient_gui_CreateRscLayer;
	_uiDisp = GVAR_UINS ["life_timer",displayNull];
};
_timer = _uiDisp displayCtrl 38301;
_time = time + (_EvTime * 60);

life_life_timer = true;
while {true} do {
	_timeToEnd = _time - time;
	life_event_endtime = round (_timeToEnd/60);
	if (round(_timeToEnd) < 1) exitWith {life_life_timer = false;};
	if (LSNOTALIVE(player) && ((round(_timeToEnd)) > 0)) exitWith {};

	_timer ctrlSetText format["Бой за ресурс: %1",[_timeToEnd,"MM:SS"] call BIS_fnc_secondsToString];
	uiSleep 1;
};

if !(life_life_timer) then {
	life_event_endtime = 0;
};

["life_timer"] call UnionClient_gui_DestroyRscLayer;