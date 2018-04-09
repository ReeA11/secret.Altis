class AirTrain {
	idd = 1000; 
	controlsBackground[]={BackGround}; 
	controls[]= {Text, G_Text, Step, OK};
	
	class BackGround: RscText
	{
		idc = -1;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.258 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.473 * safezoneH;
		colorBackground[] = {1,1,1,0.75};
	};

	class Text: RscStructuredText
	{
		idc = 1001;
		x = 0.298904 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.402187 * safezoneW;
		h = 0.396 * safezoneH;
		colorBackground[] = {0,0,0,0.75};
	};

	class G_Text: RscStructuredText
	{
		idc = 1002;
		text = "";
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.269 * safezoneH + safezoneY;
		w = 0.402187 * safezoneW;
		h = 0.033 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.85};
	};

	class OK: RscButton
	{
		idc = 1003;
		text = "ПОДТВЕРДИТЬ";
		x = 0.298906 * safezoneW + safezoneX;
		y = 0.698 * safezoneH + safezoneY;
		w = 0.201094 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0.5,0,0.75};
		colorBackgroundActive[] = {0,0.75,0,0.75};
		tooltip = "Подтвердить выбор задания";
		action = "closeDialog 0; AirTrain_Step = true;";
	};

	class Step: OK
	{
		idc = 1004;
		text = "ДАЛЕЕ";
		x = 0.499999 * safezoneW + safezoneX;
		colorBackground[] = {0,0,0.5,0.75};
		colorBackgroundActive[] = {0,0,0.75,0.75};
		tooltip = "Просмотреть следующее задание";
		action = "AirTrain_Step = true;";
	};
};
