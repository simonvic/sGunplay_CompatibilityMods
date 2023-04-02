class CfgMods {
	class sGunplay_STALKERZ {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_STALKERZ";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_STALKERZ";
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
					"simonvic/sGunplay_CompatibilityMods/sGunplay_STALKERZ/scripts/4_World"
				};
			};
		};
	};
};

class CfgPatches {
	class sGunplay_STALKERZ {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"StalkerZ_WeaponZ" //for property modifier script
		};
	};
};

class cfgWeapons {
	class AKM_Base;
	class AKM;
	class M45_Base;
	class UMP45;
	class M4A1_Base;
	class Rifle_Base;
	class FAL_Base;
	class FAL;
	class MP5K;
	class AK5C_Base : AKM {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class MP40_Base : FAL {
		s_recoilControlKick = 0.69;
	};
	class FNC_Base : AKM {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};	
	class MK16_Base : FAL_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.25;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.75;
	};	
	class AM_PP19_Base : AKM {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class G36_Base : M4A1_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class AM_Saiga9 : AM_PP19_Base { // not necessary, but just in case you change the saiga9
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class Carl_Gustaf_M45 : M45_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class Criket_Base : UMP45 {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class Galil_ARM_Base : AKM {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.50;
	};
	class M14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.10;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
	class FP4_PPSH_Base : AKM {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class RK62_Base : AKM {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class RK62m_black : RK62_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.0;
	};
	class RK62m_tan : RK62_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
		s_recoilControlKick = 0.0;
	};
	class SA58_Base : AKM_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class SA58P : SA58_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class STG_Base : AKM {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class StalkerZ_AK12_Base : AKM {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class StalkerZ_AK12_custom : StalkerZ_AK12_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.0;
	};
	class Tomacuzi_Base : FAL {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class UDM42_Base : AKM {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
	class Ultimax100_Base : Rifle_Base {
		s_recoilControlKick = 0.75;
	};
	class cz805b_Base : FAL {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class cz805a_Base : FAL {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class sz_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class sz_G36_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class sz_Vityaz_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class sz_mp5sd_Base : MP5K {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.90;
		s_recoilControlMisalignmentY = 0.80;
		s_recoilControlKick = 0.75;
	};
};

class cfgVehicles {
	//////////////////////////////////////////////////////////////// ATTACHMENTS
	class Inventory_Base;
	class sz_att;
	class ItemSuppressor;
	class AK5C_buttstock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class FNC_buttstock : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class G3A3_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class G3SG1_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class PSG1_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class RPK_WoodBttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class sz_att_bttstck_rpk_wood: sz_att {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SZ_att_cz805_buttstock1: sz_att {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class SZ_att_cz805_buttstock2: sz_att {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.70;
	};
	class sz_att_AKButtPad: sz_att {
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.05;
		s_recoilControlKick = 0.10;
	};
	class sz_fal_Bttstck_wood : Inventory_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class sz_fal_Bttstck_para : Inventory_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class sz_fal_Bttstck_polymer : Inventory_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class MP5A2_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class G3SG1_Hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class MP5A2_Hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class PSG1_Hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class PSG1_Hndgrd_rail : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class sz_att_hndgrd_rpk_wood: sz_att {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class sz_falHGtac : Inventory_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
	};
	class sz_att_AFG_Black : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.10;
	};
	class sz_att_MVG_Black : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.10;
	};
	class sz_att_KAG_Black : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
	};
	class sz_att_RK6_Grip : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
	};
	class sz_att_RVG_Black : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
	};
	class sz_att_TangoDown_Grip : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
	};
	class sz_att_FortisShift_Grip : sz_att {
		s_recoilControlStabilityX = 0.05;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.15;
		s_recoilControlMisalignmentY = 0.15;
	};
	class sz_att_Comp556 : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.05;
	};
	class sz_fal_compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.05;
	};
	class sz_fal_compensator_para : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.05;
	};
	///////////////////////////////////////////////////////////////////// OPTICS
	class ItemOptics;
	class M4_T3NRDSOptic;
	class ACOGOptic;
	class HuntingOptic;
	class ReflexOptic;
	class ACOG_MRDSOptic : M4_T3NRDSOptic {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class ElcanOptic : ACOGOptic {
		s_pipRadius = 0.6;
		s_pipMagnification = 0.43;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class G3SG1_Optic : HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class M145Optic : ItemOptics {
		s_pipRadius = 0.38;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class No_32Optic : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class PKAS2_Optic : ItemOptics {
		// Need to change camera point
		s_pipRadius = 0.73;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class PSG1_Optic : HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class SV98Optic : HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class Susat_optic : ACOGOptic {
		s_pipRadius = 0.37;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.2;
	};
	class mk4cqt_optic : ReflexOptic {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class sz_HAMROptic : ItemOptics {
		s_pipRadius = 0.23;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.2;
	};
	class sz_Mk4Optic : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.2;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class sz_OTS14_optic : ItemOptics {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
};