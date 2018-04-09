class fuelReserve {
	idd = 3000; 
	controlsBackground[]={BackGround}; 
	controls[]= {Title, Text_1, Text_2, Text_3, Edit, Button_1, Button_2};

	class BackGround: RscText
	{
		idc = -1;
		x = 0.422654 * safezoneW + safezoneX;
		y = 0.258 * safezoneH + safezoneY;
		w = 0.149531 * safezoneW;
		h = 0.352 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
	};

	class Title: RscText
	{
		idc = -1;
		shadow = 2;
		style = ST_CENTER;
		text = "ЗАПРАВОЧНАЯ СТАНЦИЯ";
		x = 0.427811 * safezoneW + safezoneX;
		y = 0.269 * safezoneH + safezoneY;
		w = 0.139219 * safezoneW;
		h = 0.033 * safezoneH;
		colorText[] = {1,1,1,0.95};
		colorBackground[] = {1,0.84,0,0.75};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};

	class Text_1: RscStructuredText
	{
		idc = 3001;
		shadow = 0;
		x = 0.427811 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.139219 * safezoneW;
		h = 0.176 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,0.95};
	};

	class Text_2: RscText
	{
		idc = -1;
		shadow = 0;
		style = ST_RIGHT;
		text = "Заправить на ";
		x = 0.427812 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,0.95};
		sizeEx = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7";
	};

	class Text_3: RscText
	{
		idc = -1;
		shadow = 0;
		style = ST_LEFT;
		text = "литр(ов/а)";
		x = 0.525781 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.04125 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,0.95};
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
	};

	class Edit: RscEdit
	{
		idc = 3002;
		shadow = 0;
		maxchars = 6;
		style = ST_CENTER + 512;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.04125 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,0.95};
		tooltip = "Введите количество литров топлива";
		sizeEx = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7";
	};

	class Button_1: RscButton
	{
		idc = 3003;
		text = "УСТАНОВИТЬ МАКСИМАЛЬНЫЙ ЛИТРАЖ";
		x = 0.427812 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.139219 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0,0.5,0.75};
		colorBackgroundActive[] = {0,0,1,0.75};
		sizeEx = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7";
		tooltip = "Нажмите, чтобы установить количество топлива, необходимое для полной заправки";
	};

	class Button_2: RscButton
	{
		idc = 3004;
		text = "НАЧАТЬ ЗАПРАВКУ";
		x = 0.427812 * safezoneW + safezoneX;
		y = 0.566 * safezoneH + safezoneY;
		w = 0.139219 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.13,0.54,0.13,0.75};
		colorBackgroundActive[] = {0,1,0,0.75};
		tooltip = "Нажмите, чтобы заправить технику";
		sizeEx = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1";
		action = "fuelStation_Button_OK = true; closeDialog 0;";
	};
};