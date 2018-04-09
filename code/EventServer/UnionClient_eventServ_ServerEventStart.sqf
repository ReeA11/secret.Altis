#include "..\..\script_macros.hpp"
private ["_dialog","_zone","_infocomp","_time","_pos","_name","_object"];

	disableSerialization;
	_time = _this select 0;
	
	if(_time == "") exitWith {hint "Введите время!";};
	if(EventStart) exitWith {hint "Подождите пока закончиться текущий захват!";};
	
	_parseNumbertime = parseNumber(_time);

	_dialog = findDisplay 7777;
	if (isNull _dialog) exitWith {hint "Error";};
	
	_zone = CONTROL_DATA(1500);
	_infocomp = call compile _zone;
	_pos = _infocomp select 0;
    _name = _infocomp select 1;
	
	_object = "Flag_BI_F" createVehicle _pos;
	
	_marker = createMarker ["Zonemarker", _pos];

    "Zonemarker" setMarkerColor "ColorRed";
    "Zonemarker" setMarkerType "Empty";
    "Zonemarker" setMarkerShape "ELLIPSE";
    "Zonemarker" setMarkerSize [500,500];

    _markerText = createMarker ["Zonemarkertxt", _pos];
    "Zonemarkertxt" setMarkerColor "ColorBlack";
    "Zonemarkertxt" setMarkerText format["Захват ресурса %1",_name];
    "Zonemarkertxt" setMarkerType "mil_warning";
	
	_parseNumbermin = _parseNumbertime * 60;
	
	{
    _rating = _x getVariable ["Rating",0];
    if (_rating >= 0) then {
    [_parseNumbertime] remoteExec ["UnionClient_eventServ_TimerRemoteExec",units _x];
    };
    } forEach allGroups;
	
	[[_object,_parseNumbertime,_name],"eventCapture","TON",false] call UnionClient_system_hcExec;
	
	sleep 3;
	
	_object spawn {
	while {true} do {
		if !(EventStart) exitWith {};
		[_this,"terminator",8000] remoteExec ["UnionClient_system_say3DMusic",RCLIENT];
		sleep 125;
	};
    };
