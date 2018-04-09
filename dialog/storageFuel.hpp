class storageFuel {
	idd = 3020; 
	controlsBackground[]={Background, Background_Mini}; 
	controls[]= {Text, Text_2, Slider, Title, Button};

	class Background: RscText
	{
		idc = -1;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.299062 * safezoneW;
		h = 0.253 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
	};
	class Title: RscText
	{
		idc = -1;
		shadow = 0;
		style = ST_CENTER;
		text = "Хранилище концентрата";
		x = 0.355624 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.28875 * safezoneW;
		h = 0.044 * safezoneH;
		colorText[] = {0,0,0,1};
		colorBackground[] = {1,0.843,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
	};
	class Text: RscText
	{
		idc = 3021;
		text = "";
		x = 0.355624 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.28875 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	};
	class Background_Mini: RscText
	{
		idc = -1;
		x = 0.355625 * safezoneW + safezoneX;
		y = 0.434 * safezoneH + safezoneY;
		w = 0.28875 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
	};
	class Slider: RscSlider
	{
		idc = 3022;
		x = 0.37625 * safezoneW + safezoneX;
		y = 0.445 * safezoneH + safezoneY;
		w = 0.2475 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class Button: RscButton
	{
		idc = 3023;
		text = "";
		x = 0.355625 * safezoneW + safezoneX;
		y = 0.489 * safezoneH + safezoneY;
		w = 0.28875 * safezoneW;
		h = 0.044 * safezoneH;
		colorBackground[] = {0.13,0.54,0.13,0.75};
		colorBackgroundActive[] = {0,1,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
		action = "fuelSystems_editStorageFuel = true; closeDialog 0;";
	};
	class Text_2: RscText
	{
		idc = 3024;
		text = "";
		x = 0.355625 * safezoneW + safezoneX;
		y = 0.401 * safezoneH + safezoneY;
		w = 0.28875 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	};

};







