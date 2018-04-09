/*
	
	Filename: 	UnionClient_system_refuelJerrycan.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"
private _oldItem = param [0,"",[""]];
if (life_action_inUse OR (call UnionClient_system_isInterrupted)) exitWith {};
call UnionClient_actions_inUse;

private _doAction = false;
private["_newItem","_progressName","_progressDone","_sleep","_sound","_price","_fuelIndex","_stationPosition","_fuelReserve"];
if (([cursorObject] call UnionClient_system_getModelName) in ["fuelstation_feed_f","metalbarrel_f","flexibletank_01_f","fs_feed_f","fuelstation_01_pump_f","fuelstation_02_pump_f"]) then {
	
	_progressName = "Пополняем канистру";
	_progressDone = "Вы пополнили канистру.";
	_sleep = 0.15;	
	_newItem = "extItem_Fuelcan";
	_doAction = true;
	_sound = "action_refuel";
	{
		if (((_x select 0) distance (position player)) <= 50) exitWith {
			_fuelIndex = _forEachIndex;
			_price = _x select 1;
			_fuelReserve = floor (_x select 2);
			_stationPosition = _x select 0;
		};
	} forEach editPriceFuel_Data;
};

if ((isNil "_fuelIndex") or (isNil "_price")) exitWith {
	hint "Рядом с вами нет рабочих АЗС!";
	life_action_inUse = false;
	life_interrupted = false;
};

if (_fuelReserve < 20) exitWith {
	hint "На АЗС недостаточно топлива";
	life_action_inUse = false;
	life_interrupted = false;
};


if (CASH < (_price*20)) exitWith {hint localize "STR_ATM_NotEnoughCash"};

private _action = [
	format["Вы действительно хотите заполнить канистру на 20 литров за %1$?",_price*20],
	"Пополнение канистры",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;
if (!isNil "_action" && {!_action}) exitWith {
	life_action_inUse = false;
	life_interrupted = false;
};

["cash","take",_price*20] call UnionClient_system_myCash;
hint format ["Вы оплатили %1$ за 20 литров топлива!",_price*20];

{	
	private _Name = _x getvariable ["gang_name",""];
	if (_Name isEqualTo "ALPHA OIL CORPORATION") exitWith {
		_x setVariable ["gang_bank",(_x getVariable ["gang_bank",0])+(_price*20),true];
		storageFuel_Money = [_x getvariable ["gang_bank",0]];
		publicVariable "storageFuel_Money";
		[[1,_x,side _x],"updateGang"] call UnionClient_system_hcExec;
	};
				
	if (_forEachIndex isEqualTo ((count allGroups)-1)) exitWith {
		storageFuel_Money = [(storageFuel_Money select 0) + (_price*20)];
		publicVariable "storageFuel_Money";
		[[8],"updateGang"] call UnionClient_system_hcExec;
	};
} forEach allGroups;

disableSerialization;
private _cP = 0;
player say3D _sound;
titleText[_progressName,"PLAIN"];
while {true} do {
	_cP = _cP + 0.01;
	[_cP] call UnionClient_system_progressBar;	
	if (_cP >= 1 OR life_interrupted OR (call UnionClient_system_isInterrupted)) exitWith {};	
	_fuelReserve = _fuelReserve - 0.1;
	call UnionClient_animation_kneelWork;
	uiSleep _sleep;	
};

editPriceFuel_Data set [_fuelIndex,[_stationPosition,_price,_fuelReserve]];
publicVariable "editPriceFuel_Data";

["life_progress"] call UnionClient_gui_DestroyRscLayer;
life_action_inUse = false;

if (call UnionClient_system_isInterrupted) exitWith {life_interrupted = false};

["AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon"] call UnionClient_system_animDo;

if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]};

if !([_oldItem] call UnionClient_system_removeItem) exitWith {hint "Не удалось удалить предмет"};
if !([_newItem] call UnionClient_system_addItem) exitWith {hint "Не удалось добавить предмет"};

titleText[_progressDone,"PLAIN"];