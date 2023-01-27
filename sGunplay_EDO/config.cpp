class CfgMods {
	class sGunplay_EDO {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_EDO";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_EDO";
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
	class sGunplay_EDO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",

			"BO_MK18_Stocks",

			"BO_Bravo4",
			"BO_ACOGOptic",
			"BO_DragonScope",
			"BO_EotechHHS",
			"BO_FedorovOptics",
			"BO_HAMROptic",
			"BO_HMOptic",
			"BO_LeupoldMk4",
			"BO_NFATACR_1_8",
			"BO_Sight_4_6",
			"BO_ShmidtBender25",
			"BO_ShmidtBender20",
			"BO_SpecterDROptic",
			"BO_Spitfire",
			"BO_SVT40Optic",
			"BO_Tango6",
			"BO_VortexRazor",
			"BO_Vudu",
			"BO_AccuPowerOptic",

			"BO_M134",
			"BO_M240B",
			"BO_M249",
			"BO_MG42",
			"BO_PKM",
			"BO_U100",
			"BO_M60",

			"BO_GlockPDW",
			"BO_Tec9",
			"BO_ACR",
			"BO_AK74",
			"BO_AKM",
			"BO_AKS74U",
			"BO_AN94",
			"BO_AR15",
			"BO_ARX160",
			"BO_MK18",
			"BO_FedorovAvtomat",
			"BO_FG42",
			"BO_FG42M",
			"BO_FNFAL",
			"BO_G3A3",
			"BO_G36",
			"BlackoutRifles_GROZA",
			"BO_HK416",
			"BO_HKG28",
			"BO_HoneyBadger",
			"BO_M1A",
			"BO_M4",
			"BO_M16A4",
			"BO_M1981",
			"BO_MDR",
			"BO_Mk14",
			"BO_RPK16",
			"BO_SCARH",
			"BO_Sig552",
			"BO_Stoner63A",
			"BO_TAR21",
			"BO_TheFix",
			"BlackoutRifles_TKB0146",
			"BO_PKP",

			"BO_AA12",
			"BO_USAS12",
			"BO_VR80",

			"BO_EVO3A1",
			"BO_KH9",
			"BO_MKGS",
			"TheBO_Firearms_MP5",
			"BO_MP9",
			"BO_PDWR",
			"BO_PPSh",
			"BO_Thompson",
			"BO_UZI",
			"BO_Vector",
			"BO_PP1901",
			"BO_AK5C"
			
		};
	};
};

class cfgWeapons {
	class Rifle_Base;
	class BO_PP1901_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class BO_Vector_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class BO_UZI_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_Thompson_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_PPSh_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_PDWR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MP9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MP5RailA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MP5MPA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MP5SDA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MKGS_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_KH9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class MP5K;
	class BO_EVO3A1 : MP5K {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AA12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_USAS12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_VR80_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_M60_Base : Rifle_Base {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.25;
	};
	class BO_M134_Base : Rifle_Base {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.75;
	};
	class BO_M240B_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class BO_PKP_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class M4A1;
	class BO_M249Para_Base : M4A1 {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class BO_MG42_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class BO_PKM_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class BO_U100_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.25;
	};
	class BO_GlockPDW_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class BO_Tec9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_ACR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_ACR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AK5C_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AK5C_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AK74_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AKM_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AKS74U_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class BO_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_AR15_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_ARX160_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MK18_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class BO_MK18_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class BO_Famas_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class BO_FedorovAvtomat_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_FG42_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_FG42M_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_FNFAL_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_G3A3_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_G36_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_Groza_762_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_HK416_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_HKG28_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_HoneyBadger_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_M1A_Base : Rifle_Base {
		s_recoilControlKick = 0.70;
	};
	class BO_M4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_M16A4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_M1918_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MDR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_MDR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_Mk14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_RPK16_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_SCARL_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_SCARH_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_SCAR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_Sig552_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_Stoner63A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_TAR21_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class BO_TKB0146_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
};

class cfgVehicles {

	class Inventory_Base;
	class BO_SOPMODBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.35;
		s_recoilControlKick = 0.75;
	};
	class BO_MK18Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.35;
		s_recoilControlKick = 0.75;
	};
	class BO_PP1901_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};

	class ItemOptics_Base;
	class HuntingOptic;
	class BO_AccuPowerOptic : ItemOptics_Base {
		s_pipRadius = 0.24;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_TheFix_Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ACOGOptic : ItemOptics_Base {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Bravo4 : ItemOptics_Base {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_DragonScope : ItemOptics_Base {
		s_pipRadius = 0.32;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_EotechHHS : ItemOptics_Base {
		s_pipRadius = 0.34;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_FedorovOptics : ItemOptics_Base {
		s_pipRadius = 0.34;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_HAMROptic : ItemOptics_Base {
		s_pipRadius = 0.24;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_HMOptic_Base : HuntingOptic {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_LeupoldMk4 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_NFATACR_1_8 : ItemOptics_Base {
		s_pipRadius = 0.17;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Sight_4_6 : ItemOptics_Base {
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender25 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender20 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SpecterDROptic : ItemOptics_Base {
		s_pipRadius = 0.35;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Spitfire : ItemOptics_Base {
		s_pipRadius = 0.21;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SVT40Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Tango6_Base : ItemOptics_Base {
		s_pipRadius = 0.22;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_VortexRazor_Base : ItemOptics_Base {
		s_pipRadius = 0.18;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Vudu_Base : ItemOptics_Base {
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
};
