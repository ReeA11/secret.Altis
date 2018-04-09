#include "..\script_macros.hpp"
disableSerialization;
private _ui = GVAR_UINS ["playerHUD",displayNull];
if (isNull _ui) then {
	["playerHUD","PLAIN",1,false] call UnionClient_gui_CreateRscLayer;
	_ui = GVAR_UINS ["playerHUD",displayNull];
};
_oncecheck = 0;
if (_oncecheck == 0) then {
_oncecheck = 1;
_PP_colorC = ppEffectCreate ["ColorCorrections",1500];
_PP_colorC ppEffectEnable true;
_PP_colorC ppEffectAdjust [1,1.10,0,[0.16,0.13,0.16,-0.23],[1.50,1.47,1.47,1.24],[0.26,0.31,0.41,0],[0,0,0,0,0,0,4]];
_PP_colorC ppEffectCommit 0;
};

[] call UnionClient_hud_theme;

[] call UnionClient_hud_skinConfig;
[life_myThemeID] call UnionClient_hud_skinSet;

private _server = _ui displayCtrl 23505;
private _fps_info = _ui displayCtrl 23506;
private _speak_volume = 0;

private _icon_health = _ui displayCtrl 23509;
private _icon_fatig = _ui displayCtrl 23510;
private _icon_food = _ui displayCtrl 23511;
private _icon_drink = _ui displayCtrl 23512;
private _icon_micro = _ui displayCtrl 23513;

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\10.paa";
_icon_fatig ctrlSetText "bar\stamina\10.paa";
_icon_food ctrlSetText "bar\eat\10.paa";
_icon_drink ctrlSetText "bar\water\10.paa";
_icon_micro ctrlSetText "bar\micro\1.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\9.paa";
_icon_fatig ctrlSetText "bar\stamina\9.paa";
_icon_food ctrlSetText "bar\eat\9.paa";
_icon_drink ctrlSetText "bar\water\9.paa";


uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\8.paa";
_icon_fatig ctrlSetText "bar\stamina\8.paa";
_icon_food ctrlSetText "bar\eat\8.paa";
_icon_drink ctrlSetText "bar\water\8.paa";


uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\7.paa";
_icon_fatig ctrlSetText "bar\stamina\7.paa";
_icon_food ctrlSetText "bar\eat\7.paa";
_icon_drink ctrlSetText "bar\water\7.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\6.paa";
_icon_fatig ctrlSetText "bar\stamina\6.paa";
_icon_food ctrlSetText "bar\eat\6.paa";
_icon_drink ctrlSetText "bar\water\6.paa";


uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\5.paa";
_icon_fatig ctrlSetText "bar\stamina\5.paa";
_icon_food ctrlSetText "bar\eat\5.paa";
_icon_drink ctrlSetText "bar\water\5.paa";
_icon_micro ctrlSetText "bar\micro\2.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\4.paa";
_icon_fatig ctrlSetText "bar\stamina\4.paa";
_icon_food ctrlSetText "bar\eat\4.paa";
_icon_drink ctrlSetText "bar\water\4.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\3.paa";
_icon_fatig ctrlSetText "bar\stamina\3.paa";
_icon_food ctrlSetText "bar\eat\3.paa";
_icon_drink ctrlSetText "bar\water\3.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\2.paa";
_icon_fatig ctrlSetText "bar\stamina\2.paa";
_icon_food ctrlSetText "bar\eat\2.paa";
_icon_drink ctrlSetText "bar\water\2.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\1.paa";
_icon_fatig ctrlSetText "bar\stamina\1.paa";
_icon_food ctrlSetText "bar\eat\1.paa";
_icon_drink ctrlSetText "bar\water\1.paa";

uiSleep 0.5;

_icon_health ctrlSetText "bar\hp\0.paa";
_icon_fatig ctrlSetText "bar\stamina\0.paa";
_icon_food ctrlSetText "bar\eat\0.paa";
_icon_drink ctrlSetText "bar\water\0.paa";
_icon_micro ctrlSetText "bar\micro\3.paa";

while {true} do {
	
	if (!(EQUAL(_speak_volume,TF_speak_volume_meters))) then {
		_speak_volume = TF_speak_volume_meters;
		switch (TF_speak_volume_meters) do {
			case 5: {
				_icon_micro ctrlSetText "bar\micro\1.paa";
			};
			case 20: {
				_icon_micro ctrlSetText "bar\micro\2.paa";
			};
			case 60: {
				_icon_micro ctrlSetText "bar\micro\3.paa";
			};
		};
	};
	_server ctrlSetText format ["%1",server_timeText];
	
	try {
		if (life_hunger == 0) throw ("bar\eat\10.paa");
		if (life_hunger > 0 && life_hunger <= 10) throw ("bar\eat\9.paa"); 
		if (life_hunger > 10 && life_hunger <= 20) throw ("bar\eat\8.paa"); 
		if (life_hunger > 20 && life_hunger <= 30) throw ("bar\eat\7.paa"); 
		if (life_hunger > 30 && life_hunger <= 40) throw ("bar\eat\6.paa"); 
		if (life_hunger > 40 && life_hunger <= 50) throw ("bar\eat\5.paa"); 
		if (life_hunger > 50 && life_hunger <= 60) throw ("bar\eat\4.paa"); 
		if (life_hunger > 60 && life_hunger <= 70) throw ("bar\eat\3.paa"); 
		if (life_hunger > 70 && life_hunger <= 80) throw ("bar\eat\2.paa"); 
		if (life_hunger > 80 && life_hunger <= 90) throw ("bar\eat\1.paa"); 
		if (life_hunger > 90 && life_hunger <= 100) throw ("bar\eat\0.paa"); 
	} catch {
		_icon_food ctrlSetText _exception;
	};
	
	try {
		if (life_thirst == 0) throw ("bar\water\10.paa");
		if (life_thirst > 0 && life_thirst <= 10) throw ("bar\water\9.paa"); 
		if (life_thirst > 10 && life_thirst <= 20) throw ("bar\water\8.paa"); 
		if (life_thirst > 20 && life_thirst <= 30) throw ("bar\water\7.paa"); 
		if (life_thirst > 30 && life_thirst <= 40) throw ("bar\water\6.paa"); 
		if (life_thirst > 40 && life_thirst <= 50) throw ("bar\water\5.paa"); 
		if (life_thirst > 50 && life_thirst <= 60) throw ("bar\water\4.paa"); 
		if (life_thirst > 60 && life_thirst <= 70) throw ("bar\water\3.paa"); 
		if (life_thirst > 70 && life_thirst <= 80) throw ("bar\water\2.paa"); 
		if (life_thirst > 80 && life_thirst <= 90) throw ("bar\water\1.paa"); 
		if (life_thirst > 90 && life_thirst <= 100) throw ("bar\water\0.paa"); 
	} catch {
		_icon_drink ctrlSetText _exception;
	};
	
	_health = round((1 - (damage player)) * 100);
	
	try {
		if (_health == 0) throw ("bar\hp\10.paa");
		if (_health > 0 && _health <= 10) throw ("bar\hp\9.paa"); 
		if (_health > 10 && _health <= 20) throw ("bar\hp\8.paa"); 
		if (_health > 20 && _health <= 30) throw ("bar\hp\7.paa"); 
		if (_health > 30 && _health <= 40) throw ("bar\hp\6.paa"); 
		if (_health > 40 && _health <= 50) throw ("bar\hp\5.paa"); 
		if (_health > 50 && _health <= 60) throw ("bar\hp\4.paa"); 
		if (_health > 60 && _health <= 70) throw ("bar\hp\3.paa"); 
		if (_health > 70 && _health <= 80) throw ("bar\hp\2.paa"); 
		if (_health > 80 && _health <= 90) throw ("bar\hp\1.paa"); 
		if (_health > 90 && _health <= 100) throw ("bar\hp\0.paa"); 
	} catch {
		_icon_health ctrlSetText _exception;
	};
	
	_fatig = round((1 - (getFatigue player)) * 100);
	
	try {
		if (_fatig == 0) throw ("bar\stamina\10.paa");
		if (_fatig > 0 && _fatig <= 10) throw ("bar\stamina\9.paa"); 
		if (_fatig > 10 && _fatig <= 20) throw ("bar\stamina\8.paa"); 
		if (_fatig > 20 && _fatig <= 30) throw ("bar\stamina\7.paa"); 
		if (_fatig > 30 && _fatig <= 40) throw ("bar\stamina\6.paa"); 
		if (_fatig > 40 && _fatig <= 50) throw ("bar\stamina\5.paa"); 
		if (_fatig > 50 && _fatig <= 60) throw ("bar\stamina\4.paa"); 
		if (_fatig > 60 && _fatig <= 70) throw ("bar\stamina\3.paa"); 
		if (_fatig > 70 && _fatig <= 80) throw ("bar\stamina\2.paa"); 
		if (_fatig > 80 && _fatig <= 90) throw ("bar\stamina\1.paa"); 
		if (_fatig > 90 && _fatig <= 100) throw ("bar\stamina\0.paa"); 
	} catch {
		_icon_fatig ctrlSetText _exception;
	};

	if (life_showFPS) then {
		_fps_info ctrlSetStructuredText parseText format ["<t size='0.85' align='center'>%1 FPS</t>", round diag_fps];
	} else {
		_fps_info ctrlSetStructuredText parseText "";
	};	
	
	"waypoint" setMarkerColor "ColorRed";
	uiSleep 1;
};