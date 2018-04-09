if (isNil "timerEditPriceFuelReserve") then {
	timerEditPriceFuelReserve = 0;
};
if (time < timerEditPriceFuelReserve) exitWith {
	hint format ["Цены на АЗС будет можно изменить через - %1",[timerEditPriceFuelReserve-time,"MM:SS"] call BIS_fnc_secondsToString]; 
};

private _listFuel = {
	disableSerialization;
	params ["_list"];
	lbClear _list;
	{
		_position = _x select 0;
		_Var_2 = _x select 1;
		_Var_1 = round ((_x select 2)/100);
	
		_list lbAdd format ["АЗС - %1%3%3 | %5%4%8 | %7%7%6$              %2",_forEachIndex+1,text (nearestLocations[_position,["NameCity","NameCityCapital","NameVillage"],26000] select 0),if ((_forEachIndex+1)<10) then {" "} else {""},_Var_1,if (_Var_1 isEqualTo 100) then {""} else {if (_Var_1 >= 10) then {"  "} else {"   "}},_Var_2,if (_Var_2 isEqualTo 100) then {" "} else {if (_Var_2 >= 10) then {"  "} else {"   "}},"%"];
		if (_Var_1 <= 25) then {
			_list lbSetColor [_forEachIndex, [1, 0, 0, 1]]; 
		}; 
	} forEach editPriceFuel_Data;
};

disableSerialization; 
createDialog "editPriceFuelReserve"; 
_dialog = findDisplay 3100; 
_map = _dialog displayCtrl 3101; 
_slider = _dialog displayCtrl 3102; 
_titleMini = _dialog displayCtrl 3103; 
_list = _dialog displayCtrl 3104; 
_button = _dialog displayCtrl 3105; 
_slider sliderSetRange [0, 100]; 

[_list] spawn _listFuel;
 
_flag = -1; 
_price = 0; 
private "_fuelStation";


while {dialog} do { 
	if !(_flag isEqualTo (lbCurSel _list)) then { 
		_flag = (lbCurSel _list); 
		_fuelStation = editPriceFuel_Data select _flag;
		_slider sliderSetPosition (_fuelStation select 1); 
		_map ctrlMapAnimAdd [1,0.05,_fuelStation select 0]; 
		ctrlMapAnimCommit _map; 
	}; 

	if !(_price isEqualTo round(sliderPosition _slider)) then { 
		_price = round (sliderPosition _slider);	
		_titleMini ctrlSetText format ["УСТАНОВИТЬ ЦЕНУ ЗА ЛИТР ТОПЛИВА - %1$",_price]; 
	}; 

	if (timerEditPriceFuelReserve > 0) then { 
	 	[_list] spawn _listFuel;
		editPriceFuel_Data set [_flag,[_fuelStation select 0,_price,_fuelStation select 2]];
		publicVariable "editPriceFuel_Data";

		_button ctrlEnable false; 
		_list ctrlEnable false; 
		_slider ctrlEnable false;

		for "_i" from 10 to 1 step -1 do { 
			_button ctrlSetTooltip format ["Цены на АЗС будет можно изменить через - %1",[_i,"MM:SS"] call BIS_fnc_secondsToString]; 
			uiSleep 1; 
		}; 

		_button ctrlSetTooltip "Нажмите, чтобы подвердить изменение цены"; 
		_button ctrlEnable true; 
		_list ctrlEnable true; 
		_slider ctrlEnable true;
		timerEditPriceFuelReserve = 0;
	}; 

	uiSleep 0.01; 
}; 

timerEditPriceFuelReserve = nil;

