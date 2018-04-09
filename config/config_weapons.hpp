/*
		*ARRAY FORMAT:
		*0: STRING (Classname): Item Classname
		*1: STRING (Nickname): Nickname that will appear purely in the shop dialog
		*2: SCALAR (Buy price)
		*3: SCALAR (Sell price): To disable selling, this should be -1
		*4: STRING (Conditions): Same as above conditions string
*/

class LifeCfgWeaponShops {
	class cop_basic {
		displayName = "Оружейная полиции";
		side = "cop";
		conditions = "!(life_coplevel in [19,20,21,22])";
		conditionMessage = "Арсенал доступен силовым структурам";
		items[] = {
			{ "NVGoggles_mas_h", 1, "" },
			{ "Binocular", 1, "" },


			{ "bipod_01_F_blk", 1, "life_coplevel > 22" },
			{ "bipod_01_F_mtp", 1, "life_coplevel > 22" },
			{ "bipod_01_F_snd", 1, "life_coplevel > 22" },

			{ "SmokeShell", 1, "life_coplevel > 5" },
			{ "EXT_FlashBang", 1, "life_coplevel > 5" },
			{ "ItemGPS", 1, "" },
			{ "ItemCompass", 1, "" },
			{ "tf_microdagr", 1, "" },
			{ "tf_rf7800str", 1, "" },
			{ "tf_anprc152", 1, "" },
			{ "pmc_earpiece", 1, "" },

			{ "MineDetector", 1, "life_coplevel > 2" },
			{ "Medikit", 1, "" },

			{ "extItem_ItemRepairKit", 1, "" },
			{ "extItem_MetalWire", 1, "life_coplevel > 2" },
			{ "extItem_bottleclean_100", 1, "" },
			{ "extItem_canteen_clean_3", 1, "" },
			{ "extItem_matches", 1, "" },
			{ "extItem_Fuelcan", 1, "" },
			{ "extItem_prisonKey", 1, "life_coplevel > 8" },

			{ "extItem_metalDetector", 1, "life_coplevel > 2" },

			{ "optic_Aco", 1, "life_coplevel > 8" },
			{ "optic_ACO_grn", 1, "life_coplevel > 2" },
			{ "optic_Aco_smg", 1, "life_coplevel > 10" },
			{ "optic_mas_kobra", 1, "life_coplevel > 10" },
			{ "optic_mas_aim", 1, "life_coplevel > 8" },
			{ "optic_Holosight", 1, "life_coplevel > 10" },
			{ "optic_MRCO_EXT", 1, "life_coplevel > 22" },

			{ "Radar_Gun",2, "" },
			{ "DDOPP_X26_b", 1, "" },
			{ "hgun_mas_glocksf_F", 1, "life_coplevel > 8" },
			{ "hgun_Rook40_F", 1, "life_coplevel > 8" },
			{ "hgun_Pistol_heavy_01_F", 1, "life_coplevel > 8" },
			{ "hgun_Pistol_heavy_02_F", 1, "life_coplevel > 8" },
			{ "hgun_mas_mak_F", 1, "life_coplevel > 8" },
			{ "hgun_mas_glock_F", 1, "life_coplevel > 8" },
			{ "hgun_mas_m9_F", 1, "life_coplevel > 8" },
			{ "hgun_mas_bhp_F", 1, "life_coplevel > 8" },

			{ "arifle_mas_mp5", 1, "" },
			{ "arifle_mas_m27", 1, "" },
			{ "SMG_03C_TR_black", 1, "life_coplevel > 1" },
			{ "arifle_SDAR_F", 1, "life_coplevel > 2" },
			{ "arifle_MX_Black_F", 1, "life_coplevel > 2" },
			{ "arifle_mas_aks74u", 1, "life_coplevel > 2" },
			{ "arifle_mas_ak_74m", 1, "life_coplevel > 5" },
			{ "arifle_mas_m4", 1, "life_coplevel > 5" },
			{ "srifle_DMR_03_F", 1, "life_coplevel > 8" },
			{ "arifle_mas_akms", 1, "life_coplevel > 8" },
			{ "arifle_Katiba_F", 1, "life_coplevel > 9" },
			{ "srifle_mas_sr25", 1, "life_coplevel > 10" },
			{ "LMG_mas_rpk_F", 1, "life_coplevel > 10" },
			{ "arifle_mas_ak_74m_sf", 1, "life_coplevel > 11" },
			{ "arifle_mas_hk416", 1, "life_coplevel > 11" },
			{ "arifle_mas_hk416c", 1, "life_coplevel > 11" },
			{ "LMG_mas_M249a_F", 1, "life_coplevel > 11" },
			{ "LMG_mas_M249_F", 1, "life_coplevel > 12" },
			{ "launch_RPG7V", 1, "life_coplevel > 10" },
			{ "B_UAVTerminal", 1, "life_coplevel > 23" },
		    { "LMG_mas_pech_F", 1, "life_coplevel > 22" },
		    { "arifle_AK12_F", 1, "life_coplevel > 23" }
		};
	};

	class cop_crimi {
		displayName = "Оружейная криминалиста";
		side = "cop";
		conditions = "life_coplevel in [19,20,21,22]";
		conditionMessage = "Арсенал доступен сотрудникам OPR, Шерифам, Детективам и DEA";
		items[] = {
			{ "NVGoggles_mas_h", 1, "" },
			{ "Binocular", 1, "" },

			{ "SmokeShell", 1, "" },
			{ "EXT_FlashBang", 1, "" },
			{ "ItemGPS", 1, "" },
			{ "ItemCompass", 1, "" },
			{ "tf_microdagr", 1, "" },
			{ "tf_rf7800str", 1, "" },
			{ "tf_anprc152", 1, "" },

			{ "MineDetector", 1, "" },
			{ "Medikit", 1, "" },

			{ "extItem_ItemRepairKit", 1, "" },
			{ "extItem_MetalWire", 1, "" },
			{ "extItem_bottleclean_100", 1, "" },
			{ "extItem_canteen_clean_1", 1, "" },
			{ "extItem_matches", 1, "" },
			{ "extItem_Fuelcan", 1, "" },

			{ "extItem_metalDetector", 1, "" },

			{ "Radar_Gun",2, "" },
			{ "DDOPP_X26_b", 1, "" },
			{ "hgun_mas_glocksf_F", 1, "" },
			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_Pistol_heavy_01_F", 1, "" },
			{ "hgun_Pistol_heavy_02_F", 1, "" },
			{ "hgun_mas_mak_F", 1, "" },
			{ "hgun_mas_glock_F", 1, "" },
			{ "hgun_mas_m9_F", 1, "" },
			{ "hgun_mas_bhp_F", 1, "" },

			{ "arifle_mas_mp5", 1, "" },
			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_MXC_Black_F", 1, "" },
			{ "arifle_MX_Black_F", 1, "" },
			{ "arifle_MXM_Black_F", 1, "" },
			{ "arifle_mas_ak_74m", 1, "" },
			{ "arifle_mas_m4", 1, "" },
			{ "arifle_mas_ak_74m_sf", 1, "life_coplevel == 22" },
			{ "arifle_MX_SW_Black_F", 1, "life_coplevel == 22" },
		    { "pmc_earpiece", 1, "" }
		};
	};

	class rebel {
		displayName = "Оружейная повстанцев";
		side = "reb";
		conditions = "license_reb_gun";
		conditionMessage = "Необходима лицензия на оружие";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "(call life_donator) > 2" },

			{ "arifle_mas_akm", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_Holosight", 1, "" },

			//vip
			{ "arifle_Mk20C_plain_F", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_d", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_v", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_Mk200_F", 1, "(call life_donator) > 0" },
			{ "launch_RPG7V", 1, "(call life_donator) > 3" },
			{ "MiniGrenade", 1, "(call life_donator) > 0" }
		};
	};

	class gun {
		displayName = "Оружейная гражданских";
		side = "civ";
		conditions = "license_civ_gun";
		conditionMessage = "Необходима лицензия на оружие";
		items[] = {
			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_mas_bhp_F", 1, "" },
			{ "hgun_mas_m9_F", 1, "" },
			{ "hgun_mas_glock_F", 1, "" },
			{ "hgun_mas_mak_F", 1, "" },
			{ "hgun_mas_uzi_F", 1, "" },
			{ "hgun_mas_mp7p_F", 1, "" },
			{ "acc_flashlight", 1, "" },


			//vip
			{ "SMG_03_TR_khaki", 1, "(call life_donator) > 0" },
			{ "SMG_03C_TR_khaki", 1, "(call life_donator) > 0" }
		};
	};

	class mafia {
		displayName = "Оружейная мафии";
		side = "civ";
		conditions = "license_civ_mafia";
		conditionMessage = "Необходима лицензия Мафии";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },
			{ "SMG_02_F", 1, "" },
			{ "hgun_mas_bhp_F", 1, "" },
			{ "hgun_mas_m9_F", 1, "" },
			{ "hgun_mas_glock_F", 1, "" },
			{ "hgun_mas_mak_F", 1, "" },
			{ "hgun_mas_uzi_F", 1, "" },
			{ "hgun_Pistol_heavy_02_F", 1, "" },
			{ "hgun_Pistol_heavy_01_F", 1, "" },
			{ "hgun_mas_mp7_F", 1, "" },
			{ "hgun_mas_mp7p_F", 1, "" },
			{ "SMG_01_F", 1, "" },
			{ "arifle_TRG21_F", 1, "" },
			{ "arifle_Mk20_plain_F", 1, "" },
			{ "arifle_mas_mp5_d", 1, "" },
			{ "arifle_mas_m1014", 1, "" },
			{ "arifle_mas_m4vlt", 1, "" },
			{ "acc_flashlight", 1, "" }
		};
	};

	class med_basic {
		displayName = "Оружейная МЧС";
		side = "med";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "NVGoggles_mas_h", 1, "" },
			{ "pmc_earpiece", 1, "" },
			{ "extItem_TacticalBacon_100", 1, "" },
			{ "extItem_SmithsChips", 1, "" },
			{ "extItem_Steak", 1, "" },
			{ "extItem_BakedBeans_100", 1, "" },
			{ "extItem_Apple", 1, "" },
			{ "extItem_Peach", 1, "" },
			{ "extItem_Banana", 1, "" },
			{ "extItem_PineApple", 1, "" },
			{ "extItem_Coconut", 1, "" },
			{ "extItem_Spirit", 1, "" },
			{ "extItem_franta", 1, "" },
			{ "Binocular", 1, "" },
			{ "ItemGPS", 1, "" },
			{ "tf_fadak", 1, "" },
			{ "extItem_Waterpure", 1, "" },
			{ "extItem_antibiotic", 1, "" },
			{ "extItem_vitaminbottle", 1, "" },
			{ "extItem_bandage", 1, "" },
			{ "extItem_painkillers", 1, "" },
			{ "extItem_ItemMorphine", 1, "" },
			{ "extItem_ItemSurgeryKit", 1, "" },
			{ "extItem_Buffout", 1, "" },
			{ "Medikit", 1, "" },
			{ "extItem_defibrillator", 1, "" },
			{ "extItem_ItemRepairKit", 1, "" },
			{ "extItem_bottleclean_100", 1, "" },
			{ "extItem_canteen_clean_3", 1, "" },
			{ "extItem_canopener", 1, "" },
			{ "extItem_matches", 1, "" },
			{ "extItem_Fuelcan", 1, "" },
			{ "Extremo_Tool_Axe", 1, "" },
			{ "Extremo_Tool_PickAxe", 1, "" },
			{ "Extremo_Tool_Shovel", 1, "" },
			{ "Extremo_Tool_Hoe", 1, "" },
			{ "extItem_metalDetector", 1, "" },

			{ "extItem_adacBox", 1, "life_medicLevel > 1" },
			{ "extItem_adacNitro", 1, "life_medicLevel > 2" },
			{ "extItem_ItemDetoxin", 1, "life_medicLevel > 3" },
			{ "extItem_ItemRadX", 1, "life_medicLevel > 4" }
		};
	};

	class taxi {
		displayName = "Арсенал таксистов";
		side = "civ";
		conditions = "license_civ_taxi";
		conditionMessage = "Необходима лицензия таксиста";
		items[] = {
			{ "NVGoggles_mas_h", 1, "" },
			{ "DDOPP_X26_b", 1, "" }
		};
	};

	class genstore {
		displayName = "Универмаг";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "ItemGPS", 1, "" },
			{ "ItemMap", 1, "" },
			{ "ItemCompass", 1, "" },
			{ "Binocular", 1, "" },
			{ "NVGoggles", 1, "" },

			{ "extItem_ItemRepairKit", 1, "" },

			{ "tf_microdagr", 1, "" },
			{ "tf_anprc154", 1, "" },
			{ "tf_anprc148jem", 1, "" },

			{ "extItem_bottle_empty", 1, "" },
			{ "extItem_canteen_empty", 1, "" },

			{ "extItem_canopener", 1, "" },
			{ "extItem_knife", 1, "" },
			{ "extItem_matches", 1, "" },

			{ "extItem_Fuelcan_empty", 1, "" },
			{ "extItem_Fuelcan", 1, "" },
			{ "extItem_woodenLog", 1, "" },

			{ "Extremo_Tool_Axe", 1, "" },
			{ "Extremo_Tool_PickAxe", 1, "" },
			{ "Extremo_Tool_Shovel", 1, "" },
			{ "Extremo_Tool_Hoe", 1, "" },

			{ "extItem_metalDetector", 1, "" }
		};
	};

	class pharmacy {
		displayName = "Аптека";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "extItem_Waterpure", 1, "" },
			{ "extItem_antibiotic", 1, "" },
			{ "extItem_vitaminbottle", 1, "" },

			{ "extItem_bandage", 1, "" },
			{ "extItem_painkillers", 1, "" },
			{ "extItem_ItemMorphine", 1, "" },
			{ "extItem_ItemSurgeryKit", 1, "" },

			{ "extItem_redgull", 1, "" },
			{ "extItem_Buffout", 1, "" }
		};
	};
	
	class guns_seal {
		displayName = "Магазин оружия SEAL";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "arifle_AK12_F", 1, "" },
			{ "srifle_EBR_F", 1, "" },
			{ "arifle_MXM_Black_F", 1, "" },
			{ "LMG_mas_mk48_F", 1, "" },
			{ "LMG_Mk200_F", 1, "" },
			{ "launch_RPG32_F", 1, "" },
			{ "srifle_DMR_03_multicam_F", 1, "" },
			{ "DDOPP_X26", 1, "" },
			{ "arifle_mas_m27", 1, "" },
			{ "optic_ACO_grn", 1, "" }
		};
	};

	class 7news {
		displayName = "7NEWS Channel";
		side = "civ";
		conditions = "license_civ_press";
		conditionMessage = "";
		items[] = {
			{ "Tv_Camera", 1, "" },
			{ "sab_CUAV_Terminal", 1, "" },
			{ "pmc_earpiece", 1, "life_civlevel > 1" }
		};
	};

	class paintball {
		displayName = "Paintball Shop";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "Weapon_tippmann_x7_F", 1, "" },
			{ "Weapon_tippmann_x7_UMP_F", 1, "(call life_donator) > 0" },
			{ "Paintball_Gun_Black_F", 1, "(call life_donator) > 0" }
		};
	};

	class edashop {
		displayName = "Еда и напитки";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "extItem_TacticalBacon_100", 1, "" },
			{ "extItem_SmithsChips", 1, "" },
			{ "extItem_Steak", 1, "" },
			{ "extItem_BakedBeans_100", 1, "" },
			{ "extItem_Apple", 1, "" },
			{ "extItem_Peach", 1, "" },
			{ "extItem_Banana", 1, "" },
			{ "extItem_PineApple", 1, "" },
			{ "extItem_Coconut", 1, "" },
			{ "extItem_Spirit", 1, "" },
			{ "extItem_franta", 1, "" }
		};
	};

	class bar {
		displayName = "Алкоголь и табак";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "extItem_CarltonDraught", 1, "" },
			{ "extItem_Coopers", 1, "" },
			{ "extItem_Corona", 1, "" },
			{ "extItem_Jimbeam", 1, "" },

			{ "extItem_SmithsChips", 1, "" },
			{ "extItem_Steak", 1, "" }
		};
	};

	class shop24 {
		displayName = "Altis 24-7";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "tf_microdagr", 1, "" },
			{ "tf_anprc154", 1, "" },
			{ "tf_anprc148jem", 1, "" },
			{ "extItem_bottle_empty", 1, "" },
			{ "extItem_canteen_empty", 1, "" },
			{ "extItem_Fuelcan", 1, "" },

			{ "Extremo_Tool_Axe", 1, "" },
			{ "Extremo_Tool_PickAxe", 1, "" },
			{ "Extremo_Tool_Shovel", 1, "" },
			{ "Extremo_Tool_Hoe", 1, "" },

			{ "extItem_metalDetector", 1, "" },

			{ "extItem_ItemRepairKit", 1, "" },
			{ "extItem_bandage", 1, "" },
			{ "extItem_ItemSurgeryKit", 1, "" }
		};
	};

	class meeting {
		displayName = "Магазин забастовщика";
		side = "civ";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "Extremo_Sign_Police", 1, "" },
			{ "Extremo_Sign_Weed", 1, "" },
			{ "Extremo_Sign_Bikes", 1, "" },
			{ "Extremo_Sign_Gopnik", 1, "" },
			{ "Extremo_Sign_NoDrugs", 1, "" },
			{ "Extremo_Sign_NoWar", 1, "" },
			{ "Extremo_Sign_Poor", 1, "" },
			{ "Extremo_Sign_Revol", 1, "" },
			{ "Extremo_Sign_Uran", 1, "" },
			{ "Extremo_Sign_DickButt", 1, "" },
			{ "Extremo_Sign_FuckU", 1, "" }
		};
	};


	class fb {
		displayName = "Оружейная группировки FB";
		side = "civ";
		conditions = "license_civ_fb";
		conditionMessage = "Необходима лицензия FB";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "(call life_donator) > 2" },

			{ "arifle_mas_akm", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class mfo {
		displayName = "Оружейная группировки AMG";
		side = "reb";
		conditions = "license_reb_mfo";
		conditionMessage = "Необходима лицензия RPD";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },
			{ "srifle_DMR_01_F", 1, "" },

			{ "srifle_DMR_03_multicam_F", 1, "" },
			{ "srifle_DMR_03_khaki_F", 1, "" },
			{ "srifle_DMR_03_tan_F", 1, "" },

			{ "srifle_DMR_06_camo_F", 1, "" },
			{ "srifle_DMR_06_olive_F", 1, "" },
			{ "srifle_EBR_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "" },

			{ "arifle_mas_akm", 1, "" },
			{ "arifle_mas_akms", 1, "" },
			{ "arifle_mas_akms_c", 1, "" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_arx", 1, "" },
			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "" },
			{ "arifle_mas_m4_v", 1, "" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "srifle_mas_hk417_d", 1, "" },
			{ "srifle_mas_hk417_v", 1, "" },
			{ "srifle_mas_ebr", 1, "" },
			{ "arifle_mas_m14", 1, "" },
			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },
			{ "srifle_mas_m24", 1, "" },
			{ "srifle_mas_m24_d", 1, "" },
			{ "srifle_mas_m24_v", 1, "" },

			{ "srifle_mas_svd", 1, "" },
			{ "srifle_mas_m91", 1, "" },

			{ "arifle_MX_SW_F", 1, "life_reblevel == 3" },

			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" }
			/*{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },

			{ "NVGoggles", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26", 1, "" },
			{ "arifle_Katiba_F", 1, "" },

			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "arifle_MXM_F", 1, "" },
			{ "srifle_DMR_03_woodland_F", 1, "" },
			{ "arifle_mas_akms_c", 1, "" },
			{ "LMG_mas_M249_F_v", 1, "" },

			{ "launch_RPG7V", 1, "life_civlevel > 1" }*/
		};
	};

	class bf {
		displayName = "Оружейная группировки BHS";
		side = "civ";
		conditions = "license_civ_bf";
		conditionMessage = "Необходима лицензия BHS";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },
			{ "srifle_DMR_01_F", 1, "" },

			{ "srifle_DMR_03_multicam_F", 1, "" },
			{ "srifle_DMR_03_khaki_F", 1, "" },
			{ "srifle_DMR_03_tan_F", 1, "" },

			{ "srifle_DMR_06_camo_F", 1, "" },
			{ "srifle_DMR_06_olive_F", 1, "" },
			{ "srifle_EBR_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "" },

			{ "arifle_mas_akm", 1, "" },
			{ "arifle_mas_akms", 1, "" },
			{ "arifle_mas_akms_c", 1, "" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_arx", 1, "" },
			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "" },
			{ "arifle_mas_m4_v", 1, "" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "srifle_mas_hk417_d", 1, "" },
			{ "srifle_mas_hk417_v", 1, "" },
			{ "srifle_mas_ebr", 1, "" },
			{ "arifle_mas_m14", 1, "" },
			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },
			{ "srifle_mas_m24", 1, "" },
			{ "srifle_mas_m24_d", 1, "" },
			{ "srifle_mas_m24_v", 1, "" },

			{ "srifle_mas_svd", 1, "" },
			{ "srifle_mas_m91", 1, "" },

			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" }

		};
	};

	class arg {
		displayName = "Оружейная группировки ARG";
		side = "reb";
		conditions = "license_reb_arg";
		conditionMessage = "Необходима лицензия ARG";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "arifle_MXM_F", 1, "" },
			{ "arifle_mas_akms_c", 1, "" },
			{ "srifle_DMR_03_tan_F", 1, "" },
			{ "launch_RPG7V", 1, "life_reblevel > 1"}
		};
	};

	class vl {
		displayName = "Оружейная группировки AOC";
		side = "civ";
		conditions = "license_civ_vl";
		conditionMessage = "Необходима лицензия AOC";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "pmc_earpiece", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },

			{ "arifle_SDAR_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_ak_74m_sf", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "arifle_AK12_F", 1, "" },
			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },

			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },


			{ "arifle_mas_lee", 1, "" },

			{ "optic_mas_kobra", 1, "" },
			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class mc {
		displayName = "Оружейная группировки GHS";
		side = "reb";
		conditions = "license_reb_mc";
		conditionMessage = "Необходима лицензия GHS";
		items[] = {
			{ "NVGoggles", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },
			{ "pmc_earpiece", 1, "" },
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "arifle_AK12_F", 1, "life_reblevel > 1" },
			{ "DDOPP_X26", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_ak_74m_sf", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },

			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },
			{ "arifle_mas_m70", 1, "" },
			{ "LMG_mas_M249_F_v", 1, "" },
			{ "launch_RPG7V", 1, "life_reblevel > 1" },
			{ "optic_mas_kobra", 1, "" },
			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class nmd {
		displayName = "Оружейная группировки SA";
		side = "reb";
		conditions = "license_reb_nmd";
		conditionMessage = "Необходима лицензия SA";
		items[] = {
			{ "NVGoggles", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },
			{ "pmc_earpiece", 1, "" },
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "arifle_ARX_ghex_F", 1, "life_reblevel > 1" },
			{ "DDOPP_X26", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_ak_74m_sf", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },

			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },
			{ "arifle_mas_m70", 1, "" },
			{ "launch_RPG7V", 1, "life_reblevel > 1" },
			{ "optic_mas_kobra", 1, "" },
			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class aff {
		displayName = "Оружейная группировки ADS";
		side = "reb";
		conditions = "license_reb_aff";
		conditionMessage = "Необходима лицензия ADS";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },	
			{ "arifle_SPAR_02_blk_F", 1, "" },
			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "(call life_donator) > 2" },

			{ "arifle_mas_akm", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_kobra", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Holosight", 1, "" },

			//vip
			{ "arifle_Mk20C_plain_F", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_d", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_v", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_Mk200_F", 1, "(call life_donator) > 0" },
			{ "pmc_earpiece", 1, "life_reblevel > 1" },
			{ "arifle_AK12_F", 1, "life_reblevel > 1" },
			{ "launch_RPG7V", 1, "(call life_donator) > 3 OR life_reblevel > 2" },
			{ "MiniGrenade", 1, "(call life_donator) > 0" }

		};
	};
	
	class sdr {
		displayName = "Оружейная группировки ASF";
		side = "civ";
		conditions = "license_civ_sdr";
		conditionMessage = "Необходима лицензия ASF";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_hk416_d", 1, "" },
			{ "arifle_mas_hk416_v", 1, "" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "" },
			{ "arifle_mas_m4_v", 1, "" },
			{ "PMC_m4", 1, "" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },
			{ "pmc_earpiece", 1, "life_civlevel > 1" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "DDOPP_X26_b", 1, "" },
			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_AK12_F", 1, "life_civlevel > 1" },
			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "LMG_mas_M249a_F", 1, "life_civlevel > 1" },
			{ "optic_mas_kobra", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },
			{ "optic_Holosight", 1, "" },
			{ "launch_RPG7V", 1, "life_civlevel > 2 OR (call life_donator) > 3" },
			{ "LMG_03_F", 1, "" }
		};
	};

	class rfa {
		displayName = "Оружейная группировки SSG";
		side = "civ";
		conditions = "license_civ_rfa";
		conditionMessage = "Необходима лицензия SSG";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "(call life_donator) > 2" },

			{ "arifle_mas_akm", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class led {
		displayName = "Оружейная прокуратуры";
		side = "civ";
		conditions = "license_civ_led";
		conditionMessage = "Необходима лицензия прокуратуры";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },

			{ "NVGoggles", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },

			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26_b", 1, "" }
		};
	};

	class nsb {
		displayName = "Оружейная группировки TRIADA";
		side = "reb";
		conditions = "license_reb_nsb";
		conditionMessage = "Необходима лицензия TRIADA";
		items[] = {
			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "LMG_mas_M249_F_v", 1, "life_reblevel > 1 OR call (life_donator) > 0 OR life_donator > 0" },
			{ "launch_RPG7V", 1, "life_reblevel > 1 OR call (life_donator) > 0 OR life_donator > 0" }

		};
	};

	class la {
		displayName = "Оружейная группировки CDS";
		side = "reb";
		conditions = "license_reb_la";
		conditionMessage = "Необходима лицензия CDS";
		items[] = {
			{ "NVGoggles_mas_h", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },

			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "arifle_mas_akm", 1, "" },

			{ "LMG_mas_M249a_F", 1, "life_reblevel > 1" },
			{ "launch_RPG7V", 1, "life_reblevel > 1" }
		};
	};

	class fsg {
		displayName = "Оружейная IRA";
		side = "reb";
		conditions = "license_reb_fsg";
		conditionMessage = "Необходима лицензия IRA";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_aks74", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },

			{ "arifle_mas_akm", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_m4_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_Holosight", 1, "" }
		};
	};

	class ira {
		displayName = "Оружейная группировки IRA";
		side = "civ";
		conditions = "license_civ_ira";
		conditionMessage = "Необходима лицензия IRA";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },

			{ "NVGoggles_mas_h", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26_b", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },

			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "srifle_DMR_03_khaki_F", 1, "" },
			{ "arifle_MX_F", 1, "" },
			{ "LMG_mas_M249a_F", 1, "" },

			{ "launch_RPG7V", 1, "life_civlevel > 1 " }
		};
	};

	class ccp {
		displayName = "Оружейная";
		side = "civ";
		conditions = "license_civ_ccp";
		conditionMessage = "Необходима лицензия";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },

			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26_b", 1, "" },
			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_sf_c", 1, "" }
		};
	};

	class ics {
		displayName = "Оружейная группировки ICS";
		side = "civ";
		conditions = "license_civ_ics";
		conditionMessage = "Необходима лицензия ICS";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },

			{ "NVGoggles_mas_h", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26_b", 1, "" },
			{ "arifle_mas_ak74", 1, "" },

			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "LMG_mas_M249a_F", 1, "" },
			{ "arifle_mas_arx", 1, "" },
			{ "arifle_mas_akms_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "" },

			{ "srifle_DMR_03_tan_F", 1, "life_civlevel > 1" },
			{ "arifle_AK12_F", 1, "life_civlevel > 1" },
			{ "launch_RPG7V", 1, "life_civlevel > 1" }
		};
	};

	class sen {
		displayName = "Оружейная сената и губернатора";
		side = "civ";
		conditions = "license_civ_sen";
		conditionMessage = "Необходима лицензия сенатора";
		items[] = {
			{ "NVGoggles_INDEP", 1, "" },

			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },	
			{ "arifle_SPAR_02_blk_F", 1, "" },
			{ "DDOPP_X26", 1, "" },

			{ "hgun_Rook40_F", 1, "" },
			{ "hgun_P07_F", 1, "" },
			{ "hgun_PDW2000_F", 1, "" },

			{ "arifle_SDAR_F", 1, "" },
			{ "arifle_Katiba_F", 1, "" },
			{ "arifle_TRG20_F", 1, "" },

			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_mas_ak_74m_c", 1, "" },
			{ "arifle_SPAR_03_blk_F", 1, "" },
			{ "arifle_mas_aks_74_sf", 1, "" },
			{ "arifle_mas_aks74u", 1, "" },
			{ "arifle_mas_aks74u_c", 1, "" },
			{ "LMG_mas_rpk_F", 1, "(call life_donator) > 2" },

			{ "arifle_mas_akm", 1, "" },
			{ "arifle_mas_akms", 1, "(call life_donator) > 2" },
			{ "arifle_mas_akms_c", 1, "(call life_donator) > 2" },
			{ "arifle_mas_m70", 1, "" },
			{ "optic_Aco", 1, "" },
			{ "optic_ACO_grn", 1, "" },
			{ "optic_Aco_smg", 1, "" },

			{ "arifle_mas_hk416_d", 1, "(call life_donator) > 1" },
			{ "arifle_mas_hk416_v", 1, "(call life_donator) > 1" },
			{ "arifle_mas_l119_d", 1, "" },
			{ "arifle_mas_l119_v", 1, "" },
			{ "arifle_mas_m4_d", 1, "" },
			{ "arifle_mas_m4_v", 1, "" },
			{ "arifle_mas_mk16_l", 1, "" },
			{ "arifle_mas_mk16", 1, "" },

			{ "arifle_mas_g3", 1, "" },

			{ "arifle_mas_lee", 1, "" },


			{ "bipod_03_F_oli", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_mas_kobra", 1, "" },
			{ "optic_mas_aco", 1, "" },
			{ "optic_Holosight", 1, "" },

			//vip
			{ "arifle_Mk20C_plain_F", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_d", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_M249_F_v", 1, "(call life_donator) > 0" },
			//{ "LMG_mas_Mk200_F", 1, "(call life_donator) > 0" },
			{ "pmc_earpiece", 1, "life_civlevel > 1" },
			{ "arifle_AK12_F", 1, "life_civlevel > 1" },
			{ "launch_RPG7V", 1, "(call life_donator) > 3 OR life_civlevel > 2" },
			{ "MiniGrenade", 1, "(call life_donator) > 0" }
		};
	};
	class bst {
		displayName = "Оружейная Argo";
		side = "civ";
		conditions = "license_civ_bst";
		conditionMessage = "Необходима лицензи Argo";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },

			{ "pmc_earpiece", 1, "" },
			{ "acc_flashlight", 1, "" },
			{ "acc_pointer_IR", 1, "" },

			{ "DDOPP_X26_b", 1, "" },
			{ "arifle_mas_ak74", 1, "" },
			{ "arifle_AK12_F", 1, "life_civlevel > 1" },
			{ "arifle_mas_ak_74m_sf_c", 1, "" },
			{ "optic_mas_kobra", 1, "" },
			{ "optic_mas_aim", 1, "" },
			{ "optic_aco", 1, "" },
			{ "optic_Holosight", 1, "" },
			{ "launch_RPG7V", 1, "life_civlevel > 2 OR (call life_donator) > 3" }
		};
	};
	class admin {
		displayName = "Админ магазин";
		side = "";
		conditions = "";
		conditionMessage = "";
		items[] = {
			{ "extItem_headBag", 1, "" },
			{ "extItem_ducttape", 1, "" },
			{ "extItem_lockpick", 1, "" },
			{ "extItem_grinder", 1, "" },
			{ "extItem_blastingcharge", 1, "" },
			{ "DDOPP_X26_b", 1, "" },
			{ "extItem_ItemRepairKit", 1, "" },
			{ "Medikit", 1, "" },
			{ "ItemGPS", 1, "" },
			{ "ItemCompass", 1, "" },
			{ "tf_microdagr", 1, "" },
			{ "tf_rf7800str", 1, "" },
			{ "tf_anprc152", 1, "" },
			{ "NVGoggles_mas_h", 1, "" },
			{ "Binocular", 1, "" },
			{ "extItem_Waterpure", 1, "" },
			{ "extItem_antibiotic", 1, "" },
			{ "extItem_vitaminbottle", 1, "" },
			{ "extItem_bandage", 1, "" },
			{ "extItem_painkillers", 1, "" },
			{ "extItem_ItemMorphine", 1, "" },
			{ "extItem_ItemSurgeryKit", 1, "" },
			{ "extItem_redgull", 1, "" },
			{ "extItem_TacticalBacon_100", 1, "" },
			{ "extItem_SmithsChips", 1, "" },
			{ "extItem_Steak", 1, "" },
			{ "extItem_BakedBeans_100", 1, "" },
			{ "extItem_Apple", 1, "" },
			{ "extItem_Peach", 1, "" },
			{ "extItem_Banana", 1, "" },
			{ "extItem_PineApple", 1, "" },
			{ "extItem_Coconut", 1, "" },
			{ "extItem_Spirit", 1, "" },
			{ "extItem_franta", 1, "" },
			{ "extItem_HandyCam", 1, "" },
			{ "extItem_files", 1, "" },
			{ "extItem_suitcase", 1, "" },
			{ "extItem_Laptop", 1, "" },
			{ "extItem_RiceBox", 1, "" },
			{ "extItem_fireextinguisher", 1, "" },
			{ "extItem_Buffout", 1, "" }
		};
	};
};