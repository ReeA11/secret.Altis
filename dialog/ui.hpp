class playerHUD
{
	idd=-1;
	movingEnable=0;
  	fadein=0;
	duration = 10e10;
  	fadeout=0;
	name="playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	onUnload = "uiNamespace setVariable ['playerHUD', objNull]";
	onDestroy = "uiNamespace setVariable ['playerHUD', objNull]";
	objects[]={};

	class controls
	{
		
    class RscPicture_1201: RscPicture
    {
	idc = 23510;
	text = "";
	x = 0.863516 * safezoneW + safezoneX;
	y = 0.779125 * safezoneH + safezoneY;
	w = 0.128391 * safezoneW;
	h = 0.190438 * safezoneH;
    };
    class RscPicture_1202: RscPicture
    {
	idc = 23511;
	text = "";
	x = 0.868156 * safezoneW + safezoneX;
	y = 0.618938 * safezoneH + safezoneY;
	w = 0.14025 * safezoneW;
	h = 0.384312 * safezoneH;
    };
    class RscPicture_1200: RscPicture
    {
	idc = 23509;
	text = "";
	x = 0.863516 * safezoneW + safezoneX;
	y = 0.779125 * safezoneH + safezoneY;
	w = 0.128391 * safezoneW;
	h = 0.190438 * safezoneH;
    };
    class RscPicture_1203: RscPicture
    {
	idc = 23512;
	text = "";
	x = 0.845984 * safezoneW + safezoneX;
	y = 0.608625 * safezoneH + safezoneY;
	w = 0.14025 * safezoneW;
	h = 0.396688 * safezoneH;
    };
    class RscPicture_1204: RscPicture
    {
	idc = 23513;
	text = "";
	x = 0.918172 * safezoneW + safezoneX;
	y = 0.933812 * safezoneH + safezoneY;
	w = 0.0195937 * safezoneW;
	h = 0.0378125 * safezoneH;
    };
	
	class RscPicture_1205: RscPicture
{
	idc = 1205;
	text = "bar\aye.paa";
	x = 0.0029375 * safezoneW + safezoneX;
	y = 0.900125 * safezoneH + safezoneY;
	w = 0.126844 * safezoneW;
	h = 0.07425 * safezoneH;
    };

	class server_nmb: RscText
	{
		idc = 23505;
		text = "";
		x = 0.00706252 * safezoneW + safezoneX;
		y = 0.9688 * safezoneH + safezoneY;
		w = 0.12731 * safezoneW;
		h = 0.0206 * safezoneH;
		sizeEx = 0.7 * GUI_GRID_H;
	};

	class fps_info: RscStructuredText
	{
		idc = 23506;
		text = "";
		x = 0.296562 * safezoneW + safezoneX;
		y = 0.9592 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {1,1,1,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	};   
};

class ExtremoNotification
{
	idd=24500;
	movingEnable=0;
  	fadein=0;
	duration = 10e10;
  	fadeout=0;
	name="ExtremoNotification";
	onLoad="uiNamespace setVariable ['ExtremoNotification',_this select 0]";
	onUnload = "uiNamespace setVariable ['ExtremoNotification', objNull]";
	onDestroy = "uiNamespace setVariable ['ExtremoNotification', objNull]";
	objects[]={};

	class controls
	{
		class message1: RscStructuredText
		{
			idc = 24501;
			text = "";
			x = 0.990934 * safezoneW + safezoneX;
			y = 0.7828 * safezoneH + safezoneY;
			w = 0.23625 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
		class message2: RscStructuredText
		{
			idc = 24502;
			text = "";
			x = 0.990934 * safezoneW + safezoneX;
			y = 0.752 * safezoneH + safezoneY;
			w = 0.23625 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
		class message3: RscStructuredText
		{
			idc = 24503;
			text = "";
			x = 0.990934 * safezoneW + safezoneX;
			y = 0.7212 * safezoneH + safezoneY;
			w = 0.23625 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
		class message4: RscStructuredText
		{
			idc = 24504;
			text = "";
			x = 0.990934 * safezoneW + safezoneX;
			y = 0.6904 * safezoneH + safezoneY;
			w = 0.23625 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
		class message5: RscStructuredText
		{
			idc = 24505;
			text = "";
			x = 0.990934 * safezoneW + safezoneX;
			y = 0.6596 * safezoneH + safezoneY;
			w = 0.23625 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
	};   
};

class ExtremoHint
{
	idd=24800;
	movingEnable=0;
  	fadein=0;
	duration = 10e10;
  	fadeout=0;
	name="ExtremoHint";
	onLoad="uiNamespace setVariable ['ExtremoHint',_this select 0]";
	onUnload = "uiNamespace setVariable ['ExtremoHint', objNull]";
	onDestroy = "uiNamespace setVariable ['ExtremoHint', objNull]";
	objects[]={};

	class controls
	{
		class hint_message: RscStructuredText
		{
			idc = 24801;
			text = "<t size='1' align='left'>+2 item of smthi??</t>"; //--- ToDo: Localize;
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.33 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};		
		class hint_top: RscText
		{
			idc = 24803;
			x = 0.855781 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class hint_icon: RscPicture
		{
			idc = 24802;
			text = "\union_gui\data\gui_newmessage.paa";
			x = 0.9125 * safezoneW + safezoneX;
			y = 0.1018 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};   
};

class ExtremoBuffs
{
	idd=24600;
	movingEnable=0;
  	fadein=0;
	duration = 10e10;
  	fadeout=0;
	name="ExtremoBuffs";
	onLoad="uiNamespace setVariable ['ExtremoBuffs',_this select 0]";
	onUnload = "uiNamespace setVariable ['ExtremoBuffs', objNull]";
	onDestroy = "uiNamespace setVariable ['ExtremoBuffs', objNull]";
	objects[]={};

	class controls
	{		
		class debuff1_icon_r: RscPicture {
			idc = 24601;
			text = "";
			x = 0.808438 * safezoneW + safezoneX;
			y = 0.864 * safezoneH + safezoneY;
			w = 0.021 * safezoneW;
			h = 0.0392 * safezoneH;
			colorBackground[] = {1,1,1,0};
			sizeEx = 1 * GUI_GRID_H;
		};
		class debuff1_icon: debuff1_icon_r
		{
			idc = 24601+10;
		};		
		class debuff1_time: RscText
		{
			idc = 24601+20;
			text = "";
			x = 0.807876 * safezoneW + safezoneX;
			y = 0.84 * safezoneH + safezoneY;
			w = 0.0218436 * safezoneW;
			h = 0.0206 * safezoneH;
			sizeEx = 0.7 * GUI_GRID_H;
			style = 2;
		};		
		class debuff2_icon_r: debuff1_icon_r {
			idc = 24602;
			x = 0.782188 * safezoneW + safezoneX;
		};
		class debuff2_icon: debuff2_icon_r
		{
			idc = 24602+10;
		};		
		class debuff2_time: debuff1_time
		{
			idc = 24602+20;
			x = 0.781624 * safezoneW + safezoneX;
		};
		class debuff3_icon_r: debuff1_icon_r {
			idc = 24603;
			x = 0.755937 * safezoneW + safezoneX;
		};
		class debuff3_icon: debuff3_icon_r
		{
			idc = 24603 + 10;			
		};		
		class debuff3_time: debuff1_time
		{
			idc = 24603 + 20;			
			x = 0.755372 * safezoneW + safezoneX;
		};		
		class debuff4_icon_r: debuff1_icon_r {
			idc = 24604;
			x = 0.729688 * safezoneW + safezoneX;
		};
		class debuff4_icon: debuff4_icon_r
		{
			idc = 24604 + 10;			
		};		
		class debuff4_time: debuff1_time
		{
			idc = 24604 + 20;			
			x = 0.729124 * safezoneW + safezoneX;
		};		
		class debuff5_icon_r: debuff1_icon_r {
			idc = 24605;
			x = 0.703437 * safezoneW + safezoneX;
		};
		class debuff5_icon: debuff5_icon_r
		{
			idc = 24605 + 10;						
		};		
		class debuff5_time: debuff1_time
		{
			idc = 24605 + 20;		
			x = 0.703154 * safezoneW + safezoneX;
		};

		//buffs
		class buff1_icon_r: RscPicture {
			idc = 24701;
			text = "";
			x = 0.808438 * safezoneW + safezoneX;
			y = 0.9116 * safezoneH + safezoneY;
			w = 0.021 * safezoneW;
			h = 0.0392 * safezoneH;
			sizeEx = 1 * GUI_GRID_H;
		};
		class buff1_icon: buff1_icon_r
		{
			idc = 24701 + 10;			
		};
		class buff1_time: RscText
		{
			idc = 24701 + 20;
			text = "";
			x = 0.808906 * safezoneW + safezoneX;
			y = 0.9542 * safezoneH + safezoneY;
			w = 0.0208123 * safezoneW;
			h = 0.0206 * safezoneH;
			sizeEx = 0.7 * GUI_GRID_H;
			style = 2;
		};
		
		class buff2_icon_r: buff1_icon_r {
			idc = 24702;
			x = 0.782188 * safezoneW + safezoneX;
		};
		class buff2_icon: buff2_icon_r
		{
			idc = 24702 + 10;			
		};
		class buff2_time: buff1_time
		{
			idc = 24702 + 20;
			x = 0.782655 * safezoneW + safezoneX;
		};
		
		class buff3_icon_r: buff1_icon_r {
			idc = 24703;
			x = 0.755937 * safezoneW + safezoneX;
		};
		class buff3_icon: buff3_icon_r
		{
			idc = 24703 + 10;			
		};
		class buff3_time: buff1_time
		{
			idc = 24703 + 20;			
			x = 0.755654 * safezoneW + safezoneX;
		};
		
		class buff4_icon_r: buff1_icon_r {
			idc = 24704;
			x = 0.729688 * safezoneW + safezoneX;
		};
		class buff4_icon: buff4_icon_r
		{
			idc = 24704 + 10;						
		};
		class buff4_time: buff1_time
		{
			idc = 24704 + 20;
			x = 0.729405 * safezoneW + safezoneX;
		};
		
		class buff5_icon_r: buff1_icon_r {
			idc = 24705;
			x = 0.703437 * safezoneW + safezoneX;
		};
		class buff5_icon: buff5_icon_r
		{
			idc = 24705 + 10;						
		};
		class buff5_time: buff1_time
		{
			idc = 24705 + 20;
			x = 0.703157 * safezoneW + safezoneX;
		};
	};   
};