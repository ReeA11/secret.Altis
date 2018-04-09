/*
	File: fn_displayHandler.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master display handler
*/
private["_control","_code","_shift","_ctrlKey","_alt","_handled"];
_handled = false;
_control = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
hint "handler";
if (EQUAL(_code,74)) then {
		if(_shift) then {
			_handled = true;
			["SHIFTMINUS",format["%1 (%2) use shift minus endmission",GVAR_RNAME(player),steamid]] remoteExecCall ["TON_fnc_customLog",RSERV];
			[] spawn {
				closeDialog 0;	
			   hint "Вы замороженны на 15 сек за Shift минус";
			   disableUserInput true;
			   uiSleep 15;
			   disableUserInput false;
			   hint "Вы разморожены";
			};
		};
	};

//Esc Key Handler
if(_code == 1) then {_handled = true;};

_handled;