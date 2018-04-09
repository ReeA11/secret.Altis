if !(isNil "fuelSystems_editStorageFuel") exitWith {};

params ["_contition"];
disableSerialization;  

createDialog "storageFuel";  
_dialog = findDisplay 3020;   
_text = _dialog displayCtrl 3021;  
_slider = _dialog displayCtrl 3022;  
_button = _dialog displayCtrl 3023;  
_text_2 = _dialog displayCtrl 3024;  

switch (_contition) do {
	case 0: {
		if ((storageFuel_Variable select 0) < 1) exitWith {
			hint "Хранилище концентрата опустошено!";
			closeDialog 0;
		};
	
		_maxWeight = ['petrol',(storageFuel_Variable select 0),life_carryWeight,life_maxWeight] call UnionClient_system_calWeightDiff;
		if (_maxWeight < 1) exitWith {
			hint "Ваш инвентарь больше не вместит концентрата!";
			closeDialog 0;
		};
	
		_text ctrlSetText format ['В хранилище находится - %1 кг концетрата',storageFuel_Variable select 0];
		_slider sliderSetRange [1,_maxWeight];
		_button ctrlSetText "Взять";
	
		private _fuel = 0;
		while {dialog} do {
			if !(_fuel isEqualTo (floor(sliderPosition _slider))) then {
				_fuel = floor (sliderPosition _slider);
				_text ctrlSetText format ['В хранилище находится - %1 кг концетрата',storageFuel_Variable select 0];
				_text_2 ctrlSetText format ['Вы хотите взять - %1 кг концетрата | %2 литр(ов/а) топлива',_fuel,_fuel*50];
				uiSleep 0.01;
			};
		};
	
		if (isNil "fuelSystems_editStorageFuel") exitWith {};
		
		_fuel = ['petrol',_fuel,life_carryWeight,life_maxWeight] call UnionClient_system_calWeightDiff; 
		[true,'petrol',_fuel] call UnionClient_system_handleInv;
		[] call UnionClient_system_saveGear;
	
	
		storageFuel_Variable = [(storageFuel_Variable select 0) - _fuel]; 
		hint format ['Вы взяли - %1 кг концентрата!',_fuel];
		publicVariable 'storageFuel_Variable';
		[[8],'updateGang'] call UnionClient_system_hcExec;
	};
	case 1: {
		if (life_inv_petrol < 1) exitWith {
			hint "У вас нет концентрата!";
			closeDialog 0;
		};
	
		_text ctrlSetText format ['В хранилище находится - %1 кг концетрата',storageFuel_Variable select 0];
		_slider sliderSetRange [1,life_inv_petrol];
		_button ctrlSetText "Положить";
	
		private _fuel = 0;
		while {dialog} do {
			if !(_fuel isEqualTo (floor(sliderPosition _slider))) then {
				_fuel = floor (sliderPosition _slider);
				_text ctrlSetText format ['В хранилище находится - %1 кг концетрата',storageFuel_Variable select 0];
				_text_2 ctrlSetText format ['Вы хотите положить - %1 кг концетрата | %2 литр(ов/а) топлива',_fuel,_fuel*50];
				uiSleep 0.01;
			};
		};
	
		if (isNil "fuelSystems_editStorageFuel") exitWith {};
		
		[false,'petrol',_fuel] call UnionClient_system_handleInv;
		[] call UnionClient_system_saveGear;
	
	
		storageFuel_Variable = [(storageFuel_Variable select 0) + _fuel]; 
		hint format ['Вы положили - %1 кг концентрата!',_fuel];
		publicVariable 'storageFuel_Variable';
		[[8],'updateGang'] call UnionClient_system_hcExec;
	};

	case 2: {
		private ["_price","_resourseIndex"];
		{
			if ((_x select 0) isEqualTo "petrol") exitWith {
				_price = _x select 1;
				_resourseIndex = _forEachIndex;
			};
		} forEach sell_array;


		_text ctrlSetText format ['Цена за килограмм концетрата - %1$',_price];
		_text_2 ctrlSetText format ['Установить цену за килограмм концетрата - %1$',_price];
		_slider sliderSetRange [0,5000];
		_slider sliderSetPosition _price;
		_button ctrlSetText "Установить";
	
		while {dialog} do {
			if !(_price isEqualTo (floor(sliderPosition _slider))) then {
				_price = floor (sliderPosition _slider);
				_text_2 ctrlSetText format ['Установить цену за килограмм концетрата - %1$',_price];
				uiSleep 0.01;
			};
		};
	
		if (isNil "fuelSystems_editStorageFuel") exitWith {};

		sell_array set [_resourseIndex,["petrol",_price]];
		publicVariable "sell_array";
		[[9],'updateGang'] call UnionClient_system_hcExec;

		hint format ['Вы установили цену за килограмм концетрата - %1$!',_price];
	};

}; 

if (isNil "fuelSystems_editStorageFuel") exitWith {};

fuelSystems_editStorageFuel = nil;