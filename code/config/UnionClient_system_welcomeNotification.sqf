/*

	Filename: 	UnionClient_system_welcomeNotification.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"
uiSleep 5;

hintSilent parseText format[
"<t size='1.2'>Добро пожаловать на сервер Verum, <t color='#f5be00'>%1</t></t>
<br /><br />Не забудьте изучить правила на нашем форуме <t underline='true' color='#1dae0e'>forum.verum-rp.ru/forum</t>
<br /><br />Всю необходимую информацию по подключению, управлению и донату вы можете получить на нашем сайте: <t underline='true' color='#1dae0e'>verum-rp.ru</t>
<br /><br />Дополнительная информация доступна так же через пункты на карте (кнопка М)",
GVAR_RNAME(player)];

private _onScreenTime = 5;

uiSleep 15;

private _role1 = "Текущая версия сервера";
private _role1names = ["Verum Life"];
private _role7 = "Основатель";
private _role7names = ["DENVER"];
private _role2 = "Администрация";
private _role2names = ["DENVER", "Drima", "Lucas"];
private _role3 = "Разработка";
private _role3names = ["Drima"];
private _role4 = "Сайт";
private _role4names = ["verum-rp.ru"];
private _role5 = "Форум";
private _role5names = ["forum.verum-rp.ru"];
private _role6 = "TeamSpeak3 сервер";
private _role6names = ["ts.verum-rp.ru"];

private "_finalText";
{
	uiSleep 2;
	_finalText = format ["<t size='0.40' color='#f2cb0b' align='right'>%1<br /></t>", _x select 0];
	_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
	{_finalText = _finalText + format ["%1<br />", _x]} forEach (_x select 1);
	_finalText = _finalText + "</t>";
	_onScreenTime + (((count (_x select 1)) - 1) * 0.5);
	[
		_finalText,
		[safezoneX + safezoneW - 0.8,0.50],[safezoneY + safezoneH - 0.8,0.7],_onScreenTime,0.5] spawn BIS_fnc_dynamicText;
	uiSleep (_onScreenTime);
} forEach [
	[_role1, _role1names],
	[_role7, _role7names],
	[_role2, _role2names],
	[_role3, _role3names],
	[_role4, _role4names],
	[_role5, _role5names],
	[_role6, _role6names]
];