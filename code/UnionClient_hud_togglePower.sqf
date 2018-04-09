/*

	Filename: 	UnionClient_hud_togglePower.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/
2012 - 2045
*/
#include "..\script_macros.hpp"
private["_display", "_control", "_controlsToShow", "_backgroundSplash"];
disableSerialization;
_display = findDisplay 2000;
private _buttons = [
	[2010,2011],
	[2012,2013],
	[2014,2015],
	[2016,2017],
	[2018,2019],
	[2020,2021],

	[2022,2023],
	[2024,2025],
	[2026,2027],
	[2028,2029],
	[2030,2031],
	[2032,2033],

	[2034,2035],
	[2036,2037],
	[2038,2039],
	[2040,2041],
	[2042,2043],
	[2044,2045]
];
if (diag_tickTime > life_PossibleToggleTime) then
{
	if (life_PadIsPowerOn) then
	{
		life_PossibleToggleTime = diag_tickTime + 1;
		playSound "PadOff";
		{
			_control = _display displayCtrl _x;
			_control ctrlSetFade 0;
			_control ctrlCommit 0;
			_control ctrlSetFade 1;
			_control ctrlCommit 0.250;
		}
		forEach
		[
			2010,
			2011,
			2012,
			2013,
			2014,
			2015,
			2016,
			2017,
			2018,
			2019,
			2020,
			2021,
			2022,
			2023,
			2024,
			2025,
			2026,
			2027,
			2028,
			2029,
			2030,
			2031,
			2032,
			2033,
			2034,
			2035,
			2036,
			2037,
			2038,
			2039,
			2040,
			2041,
			2042,
			2043,
			2044,
			2045
		];
		_control = _display displayCtrl 42002;
		_control ctrlSetFade 0;
		_control ctrlCommit 0;
		life_PadIsPowerOn = false;
	}
	else
	{
		life_PossibleToggleTime = diag_tickTime + 1.5;
		_controlsToShow =
		[
			2010,
			2011,
			2012,
			2013,
			2014,
			2015,
			2016,
			2017,
			2018,
			2019,
			2020,
			2021,
			2022,
			2023,
			2024,
			2025,
			2026,
			2027,
			2028,
			2029,
			2030,
			2031,
			2032,
			2033,
			2034,
			2035,
			2036,
			2037,
			2038,
			2039,
			2040,
			2041,
			2042,
			2043,
			2044,
			2045
		];
		playSound "PadOn";
		{
			_control = _display displayCtrl _x;
			_control ctrlSetFade 1;
			_control ctrlCommit 0;
		}
		forEach _controlsToShow;
		_backgroundSplash = _display displayCtrl 42001;//сплеш типа UnionOS
		_backgroundSplash ctrlSetFade 1;
		_backgroundSplash ctrlShow true;
		_backgroundSplash ctrlCommit 0;
		_backgroundSplash ctrlSetFade 0;
		_backgroundSplash ctrlCommit 0.250;
//ENABLE AND REVEAL BUTTONS
private ["_imageID","_buttonID"];
private _index = 0;
{
	if ([getText(_x >> "conditions")] call UnionClient_system_conditionsCheck) then {
		_imageID = CONTROL(2000,((_buttons select _index) select 0));
		_buttonID = CONTROL(2000,((_buttons select _index) select 1));

		_imageID ctrlSetText getText(_x >> "image");
		_buttonID ctrlSetTooltip localize (getText(_x >> "tooltip"));
		_buttonID buttonSetAction getText(_x >> "action");

		_imageID ctrlShow true;
		_buttonID ctrlShow true;

		ADD(_index,1);
	};
} forEach ("true" configClasses (missionConfigFile >> "LifeCfgPadIcons"));

		waitUntil {ctrlCommitted _backgroundSplash};
		_control = _display displayCtrl 42002;
		_control ctrlSetFade 1;
		_control ctrlCommit 1;
		{
			_control = _display displayCtrl _x;
			_control ctrlSetFade 0;
			_control ctrlCommit 0;
		}
		forEach _controlsToShow;
		uiSleep 1;
		_backgroundSplash ctrlSetFade 1;
		_backgroundSplash ctrlCommit 0.250;
		waitUntil {ctrlCommitted _backgroundSplash};
		_backgroundSplash ctrlShow false;
		ctrlSetText [2001, M_CONFIG(getText,"LifeCfgPadSkins",life_myPadSkinID,"image")];
		life_PadIsPowerOn = true;
	};
};