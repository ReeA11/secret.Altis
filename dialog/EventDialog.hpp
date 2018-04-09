class EventDiag {
	idd = 7777;
	name= "EventDiag";
	movingEnable = 0;
	enableSimulation = 1;
	
	class controlsBackground {
		class Black: RscText
		{
			idc = -1;
			x = 0.396875 * safezoneW + safezoneX;
	        y = 0.355625 * safezoneH + safezoneY;
	        w = 0.20625 * safezoneW;
	        h = 0.275 * safezoneH;

			colorBackground[] = { 0, 0, 0, 0.5 };
		};
	};
	
	class controls {

class RscEdit_1400: RscEdit
{
	idc = 1400;
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.034375 * safezoneH;
};
class listbox: RscListbox
{
	idc = 1500;
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.35975 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.268125 * safezoneH;
};
class timetext: RscText
{
	idc = 1000;
	text = "Insert time"; //--- ToDo: Localize;
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.3625 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.020625 * safezoneH;
};
class startbut: RscButton
{
	idc = 1600;
	text = "START"; //--- ToDo: Localize;
	style = 1;
	align = "center";
    colorBackground[] = {1,1,1,0.1};
	onMouseButtonClick="[(ctrlText 1400)] spawn UnionClient_eventServ_ServerEventStart;";
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.5825 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.044 * safezoneH;
};	
};
};