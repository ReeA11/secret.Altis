#include "..\..\script_macros.hpp"

if !(NOTINVEH(player)) exitWith {hint "Вы не можете заправить технику, находясь в ней!";};
_vehicle = nearestObjects [(_this select 0),["Air","LandVehicle","Armored"],20];
if ((count _vehicle) isEqualTo 0) exitWith {hint "В радиусе 20 метров нет техники!";};
_vehicle = _vehicle select 0;
if (isEngineOn _vehicle) exitWith {hint "Выключите двигатель перед началом заправки!"};

private ["_litres","_fuel","_fuelIndex","_price","_fuelReserve","_stationPosition","_step"];
{
	if ((_x select 0) distance (_this select 0) <= 50) exitWith {
		_fuelIndex = _forEachIndex;
		_price = _x select 1;
		_fuelReserve = floor (_x select 2);
		_stationPosition = _x select 0;
	};
} forEach editPriceFuel_Data;
_vehicleName = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayname");
_maxFuel = round (getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "fuelCapacity"));
_fuel = round (_maxFuel*(fuel _vehicle));
disableSerialization;
createDialog "fuelReserve";
_dialog = findDisplay 3000;
_text = _dialog displayCtrl 3001;
_edit = _dialog displayCtrl 3002;
_button_1 = _dialog displayCtrl 3003;
if !((_maxFuel-_fuel) isEqualTo 0) then {
	_button_1 buttonSetAction format ["((findDisplay 3000) displayCtrl 3002) ctrlSetText (str %2)",_edit,floor (_maxFuel-_fuel)];
} else {
	_button_1 ctrlEnable false;
	_button_1 ctrlSetTooltip "Техника заправлена на 100%";
};

_button_2 = _dialog displayCtrl 3004;



private _flag = false;
while {dialog} do {
	if !(_flag isEqualTo (ctrlText _edit)) then {
		_litres = abs (parseNumber (ctrlText _edit));
		if (_litres > _fuelReserve) then {
			_button_2 ctrlEnable false;
			_button_2 ctrlSetTooltip format ["На АЗС нет %1 литр(ов/а) топлива, заправка невозможна!",_litres];
		} else {
			_button_2 ctrlEnable true;
			_button_2 ctrlSetTooltip format ["Нажмите, чтобы начать заправку техники"];
		};
		if (_litres <= 0) then {
			_edit ctrlSetText "";
			_litres = 0;
		} else {
			_litres = floor _litres;
			_edit ctrlSetText str _litres;
		};

		if (_litres > (_maxFuel-_fuel)) then {
			_button_2 ctrlEnable false;
			if !(_litres isEqualTo 0) then {
				_button_2 ctrlSetTooltip format ["В машину не вместится еще %1 литра(ов/а) топлива",_litres];
			} else {
				if ((_maxFuel-_fuel) isEqualTo 0) then {
					_button_2 ctrlSetTooltip "Техника заправлена на 100%";
				} else {
					_button_2 ctrlSetTooltip "Введите количество топлива для заправки";
				};
			};
		} else {
			_button_2 ctrlEnable true;
			_button_2 ctrlSetTooltip format ["Нажмите, чтобы начать заправку техники"];
		};

		_flag = ctrlText _edit;
		_text ctrlSetStructuredText parseText format ["<t color='#000000'><t size='%8'>Транспортное средство: <t color='#c95353'>%1</t><br/>Заполнено: <t color='#c95353'>%2%6</t><br/>Вместимость бака: <t color='#c95353'>%3</t> литр(ов/а)<br/>Количество топлива: <t color='#c95353'>%4</t> литр(ов/а)<br/><br/>Цена за литр топлива: <t color='#c95353'>%7</t>$<br/>Цена заправки: <t color='#c95353'>%5</t>$<br/>Количество топлива на АЗС: <t color='#c95353'>%9</t> л</t></t>",_vehicleName,round ((fuel _vehicle)*100),round _maxFuel,round _fuel,[_litres*_price] call BIS_fnc_numberText,"%",_price,((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 20,_fuelReserve];
	};
	uiSleep 0.01;
};

if (isNil "fuelStation_Button_OK") exitWith {};
fuelStation_Button_OK = nil; 
if (_fuelReserve < _litres) exitWith {hint "Недостаточно топлива на заправке!"};
if (CASH < (_price*_litres)) exitWith {hint localize "STR_ATM_NotEnoughCash"};
["cash","take",(_price*_litres)] call UnionClient_system_myCash;

{	
	private _Name = _x getvariable ["gang_name",""];
	if (_Name isEqualTo "ALPHA OIL CORPORATION") exitWith {
		_x setVariable ["gang_bank",(_x getVariable ["gang_bank",0])+(_price*_litres),true];
		storageFuel_Money = [_x getvariable ["gang_bank",0]];
		publicVariable "storageFuel_Money";
		[[1,_x,side _x],"updateGang"] call UnionClient_system_hcExec;
	};
				
	if (_forEachIndex isEqualTo ((count allGroups)-1)) exitWith {
		storageFuel_Money = [(storageFuel_Money select 0) + (_price*_litres)];
		publicVariable "storageFuel_Money";
		[[8],"updateGang"] call UnionClient_system_hcExec;
	};
} forEach allGroups;

_Display = findDisplay 46;

_BackGround = _Display ctrlCreate ["RscText", -1];  
_BackGround ctrlSetPosition [0.29375 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,0.4125 * safezoneW,0.033 * safezoneH];  
_BackGround ctrlSetBackgroundColor [1,1,1,0.75];  
_BackGround ctrlCommit 0; 

_Occupancy = _Display ctrlCreate ["RscText", -1];  
_Occupancy ctrlSetPosition [0.29375 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,0 * safezoneW,0.033 * safezoneH];    
_Occupancy ctrlSetBackgroundColor [0,0,0,0.75];  
_Occupancy ctrlCommit 0;  

_Text = _Display ctrlCreate ["RscStructuredText", -1];  
_Text ctrlSetPosition [0.29375 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,0.4125 * safezoneW,0.033 * safezoneH];  
_Text ctrlSetBackgroundColor [-1,-1,-1,-1];  
_Text ctrlsetStructuredText parseText ("<t align='center' shadow='1.5' size='1.5'>%1</t>"); 
_Text ctrlSetTextColor [1,0,1,1];
_Text ctrlCommit 0;

if (_litres	> 700) then {
_step = 0.4;
} else {
_step = 0.1;
};	

for "_i" from 0 to _litres step _step do {
	if ((_vehicle distance (_this select 0)) > 20) exitWith {
		hint format ["Заправка была прекращена, так как транспорт покинул территорию АЗС. Заправлено: %1 литр(ов/а).",round _i];
		_Text ctrlsetStructuredText (parseText "<t align='center' shadow='0.1' size='1.5'>Заправка окончена</t>");
	};
	_Text ctrlsetStructuredText (parseText format["<t align='center' shadow='0.1' size='1.5'>%1%2</t>",round ((_i/_litres)*100),"%"]);
	_ColorText = [1 - (_i/_litres),0 + (_i/_litres),-1,1];
	_Occupancy ctrlSetPosition [0.29375 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,(0.4125*(_i/_litres)) * safezoneW,0.033 * safezoneH];    
	_Occupancy ctrlCommit 0;  
	_Text ctrlSetTextColor _ColorText; 
	uiSleep 0.01;
	_fuelReserve = _fuelReserve - _step;
	_fuel = _fuel + _step;
	_vehicle setFuel (_fuel/_maxFuel);
};
_Text ctrlsetStructuredText (parseText "<t align='center' shadow='0.1' size='1.5'>Заправка окончена</t>");
uiSleep 1;
ctrlDelete _BackGround;
ctrlDelete _Occupancy;
ctrlDelete _Text;
editPriceFuel_Data set [_fuelIndex,[_stationPosition,_price,_fuelReserve]];
publicVariable "editPriceFuel_Data";