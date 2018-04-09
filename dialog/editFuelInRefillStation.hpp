class editFuel {
	idd = 3010; 
	controlsBackground[]={Background, Background_Mini}; 
	controls[]= {Text, Slider, Title, Button};

	class Background: RscText
	{
		idc = -1;
		x = 0.37625 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.2475 * safezoneW;
		h = 0.286 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
	};
	class Background_Mini: RscText
	{
		idc = -1;
		x = 0.381406 * safezoneW + safezoneX;
		y = 0.368 * safezoneH + safezoneY;
		w = 0.237187 * safezoneW;
		h = 0.132 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
	};
	class Title: RscText
	{
		idc = -1;
		style = ST_CENTER;
		text = "ПОПОЛНЕНИЕ ТОПЛИВА НА АЗС";
		x = 0.381406 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.237187 * safezoneW;
		h = 0.055 * safezoneH;
		colorBackground[] = {1,0.843,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
	};

	class Text: RscText
	{
		idc = 3011;
		style = ST_CENTER;
		text = "Добавить - 0 литр(ов/а) концентрата | 0 литров топлива"; 
		x = 0.386562 * safezoneW + safezoneX;
		y = 0.423 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.055 * safezoneH;
		colorText[] = {1,1,1,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};

	class Slider: RscSlider
	{
		idc = 3012;
		x = 0.386562 * safezoneW + safezoneX;
		y = 0.379 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.044 * safezoneH;
		onSliderPosChanged = "ctrlSetText [3011,format['Добавить - %1 литр(ов/а) концентрата | %2 литров топлива',floor(_this select 1),floor(_this select 1)*50]];";
	};

	class Button: RscButton
	{
		idc = -1;
		text = "ПОДТВЕРДИТЬ";
		x = 0.381406 * safezoneW + safezoneX;
		y = 0.522 * safezoneH + safezoneY;
		w = 0.237187 * safezoneW;
		h = 0.044 * safezoneH;
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		colorBackground[] = {0.13,0.54,0.13,0.75};
		colorBackgroundActive[] = {0,1,0,0.75};
		action = "refuelStation_editFuel = true; closeDialog 0;";
	};

};








