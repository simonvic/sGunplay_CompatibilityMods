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
			"BO_EVO3A1",
			"BO_KH9",
			"BO_MKGS",
			"TheBO_Firearms_MP5",
			"BO_MP7",
			"BO_MP9",
			"BO_PDWR",
			"BO_PP2000",
			"BO_PPSh",
			"BO_Thompson",
			"BO_UMP45",
			"BO_UZI",
			"BO_Vector",

			"BO_ACR",
			"BO_AEK971",
			"BO_AKM",
			"BO_AKS74U",
			"BO_AN94",
			"BO_AR10",
			"BO_AR15",
			"BO_ARX160",
			"BO_AUGA1",
			"BO_Beowulf",
			"BO_MK18",
			"BO_WeaponZ_F2000",
			"BO_Famas",
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
			"BO_WeaponZ_L85",
			"BO_M1A",
			"BO_M4",
			"BO_M16A4",
			"BO_M110",
			"BO_M1981",
			"BO_M1941",
			"BO_MCXSpear",
			"BO_MCXTacops",
			"BO_MDR",
			"BO_Mini14",
			"BO_Mk14",
			"BO_Mosin",
			"BO_ACR17S",
			"BO_RPK16",
			"BO_SA58",
			"BO_SCARH",
			"BO_Sig552",
			"BO_SKS",
			"BO_Stoner63A",
			"BO_TAR21",
			"BO_TavorX95",
			"BO_TheFix",
			"BlackoutRifles_TKB0146",
			"BO_VSS",
			"BO_Winchester1873",

			"BO_M60",
			"BO_M134",
			"BO_M240B",
			"BO_M249",
			"BO_MG42",
			"BO_PKM",
			"BO_PKP",
			"BO_U100",

			"BO_AA12",
			"BO_BenelliM4",
			"BO_KSG",
			"BO_M590A1",
			"BO_HS12",
			"BO_R870",
			"BO_SPAS12",
			"BO_Trenchgun",
			"BO_USAS12",
			"BO_VR80",

			"BO_AlligatorSniper",
			"BO_AS50",
			"BO_AX50",
			"BO_M82A1",
			"BO_DeLisle",
			"BO_Delta5",
			"BO_DVL10M1",
			"BO_G43",
			"BO_Gevar",
			"BO_GM6Lynx",
			"BO_Kar98K",
			"BO_L115A3",
			"BO_L96",
			"BO_M1Garand",
			"BO_M200",
			"BO_M24",
			"BO_M300",
			"BO_M40A1",
			"BO_M87R",
			"BO_M96",
			"BO_MAR10",
			"BO_MK12",
			"BO_MRAD",
			"BO_OSV",
			"BO_PTRS41",
			"BO_R700",
			"BO_R700Timberwolf",
			"BO_Ruger",
			"BO_SAKOTRG",
			"BO_SCAR20S",
			"BO_Springfield1903",
			"BO_SRSA2",
			"BO_SuperSniper",
			"BO_SV98",
			"BO_SVT40",
			"BO_SVU",
			"BO_T5000",
			"BO_Tac21",
			"BO_Tigr",
			"BO_VSSK",
			"BO_WA2000"
		};
	};
};

class cfgWeapons {
	class Rifle_Base;
	/////////////////////////////////////////////////////////////////////// SMGS
	class BO_EVO3A1 : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_GlockPDW_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_KH9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MKGS_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5SDA2_Base: Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5SDA2 : BO_MP5SDA2_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5SDA2_FDE : BO_MP5SDA2 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5MPA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5MPA2 : BO_MP5MPA2_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5MPA2_FDE : BO_MP5MPA2 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5RailA2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5RailA2 : BO_MP5RailA2_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP5RailA2_FDE : BO_MP5RailA2 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP7_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MP9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PDWR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PP2000_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PPSh_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Thompson_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Tec9_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_UMP45_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_UZI_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Vector_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};
	class BO_Vector : BO_Vector_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};
	class BO_PP1901_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};
	class BO_PP1901 : BO_PP1901_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};

	//////////////////////////////////////////////////////////////////////// ARS
	class BO_ACR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_ACR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AEK971_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AK5C_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AK5C_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AK74_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AKM_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AKS74U_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_AKS74U : BO_AKS74U_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AR10_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AR15_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_ARX160_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Beowulf_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MK18_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_MK18 : BO_MK18_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_MK18_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_MK18_9mm : BO_MK18_9mm_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_F2000_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Famas_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_FedorovAvtomat_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_FG42_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_FG42M_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_FNFAL_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G3A3_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G36_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G36C_Base : BO_G36_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G36C : BO_G36C_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G36A1_Base : BO_G36_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G36A1 : BO_G36A1_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Groza_9x39_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Groza_762_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Groza_9x39 : BO_Groza_9x39_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Groza_762 : BO_Groza_762_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_HK416_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_HKG28_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_HoneyBadger_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_L85_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M1A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M16A1_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M16A4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M110_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M1918_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M1941_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MCXSpear_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_MCXTacops_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.00;
		s_recoilControlStabilityY = 0.00;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
		s_recoilControlKick = 0.00;
	};
	class BO_MDR_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MDR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Mini14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Mk14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BoltActionRifle_InnerMagazine_Base;
	class BO_Mosin_Base : BoltActionRifle_InnerMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_ACR17S_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_RPK16_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SA58_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};
	class BO_SA58 : BO_SA58_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
		s_recoilControlKick = 0.00;
	};
	class BO_SCARL_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SCARH_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SCAR_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Sig552_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SKS_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SKS : BO_SKS_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SKS_Tactical_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SKS_Tactical : BO_SKS_Tactical_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Stoner63A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TAR21_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TavorX95_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TavorX95 : BO_TavorX95_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TavorX95_9mm_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TavorX95_9mm : BO_TavorX95_9mm_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BoltActionRifle_ExternalMagazine_Base;
	class BO_TheFix_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_TKB0146_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_ASVAL_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Winchester1873_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};


	//////////////////////////////////////////////////////////////////// SNIPERS
	class BoltActionRifle_Base;
	class BO_AlligatorSniper_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_AS50_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
    class BO_AX50_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
    class BO_M82A1_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_DeLisle_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Delta5_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_DVL10M1_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_G43_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Gevar_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_GM6Lynx_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Kar98K_Base : BoltActionRifle_InnerMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_L115A3_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_L96_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M1Garand_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M200_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M24_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M300_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M40A1_Base : BoltActionRifle_InnerMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M87R_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M96_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MAR10_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MK12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MRAD_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_OSV_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PTRS41_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_R700_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_R700Timberwolf_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Ruger_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SAKOTRG_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SCAR20S_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Springfield1903_Base : BoltActionRifle_InnerMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SRSA2_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SR25_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SuperSniper_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SV98_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SVT40_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SVU_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SVD_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_T5000_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Tac21_Base : BoltActionRifle_ExternalMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Tigr_Tactical_Base : BO_SVD_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_VSSK_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_WA2000_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	/////////////////////////////////////////////////////////////////// SHOTGUNS
	class BO_AA12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MP133Shotgun;
	class BO_BenelliM4_Base : MP133Shotgun {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Shotgun_Base;
	class BO_KSG_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M590A1_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class B95;
	class BO_HS12_Base : B95 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_R870_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SPAS12_SemiAuto_Base : MP133Shotgun {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_SPAS12_Pump_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_Trenchgun_Base : Shotgun_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_USAS12_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_VR80_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	/////////////////////////////////////////////////////////////////////// LMGS
	class BO_M60_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M134_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_M240B_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class M4A1;
	class BO_M249Para_Base : M4A1 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_MG42_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PKP_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_PKM_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BO_U100_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
};

class cfgVehicles {
	///////////////////////////////////////////////////////////////////// OPTICS
	class ItemOptics_Base;
	class HuntingOptic;
	class BO_AccuPowerOptic : ItemOptics_Base {
		s_nearPlaneOverride = 0.3;
		s_pipRadius = 0.22;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_TheFix_Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ACOGOptic : ItemOptics_Base {
		s_nearPlaneOverride = 0.08;
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Bravo4 : ItemOptics_Base {
		s_nearPlaneOverride = 0.1;
		s_pipRadius = 0.4;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_DragonScope : ItemOptics_Base {
		s_nearPlaneOverride = 0.25;
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
		s_nearPlaneOverride = 0.25;
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_M1Garand_M84_Scope : HuntingOptic {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class M1903Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_GrozaOptic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_G36Optic : ItemOptics_Base {
		s_pipRadius = 0.25;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.03;
		s_pipChromAber = 0.3;
	};
	class BO_LeupoldMk4 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_NFATACR_1_8 : ItemOptics_Base {
		s_nearPlaneOverride = 0.55;
		s_pipRadius = 0.17;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Sight_4_6 : ItemOptics_Base {
		s_nearPlaneOverride = 0.25;
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender25 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_ShmidtBender20 : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SpecterDROptic : ItemOptics_Base {
		s_nearPlaneOverride = 0.2;
		s_pipRadius = 0.35;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Spitfire : ItemOptics_Base {
		s_nearPlaneOverride = 0.15;
		s_pipRadius = 0.21;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_SVT40Optic : ItemOptics_Base {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Tango6_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.3;
		s_pipRadius = 0.22;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_VortexRazor_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.5;
		s_pipRadius = 0.18;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class BO_Vudu_Base : ItemOptics_Base {
		s_nearPlaneOverride = 0.35;
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};

	///////////////////////////////////////////////////////////////// BUTTSTOCKS
	class Inventory_Base;
	class BO_SOPMODBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_MK18Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_PP1901_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_MCXTacops_Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_MCXSpear_Bttstck_Base : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_SA58_Buttstock : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class BO_CAR15_Bttstk : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};

	///////////////////////////////////////////////////////////////// HANDGUARDS
	class BO_CAR15_Handguard : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class BO_MCXTacops_Handguard : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};

	////////////////////////////////////////////////////////////////////// GRIPS
	/////////////////////////////////////////////////////////////// COMPENSATORS
	class ItemSuppressor;
	class BO_P30L_Compensator : ItemSuppressor {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.10;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
	};
};
