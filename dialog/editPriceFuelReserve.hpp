class editPriceFuelReserve {
	idd = 3100; 
	controlsBackground[]={Background, Background_Mini}; 
	controls[]= {Map, Slider, Title_Mini, List, Title, Button};

	class Background: RscText
	{
		idc = -1;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.55 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
	};

	class Background_Mini: RscText
	{
		idc = -1;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.201094 * safezoneW;
		h = 0.098 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
	};


	class Map: RscMapControl
	{
		idc = 3101;
		alphaFadeStartScale = 10;
  		alphaFadeEndScale = 10;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.201094 * safezoneW;
		h = 0.308 * safezoneH;
		colorOutside[] = {0,0,0,0};

		class Fuelstation
    	{
    		color[] = {1,0.843,0,1};
       		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
       		size = 24;
       		importance = 1;
       		coefMin = 0.85;
       		coefMax = 1;
    	};
	};

	class Slider: RscSlider
	{
		idc = 3102;
		x = 0.505156 * safezoneW + safezoneX;
		y = 0.676 * safezoneH + safezoneY;
		w = 0.190781 * safezoneW;
		h = 0.022 * safezoneH;
		colorText[] = {1,1,1,0.75};
		colorActive[] = {1,1,1,1};
	};

	class Title_Mini: RscText
	{
		idc = 3103;
		style = ST_CENTER;
		text = "УСТАНОВИТЬ ЦЕНУ ЗА ЛИТР ТОПЛИВА - 0$";
		x = 0.505156 * safezoneW + safezoneX;
		y = 0.632 * safezoneH + safezoneY;
		w = 0.190781 * safezoneW;
		h = 0.033 * safezoneH;
		colorText[] = {0,0,0,1};
		colorBackground[] = {1,1,1,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
	};

	class List: RscListbox
	{
		idc = 3104;
		period = 1;
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.190781 * safezoneW;
		h = 0.428 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
	};


	class Title: RscText
	{
		idc = -1;
		style = ST_CENTER;
		shadow = 0;
		text = "НАСТРОЙКА АЗС";
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.236 * safezoneH + safezoneY;
		w = 0.402187 * safezoneW;
		h = 0.044 * safezoneH;
		colorText[] = {0,0,0,1};
		colorBackground[] = {1,0.843,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};

	class Button: RscButton
	{
		idc = 3105;
		text = "ПОДТВЕРДИТЬ";
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.73 * safezoneH + safezoneY;
		w = 0.402187 * safezoneW;
		h = 0.034 * safezoneH;
		colorBackground[] = {0.13,0.54,0.13,0.75};
		colorBackgroundActive[] = {0,1,0,0.75};
		tooltip = "Нажмите, чтобы подвердить изменение цены";
		action = "timerEditPriceFuelReserve = time + 10;";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
	};

};








