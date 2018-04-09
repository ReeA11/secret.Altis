class RosRscBackground:RscText
{
	type = 0;
	style = 512;
	shadow = 0;
	text = "";
	ColorBackground[] = {0,0,0,0.7};
	ColorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
};
class RosgardDialogMain
{
	idd = 7400;
	name= "RosgardDialogMain";
	movingEnable = 1;
	enableSimulation = 1;
	class controls
	{
		class Background1:RosRscBackground
		{
			idc = -1;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.341 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class ZonesList: RscListbox
		{
			idc = 7401;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.319 * safezoneH;
			onLBSelChanged = "RosProductionZone = (RosProductionZones select (_this select 1));";
		};
		class RscText_1000: RscText
		{
			idc = -1;
			text = "Время матча";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1001: RscText
		{
			idc = 7402;
			text = "";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1005: RscXSliderH
		{
			idc = 7403;
			text = "";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
			onSliderPosChanged = "CtrlSetText[7402,format['%1Мин',round _this select 1]];RosProductionTimer = round(_this select 1);";
		};
		class RscText_1002: RscText
		{
			idc = -1;
			text = "Процент на товар";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1003: RscText
		{
			idc = 7404;
			text = "";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class RscText_1004: RscXSliderH
		{
			idc = 7405;
			text = "";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
			onLBSelChanged = "CtrlSetText[7404,format['%1',round(_this select 1)]];RosProductionProcent = round(_this select 1);";
		};
		class RscButton_1600: RscButton
		{
			idc = -1;
			text = "Начать";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.044 * safezoneH;
			onButtonClick = "[RosProductionZone,RosProductionTimer,RosProductionProcent]remoteExec['Ros_fnc_GodsWokeUp',2];";
		};
	};
};