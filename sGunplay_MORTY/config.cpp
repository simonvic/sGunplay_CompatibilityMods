class CfgMods {
	class sGunplay_MORTY {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_MORTY";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_MORTY";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};

class CfgPatches {
	class sGunplay_MORTY {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"TTC_AKMod",
			"TTC_Attachements_DMR",
			"ButtstockTTC",
			"ButtstockTTC2",
			"ButtstockTTC3",
			"ButtstockHKG28",
			"HoneyButtstock",
			"TTC_Raptr",
			"TTC_SG552",
			"TTC_SG550",
			"TTC_SCARL",
			"TTC_SCARH",
			"TTC_MP44",
			"TTC_MK18",
			"TTC_MCX",
			"TTC_M16A4",
			"TTC_M16",
			"TTC_M4Tac",
			"TTC_KAC",
			"TTCHKG28",
			"TTC_HK417",
			"TTC_HK416",
			"TTC_G3",
			"TTCFD338",
			"TTC_Fal_Weapon",
			"TTC_BAR",
			"TTC_A12Worn",
			"TTC_A12",
			"TTC_AG3",
			"TTC_AEK",
			"TTC_MP5SD",
			"TTC_MP7A1",
			"TTC_MPX",
			"TTC_PP91",
			"TTC_UZI",
			"TTCOpticDMR",
			"TTCOptic2",
			"TTCOpticG28",
			"TTCOpticHAMR",
			"TTCOptic_SVT40",
			"TTCOpticEotech"
		};
	};
};

class cfgWeapons {
	class Rifle_Base;
	class TTC_UZI_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_PP91_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_MPX_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_MP7A1_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_MP5SD_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.50;
	};
	class TTC_Raptr_Base : Rifle_Base {
		s_recoilControlKick = 0.50;
	};
	class TTC_SG552_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.75;
	};
	class TTC_SG550_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.75;
	};
	class TTC_SCARL_base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_SCARH_base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_MP44_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.75;
	};
	class TTC_MK18_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
	};
	class TTC_MCX_Spear_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
	};
	class TTC_MCX_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_M16A4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class TTC_M16A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class TTC_M4Tac_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTCKAC_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_HKG28_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_HK417_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_HK416Comp_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class TTC_HK416_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.30;
		s_recoilControlStabilityY = 0.30;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_G3_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class TTC_FD338_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.10;
		s_recoilControlKick = 0.70;
	};
	class TTC_FAL_Base : Rifle_Base {
		s_recoilControlStabilityX = -0.10;
		s_recoilControlStabilityY = -0.10;
		s_recoilControlMisalignmentX = -0.10;
		s_recoilControlMisalignmentY = -0.10;
	};
	class TTC_BAR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.30;
		s_recoilControlKick = 0.70;
	};
	class TTC_AEK_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class TTC_AG3_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class TTC_AK12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_AK12Worn_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TTC_AVS36_Base : Rifle_Base {};
};

class cfgVehicles {

	class Inventory_Base;
	class TTC_MPXMCX2_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_MPXMCX1_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_MPXMCX1_Bttstck2 : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_MPXMCXSPEAR_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock_Honey : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_ButtstockHK : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock2 : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock3 : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock_Morty : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock_CAR15 : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_Buttstock_AK12 : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_AKMod_bttstk : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TTC_AKMOD_AFG : Inventory_Base {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.15;
	};
	class TTC_DMR_AFG : Inventory_Base {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.15;
	};
	class TTC_DMR_VFG : Inventory_Base {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.15;
	};
	

	class ItemOptics;
	class TTC_EotechVudu_Optic : ItemOptics {
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.01;
	};
	class TTC_EotechVudu_AK_Optic : ItemOptics {
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.01;
	};
	class TTC_VortexRHDAMG_Optic : ItemOptics {
		s_isFullscreen = 1;
		s_pipRadius = 0.2;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
	};
	class TTC_VortexSE_Optic : ItemOptics {
		s_isFullscreen = 1;
		s_pipRadius = 0.6;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
	};
	class TTC_G3_Optic : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
	};
	class TTC_G28_Optic : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
	};
	class TTC_HAMR : ItemOptics {
		s_pipRadius = 0.5;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
		class OpticsInfo {
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {};
		};
	};
	class TTC_HAMR_AK : ItemOptics {
		s_pipRadius = 0.5;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
		class OpticsInfo {
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {};
		};
	};
	class TTC_Elcan : ItemOptics {
		s_pipRadius = 0.5;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
		class OpticsInfo {
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {};
		};
	};
	class TTC_Elcan_AK : ItemOptics {
		s_pipRadius = 0.5;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.01;
		class OpticsInfo {
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {};
		};
	};
	class TTC_SVT40_Optic : ItemOptics {
		s_pipRadius = 0.45;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.007;
		s_pipChromAber = 0.2;
	};
};
