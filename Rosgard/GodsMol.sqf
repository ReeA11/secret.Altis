private["_Statua","_group"];
_Statua = nearestObject[player,"Land_AncientStatue_02_F"];
_group = _Statua getVariable["GodsOwner",grpNull];

if(isNil{(group player)getVariable "gang_name"})exitWith{titleText["Вы должны находиться в банде!","PLAIN"]};
if(_group isEqualTo (group player))exitWith{titleText["Ваша банда уже захватила этот храм","PLAIN"]};
if(_Statua getVariable["GodsCapture",false])exitWith{hint "Захват уже идет!"};

disableSerialization;
private _cP = 0;
titleText["Захват храма","PLAIN"];
while {true} do {
	_cP = _cP + 0.0075;
	[_cP,"action"] call UnionClient_system_progressBar;
	_Statua setVariable["GodsCapture",true,true];
	if (_cP >= 1 OR life_interrupted OR (call UnionClient_system_isInterrupted)) exitWith {};
	call UnionClient_animation_kneelWork;	
	uiSleep 0.26;
};
["life_progress"] call UnionClient_gui_DestroyRscLayer;
life_action_inUse = false;
_Statua setVariable["GodsCapture",false,true];
if(call UnionClient_system_isInterrupted)exitWith{life_interrupted = false};
["AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon"]call UnionClient_system_animDo;
if(life_interrupted)exitWith{life_interrupted = false;titleText["Захват отменён","PLAIN"];};
titleText["Храм был захвачен","PLAIN"];

[(group player),_Statua]remoteExecCall["Ros_fnc_GodsSeizure",2]; 