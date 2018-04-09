private ["_Veh","_Position","_Distance","_Location","_Mass","_Mass_Cargo","_timer","_Price"];

AirTrain_Step = true;
_AirPorts = [[26777.8,24634.2,0],[23147.2,18977,0],[11598.7,11946,0],[14407.1,16320.8,0],[9003.56,21373,0]];

{
	if ([getPlayerUID player,player getVariable ["realname",""]] in (_x getVariable ["vehicle_info_owners",0])) exitWith {
		_Veh = _x;
	};
} forEach nearestObjects [player,["Air"],50];

if (isNil "_Veh") exitWith {
	hint "Поблизости нет вашего авиационного транспорта, либо он весь уже загружен!";
};


_Mass = getMass _Veh;
_Veh_Name = getText (configFile >> "CfgVehicles" >> typeOf _Veh >> "displayName");

disableSerialization;

createDialog "AirTrain";

_Dialog = findDisplay 1000;
_Text = _Dialog displayCtrl 1001;
_GText = _Dialog displayCtrl 1002;

while {dialog} do {
	if (AirTrain_Step) then {
		_Mass_Cargo = random [_Mass/4,_Mass/3,_Mass/2] ;
		_Cargo = selectRandom ["Железо","Сталь","Медь","Титан","Магний","Кальций","Никель","Струнций","Серебро","Медь","Рубидий","Калий","Аллюминий","Олово","Свинец","Кадмий"];
		if (_Veh isKindOf "Plane") then {
			_Position = selectRandom _AirPorts;
			while {player distance _Position < 5000} do {
				_Position = selectRandom _AirPorts;
			};
			_Location = "Аэропорт";
		} else {
			_Position = [player, 2500, 30000, 0, 0, 100, 0] call BIS_fnc_findSafePos;
			_Location = text (nearestLocations [_Position,["NameCity","NameCityCapital","NameMarine","NameVillage"], 30000] select 0);
		};
		
		_Position_Text = format ["%1 - %2",floor ((_Position select 0)/100),floor ((_Position select 1)/100)];
		_timer = round ((((_Veh distance _Position)/100)/60) + ((random 0.5)*10) + 5);
		_Price = (round (((_Veh distance _Position)+_Mass_Cargo)/1000))*1000;

		_GText ctrlSetStructuredText parseText format ["<t shadow='1' size='1.5' align='center'>Груз до <t color='#ff0000'>%1</t></t>",_Location];
		_Text ctrlSetStructuredText parseText format ["Здравствуйте, %1, мы подобрали для вас ряд заказов. Ваша техника %2, а ее вес %3 кг. Выберите тот, что подходит вам: <br/><br/>Груз: <t color='#c95353' shadow='2'>%4</t><br/><br/>Вес груза: <t color='#c95353' shadow='2'>%5 кг</t><br/><br/>Координаты: <t color='#c95353' shadow='2'>%6</t><br/><br/>Ближайший пункт: <t color='#c95353' shadow='2'>%7</t><br/><br/>Расстояние: <t color='#c95353' shadow='2'>%10 километров</t><br/><br/><br/>Заработная плата: <t color='#ffd700' shadow='2'>%8$</t><br/><br/>Время: <t color='#42aaff' shadow='2'>%9 минут</t>",profileName,_Veh_Name,round _Mass,_Cargo,round _Mass_Cargo,_Position_Text,_Location,_Price,_Timer, round((_Veh distance _Position)/100)/10];
		AirTrain_Step = false;
	};
	uiSleep 0.1;
};

_future = time + (60*_timer);

if !(AirTrain_Step) exitWith {
	AirTrain_Step = nil;
};

AirTrain_Step = nil;

_Veh setMass (_Mass + _Mass_Cargo);
_Veh setVariable ["AirTrain",true];

createMarkerLocal ["FT_Waypoint", _Position];
"FT_Waypoint" setMarkerShapeLocal "ICON";
"FT_Waypoint" setMarkerTypeLocal "mil_warning";
if (_Position in _AirPorts) then {
	Slider = "VR_3DSelector_01_complete_F" createVehicleLocal [0,0,0];
	_Distance = 7.5;
	Slider setPos [_Position select 0,_Position select 1,0];
} else {
	Slider = "Sign_Circle_F" createVehicleLocal [0,0,0];
	_Distance = 25;
	Slider setPos [_Position select 0,_Position select 1,100];
};

_EVH_ID = addMissionEventHandler ["Draw3D", {
	Slider setDir ((getDir Slider) + 2.5);
	drawIcon3D ["",[1,0.6,0.1,0.9],[(getPos Slider) select 0,(getPos Slider) select 1,((getPos Slider) select 2)+3],0,0,0,"Пункт доставки",1.5,0.04,"PuristaMedium","Center",true];
}];

_Warning_Fnc = {
	disableSerialization;
	params ["_txt"];
	_Warning = (findDisplay 46) ctrlCreate ["RscStructuredText", -1];
	_Warning ctrlSetPosition [safeZoneX*0.5,safeZoneY*0.1,safeZoneW*0,safeZoneH*0.04];
	_Warning ctrlCommit 0;
	_Warning ctrlSetPosition [safeZoneX*0.25,safeZoneY*0.1,safeZoneW*0.5,safeZoneH*0.04];
	_Warning ctrlSetBackgroundColor [0,0,0,0.75];
	_Warning ctrlCommit 1;
	uiSleep 1;
	_Warning ctrlSetStructuredText parseText format ["<t shadow='1' size='1.5' align='center'>%1</t>",_txt];
	uiSleep 5;
	_Warning ctrlSetPosition [safeZoneX*0.25,safeZoneY*0.1,safeZoneW*0.5,safeZoneH*0];
	_Warning ctrlCommit 1;
	uiSleep 1;
	ctrlDelete _Warning;
};

[_timer,_Veh,_Warning_Fnc] spawn {
	for "_i" from (_this select 0) to 1 step -1 do {
		private "_txt";
		_Var = _i % 10;
		if (_Var in [1]) then {_txt = "минута"};
		if (_Var in [2,3,4]) then {_txt = "минуты"};
		if (_Var in [0,5,6,7,8,9]) then {_txt = "минут"};
		[format ["Внимание! У вас осталось - <t color='#ff0000'>%1</t> %2!",_i,_txt]] spawn (_this select 2);
		uiSleep 60;
		if !((_this select 1) getVariable ["AirTrain",false]) exitWith {};
	};
};

while {true} do {
	if ((speed _Veh > 50) and (_Veh distance Slider <= _Distance)) then {
			["<t color='#ff0000'>УСТАНОВИТЕ СКОРОСТЬ МЕНЕЕ 50 КМ/Ч</t>"] spawn _Warning_Fnc;
			uiSleep 7.5;
	};
	if ((_Veh distance Slider <= _Distance) and (speed _Veh <= 50)) exitWith {
			["<t color='#00ff00'>ГРУЗ ДОСТАВЛЕН</t>"] spawn _Warning_Fnc;
			["cash","add",_Price] call UnionClient_system_myCash;
	};
	if !((_Veh getVariable ["AirTrain",false]) and (aLive _Veh)) exitWith {["<t color='#ff0000'>ГРУЗ ПОТЕРЯН</t>"] spawn _Warning_Fnc;};
	if (time >= _future) exitWith {["<t color='#ff0000'>ВРЕМЯ ВЫШЛО</t>"] spawn _Warning_Fnc;};
	if (!aLive player) exitWith {};
	uiSleep 0.1;
};

_Veh setMass _Mass;
removeMissionEventHandler ["Draw3D",_EVH_ID];
deleteVehicle Slider;
Slider = nil;
deleteMarkerLocal "FT_Waypoint";
_Veh setVariable ["AirTrain",nil];