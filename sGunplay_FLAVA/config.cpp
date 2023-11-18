class CfgMods {
	class sGunplay_FLAVA {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_FLAVA";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_FLAVA";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {
			"World"
		};
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {
					"simonvic/sGunplay_CompatibilityMods/sGunplay_FLAVA/scripts/4_World"
				};
			};
		};
	};
};

class CfgPatches {
	class sGunplay_FLAVA {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"TF_Elcan_SpecterDR"
		};
	};
};

class cfgVehicles {
	///////////////////////////////////////////////////////////////////// OPTICS
	class ItemOptics;
	class TF_OTs_14_GrozaOptic : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class TF_HAMROptic : ItemOptics {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class TF_ElcanSpecterDROptic_Base : ItemOptics {
		s_pipRadius = 0.5;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		class OpticsInfo {
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			discretefov[] = {}; //sorry no double zoom :(
		};
	};
	class TF_ElcanSpecterDR_6xOptic_Base : ItemOptics {
		s_pipRadius = 0.3;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		class OpticsInfo {
			opticsZoomMin="0.3926/6";
			opticsZoomMax="0.3926/6";
			opticsZoomInit="0.3926/6";
			discretefov[] = {}; //sorry no double zoom :(
		};
	};
	class TF_EOTechXPSOptic_Base;
	class TF_EOTechXPSOpticUp_Black : TF_EOTechXPSOptic_Base {
		s_pipRadius = 0.7;
		s_pipMagnification = 0.4;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.2;
	};
	
	class Inventory_Base;
	///////////////////////////////////////////////////////////////// BUTTSTOCKS
	class TF_PKP_PlasticBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_PKM_WoodBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_PKM_ZenitPT2Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_PKM_CNCC39Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4_B5PrecisionBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4_MagpulPRSGen3Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M16_Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4_FABDGLCoreBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_AK_MagpulZhukovBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_AK_MVRIBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_AK_Zenit_PT1Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_AN94_PlasticBttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_MAR10_Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4CraneBttstck : TF_MAR10_Bttstck_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4_ADARBttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_M4_CMMG_RIPBttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_SCAR_Mk20Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class TF_SCAR_StndBttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};

	///////////////////////////////////////////////////////////////// HANDGUARDS
	class TF_PKP_CNCC46Hndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_PKM_ZenitB50Hndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_M16_KACHndgrd_RIS_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_URXHndgrd_MLOCK : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_NoveskeHndgrd_Short_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_NoveskeHndgrd_Long_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_LancerHndgrd_MLOCK : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_KACHndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AK_ZenitB10MB19Hndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AK_MagpulZhukovHndgrdU_MLOCK : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AK_MagpulMOEHndgrd_MLOCK : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_ADDHndgrd_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AKS74U_WoodHndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AKS74U_CAAHndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AKS74U_ZenitB11PlasticHndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AK_ZenitB30B31Hndgrd_RIS : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_CMMG15Hndgrd_MLOCK_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_AR10_CMMG9Hndgrd_MLOCK_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_ADAR_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_DD12_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_DD9_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_DD_FSP_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_SMR13_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_Handguard_M4_SMR9_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_M4_Hndgrd_RIS_FDE_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_MREXHndgrd_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_StndHndgrd_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	
	////////////////////////////////////////////////////////////////////// GRIPS
	class TF_ZenitRK1B25U_RIS_Grip : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class TF_AR_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_SAW_RIS_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AFG_RIS_Grip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class TF_AFG_MLOCK_Grip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class TF_BCM_MLOCK_Grip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};
	class TF_RVG_RIS_Grip_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.10;
	};

	/////////////////////////////////////////////////////////////// COMPENSATORS
	class ItemSuppressor;
	class TF_OTs_14_Groza_Barrel_Grip : ItemSuppressor {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_PKM_SAICompensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_ZenitDTK1Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_6p20Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch76Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch63Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch43Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
};

class CfgWeapons {
	class Rifle_Base;
	class TF_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_L_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_L_CQC_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_H_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_H_CQC_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SCAR_20_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_OTs_14_Groza_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	class TF_AEK999_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_M240_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class TF_M249_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	class TF_M1A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class TF_M14_DMR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class TF_M14_EBR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class TF_M14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class TF_MAR_10_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class TF_SVCh_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	
	class BoltActionRifle_Base;
	class TF_VPO190_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	
};