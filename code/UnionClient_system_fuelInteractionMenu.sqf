/*

	Filename: 	UnionClient_system_medInteractionMenu.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\script_macros.hpp"
disableSerialization;
if (dialog) exitWith {};

createDialog "UnionDialogPlayerInteraction";
waitUntil {!isNull (findDisplay 37400)};

private _Btn1 = CONTROL(37400,37402);
private _Btn2 = CONTROL(37400,37403);
private _Btn3 = CONTROL(37400,37404);
private _Btn4 = CONTROL(37400,37405);
private _Btn5 = CONTROL(37400,37406);
private _Btn6Half = CONTROL(37400,37407);
private _Jtime = CONTROL(37400,37408);
private _Btn6 = CONTROL(37400,37409);
private _Btn7 = CONTROL(37400,37410);
private _Btn8 = CONTROL(37400,37411);
private _Btn9 = CONTROL(37400,37412);
private _Btn10 = CONTROL(37400,37413);
private _Btn11 = CONTROL(37400,37414);
private _Btn12 = CONTROL(37400,37415);

_Btn1 ctrlSetText "Достать концентрат";
if (player distance fuelStorage_House <= 50) then {
	_Btn1 buttonSetAction "closeDialog 0; [0] spawn UnionClient_editStorageFuel;";
} else {
	_Btn1 ctrlSetTooltip "Вы далеко от топливного склада!";
	_Btn1 ctrlEnable false;
};

_Btn2 ctrlSetText "Положить концентрат";
if (player distance fuelStorage_House <= 50) then {
	_Btn2 buttonSetAction "closeDialog 0; [1] spawn UnionClient_editStorageFuel;";
} else {
	_Btn2 ctrlSetTooltip "Вы далеко от топливного склада!";
	_Btn2 ctrlEnable false;
};

_Btn3 ctrlSetText "Пополнить АЗС";
if (count(nearestObjects [player,["Land_fs_feed_F","Land_FuelStation_Feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_Shed_F","Land_FuelStation_01_pump_malevil_F"],50])>0) then {
	_Btn3 buttonSetAction "closeDialog 0; [] spawn UnionClient_editFuelInRefillStation;";	
} else {
	_Btn3 ctrlSetTooltip "Вы далеко от АЗС!";
	_Btn3 ctrlEnable false;
};

_Btn4 ctrlSetText "Управление АЗС";
if (life_civlevel > 2) then {
	_Btn4 buttonSetAction "closeDialog 0; [] spawn VerumClient_editPriceFuelReserve;";
} else {
	_Btn4 ctrlSetTooltip "У вас нет доступа!";
	_Btn4 ctrlEnable false;
};

_Btn5 ctrlSetText "Изменить цену концентрата";
if (life_civlevel > 2) then {
	_Btn5 buttonSetAction "closeDialog 0; [2] spawn UnionClient_editStorageFuel;";
} else {
	_Btn5 ctrlSetTooltip "У вас нет доступа!";
	_Btn5 ctrlEnable false;
};

_Btn6 ctrlShow False;
_Btn6Half ctrlShow false;
_Jtime ctrlShow false;
_Btn7 ctrlShow False;
_Btn8 ctrlShow False;
_Btn9 ctrlShow False;
_Btn10 ctrlShow False;
_Btn11 ctrlShow False;
_Btn12 ctrlShow False;