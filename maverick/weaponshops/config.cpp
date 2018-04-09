/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "UnionClientCashMoney";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 3; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call UnionClient_session_updateRequest;"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Параметр магазина пуст!";
		msgInVehicle =						"Вы не можете находится в транспорте!";
		msgShopExists =						"Магазин не существует!";
		msgCondition =						"У вас нет права использовать этот магазин!";
		msgCashOnHand =						"Наличка - %1%2";
		msgCartTotal =						"Корзина - %1%2";
		msgInfoTooltip =					"--> Удерживаете левую кнопку и двигайте мышью чтобы вращать оружие.\n--> Двойным кликом можно убрать предмет из корзины.\n--> Используйте 'Перезаписать снаряжение' что-бы заменить текущее снаряжение на купленное.";
		msgInfoTooltip2 = 					"--> Двойным кликом можно убрать предмет из корзины.\n--> Используйте 'Перезаписать снаряжение' что-бы заменить текущее снаряжение на купленное.";
		msgEmptyShop = 						"Ничего не найдено...";
		msgInfoText	=						"<t color='#FFFFFF'>Цена:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Корзина полна";
		msgCartEmpty =						"Корзина пуста";
		msgNotEnoughCash =					"Недостаточно налички";
		msgOverrideAlert =					"Используйте 'Перезаписать снаряжение' что-бы заменить текущее снаряжение на купленное.";
		msgTransactionComplete =			"Покупка успешно совершена за %1%2";
		msgNotEnoughSpace =				 	"У вас небыло достаточно места для предметов. Однако вы заплатили только за то, что могли унести!";
		msgClear =							"Очистить";
		msgSearch =							"Поиск";

		//--- localization for dialogs
		#define dialogTabWeapon				"Оружие"
		#define dialogTabMagazines			"Патроны"
		#define dialogTabAttachments		"Обвесы"
		#define dialogTabOther				"Другое"
		#define dialogAddBtn				"Добавить"
		#define dialogOverrideTooltip		"Перезаписать снаряжение"
		#define dialogCompleteBtn			"Купить"
		#define dialogCloseBtn 				"Закрыть"
	};

	class shops {
		class reb_shop {
			title = "Магазин повстанцев"; //--- Title of Shop
		condition = "_test = false;if (license_reb_gun && (playerside == independent)) then {_test = true} else {_test = false};_test;"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 30; 			//--- Max Amount of Items in Shopping Cart
			weapons[] = {
				{"arifle_mas_ak74", 40000, "true", ""},
				{"arifle_mas_ak_74m_c", 50000, "true", ""},
				{"arifle_mas_aks74", 50000, "true", ""},
				{"arifle_SDAR_F", 12000, "true", ""},
				{"arifle_mas_aks_74_sf", 50000, "true", ""},
				{"arifle_mas_aks74u", 50000, "true", ""},
				{"arifle_mas_aks74u_c", 50000, "true", ""},
				{"LMG_mas_rpk_F", 90000, "(call life_donator) > 2", ""},
				{"arifle_mas_akm", 90000, "(call life_donator) > 2", ""},
				{"arifle_mas_akms", 90000, "(call life_donator) > 2", ""},
				{"arifle_mas_akms_c", 90000, "(call life_donator) > 2", ""},
				{"arifle_mas_m70", 90000, "true", ""},
				{"arifle_mas_hk416_d", 70000, "true", ""},
				{"arifle_mas_hk416_v", 70000, "true", ""},
				{"arifle_mas_l119_d", 70000, "true", ""},
				{"arifle_mas_l119_v", 70000, "true", ""},
				{"arifle_mas_m4_d", 70000, "(call life_donator) > 2", ""},
				{"arifle_mas_m4_v", 70000, "(call life_donator) > 2", ""},
				{"arifle_mas_mk16_l", 70000, "true", ""},
				{"arifle_mas_mk16", 70000, "true", ""},
				{"arifle_mas_g3", 70000, "true", ""},
				{"arifle_mas_lee", 20000, "true", ""},
				{"hgun_Rook40_F", 7000, "true", ""},
				{"launch_RPG7V", 450000, "(call life_donator) > 3", ""},
				{"hgun_P07_F", 7000, "true", ""},
				{"hgun_PDW2000_F", 7000, "true", ""},
				{"DDOPP_X26", 1200, "true", ""}
			};

			magazines[] = {
				{"30Rnd_mas_545x39sd_mag", 800, "true", ""},
				{"100Rnd_mas_545x39_mag", 800, "true", ""},
				{"30Rnd_mas_762x39sd_mag", 800, "true", ""},
				{"30Rnd_mas_556x45_T_Stanag", 800, "true", ""},
				{"20Rnd_mas_762x51_T_Stanag", 800, "true", ""},
				{"5Rnd_mas_762x51_T_Stanag", 800, "true", ""},
				{"16Rnd_9x21_green_Mag", 800, "true", ""},
				{"RPG7_PG7VR", 450000, "true", ""},
				{"30Rnd_9x21_Yellow_Mag", 800, "true", ""},
				{"DDOPP_6Rnd_X26", 200, "true", ""},
				{"extItem_headBag", 500, "true", ""},
				{"extItem_ducttape", 500, "true", ""},
				{"extItem_lockpick", 500, "true", ""},
				{"extItem_grinder", 800, "true", ""},
				{"20Rnd_556x45_UW_mag", 800, "true", ""},
				{"extItem_blastingcharge", 800, "true", ""},				
				{"20Rnd_762x51_Mag", 800, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 1250, "true", ""},
				{"optic_mas_aim", 1250, "true", ""},
				{"acc_pointer_IR", 1250, "true", ""},
				{"acc_flashlight", 1250, "true", ""},
				{"bipod_03_F_oli", 1250, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles", 700, "true", ""}
			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
