class CfgPatches {
	class sGunplay_SNAFU {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"Elcan_Weapons_Optics",
			"Leupold_Mark8_Weapons_Optics",
			"SNAFU_Nightforce_Optics",
			"SNAFU_Tango6T_Weapons_Optics"
		};
	};
};

class CfgMods {
	class sGunplay_SNAFU {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_SNAFU";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_SNAFU";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {};
	};
};

class CfgVehicles {

	///////////////////////////////////////////////////////////////////// OPTICS
	class ItemOptics_Base;
	class SNAFU_Elcan_Base : ItemOptics_Base {
		s_pipRadius = 0.45;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.2;
		class OpticsInfo {
			PPBlurProperties=0.6;
		};
	};
	class SNAFU_Leupold_Mark8_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.4;
		s_isFullscreen = 1;
		s_pipRadius = 0.21;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.3;
		class OpticsInfo {
			PPBlurProperties=0.6;
		};
	};
	class SNAFU_Nightforce_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.4;
		s_isFullscreen = 1;
		s_pipRadius = 0.24;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.03;
		s_pipChromAber = 0.3;
		class OpticsInfo {
			PPBlurProperties=0.6;
		};
	};
	class SNAFU_Tango6T_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.3;
		s_pipRadius = 0.3;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
		class OpticsInfo {
			PPBlurProperties=0.6;
		};
	};
	class SNAFU_Trijicon_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.25;
		s_pipRadius = 0.175;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.025;
		s_pipChromAber = 0.2;
	};
	class SNAFU_Kahles_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.2;
		s_isFullscreen = 1;
		s_pipRadius = 0.3;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.04;
		s_pipChromAber = 0.3;
	};
	class SNAFU_HuntingOptic : ItemOptics_Base {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.5;
	};
	
	class Inventory_Base;
	///////////////////////////////////////////////////////////////// BUTTSTOCKS
	class SNAFU_M249Stock_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_AK19_Stock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_AK_AR_Stock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFUDSASA58_Stock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M4SS_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MK47_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MOE_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_PRSGen3_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_SCQR_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_SADAR_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_SBA_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_UBR_Stock: Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};

	///////////////////////////////////////////////////////////////// HANDGUARDS
	class SNAFU_M249HG_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_AK_HG : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_DSAHG1 : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_DSAHG2 : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MOEFS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MOELS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_GADAR: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR07: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR08: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR09: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR10: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR13: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MCMR15: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_HGMlok: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK7: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK9: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK10: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK13: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK15: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_LVOAHG: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_M60_Handguard_E3: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_M60_Handguard_E4: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_HG625: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_HGGS: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class SNAFU_MK47HG: Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};

	////////////////////////////////////////////////////////////////////// GRIPS
	class FGrip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class SNAFU_AFG_02_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class SNAFU_FGCR_Grip : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class SNAFU_FGKAC_Grip : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class SNAFUMPX_Grip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class SNAFU_PistolGripColtA2 : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_SR3Grip : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};

	/////////////////////////////////////////////////////////////// COMPENSATORS
	class SNAFU_AK19Muzzel : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_AK308Muzzel : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_MuzzelFF: Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_MK47Muzzel: Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_HeramuzzelF: Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class Test_SNAFU_MuzzelF: Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class SNAFU_Shotgunchoke_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
};

class cfgWeapons {
	class Rifle_Base;

	/////////////////////////////////////////////////////////////////////// SMGS
	class Tec9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_PDW_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_KAC_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_Agram_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_MP9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_MPX_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUVECTOR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUKH9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUP90_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUThompsonMk2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUUzi_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};

	//////////////////////////////////////////////////////////////////////// ARS
	class ACR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class GCGN_HK416_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class HK416_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNHK417_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class IA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class MK18_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SCAR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SG550_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SG552_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AK103A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_RPK16_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AEK545_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_CZ805_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_CALI_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class Snafu_ScarH_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AK5C_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_BR18_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_Bren_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_M60_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_RDB_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_G3A3_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUPPSh_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFURPD_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUSten_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class SNAFUTAR21_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUAUG_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUFAMAS_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUHoneyBadger_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};

	class SNAFU_M1918A2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_M70_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_U100_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class Snafu_PKP_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class SNAFUPPSKN_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUSA80_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	
	///////////////////////////////////////////////////////////////////// RIFLES
	class GCGN_M1Garand_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class GCGN_M110_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class GCGN_M82_Barret_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class BoltActionRifle_ExternalMagazine_Base;
	class SNAFU_AWM_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_AS50_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFUAX50_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFUM24_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class BoltActionRifle_Base;
	class SNAFUM98B_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFURSASS_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFUT5000_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_SR25_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M300_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUMDAR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUVSSK_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUKivaari_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFU_MAR10_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUAlligator_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUDVL10M2_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUGevar_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUGM6Lynx_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUM1A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUMarlin1895_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUMk12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUSRSA2_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFUTac21_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_M76_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_SKS_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class SNAFU_FRF2_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};

	/////////////////////////////////////////////////////////////////// SHOTGUNS
	class AA12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SNAFUAutoSScript;
	class GCGN_BenelliM4_Base : SNAFUAutoSScript {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class Spas12_Base: SNAFUAutoSScript {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class VR80_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class SN_Auto_Shotgun_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class Shotgun_Base;
	class SN_M870_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
	class Izh43Shotgun;
	class SNAFU_TP82S_Base : Izh43Shotgun {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.00;
	};
	class SNAFUASh12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.70;
	};
};
