#include "..\..\script_macros.hpp"
private _time = [_this,0,-1,[0]] call BIS_fnc_param;
[_time] spawn UnionClient_eventServ_Timer;