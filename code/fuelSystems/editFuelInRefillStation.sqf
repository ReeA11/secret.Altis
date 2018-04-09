_refillStation = (nearestObjects [player,["Land_fs_feed_F","Land_FuelStation_Feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_Shed_F","Land_FuelStation_01_pump_malevil_F"],50]) select 0; 
if (isNull _refillStation) exitWith {hint "Поблизости нет АЗС";}; 
 
 
private ["_index","_refillStation_Data"]; 
{ 
	if ((_x select 0) distance _refillStation <= 50) exitWith { 
	 	_index = _forEachIndex;
		_refillStation_Data = _x;
	}; 
} forEach editPriceFuel_Data;  
 
_fuelInStation = _refillStation_Data select 2; 
 
if (_fuelInStation > 9990) exitWith { 
	hint "АЗС заправлена топливом на 100%"; 
}; 
if (life_inv_petrol < 1) exitWith { 
	hint "У вас с собой нет концентрата, заправка АЗС невозможна!"; 
};

disableSerialization;  
createDialog "editFuel";  
_dialog = findDisplay 3010;   
_slider = _dialog displayCtrl 3012;  
 

_fuelInPlayer = life_inv_petrol; 
if ((_fuelInPlayer*50) > (10000 - _fuelInStation)) then { 
	_fuelInPlayer = floor ((10000 - _fuelInStation)/50); 
}; 

_slider sliderSetRange [1,_fuelInPlayer];  
private "_fuel"; 
 
while {dialog} do { 
if (isNull _slider) exitWith {};
	_fuel = floor (sliderPosition _slider); 
	uiSleep 0.1; 
}; 
 
if (isNil "refuelStation_editFuel") exitWith { 
	hint "Нажали ESC"; 
}; 
 
_refillStation_Data set [2,(_refillStation_Data select 2)+(_fuel*50)];
[false,"petrol",_fuel] call UnionClient_system_handleInv; 
editPriceFuel_Data set [_index,_refillStation_Data];
publicVariable "editPriceFuel_Data";
[] call UnionClient_system_saveGear;

