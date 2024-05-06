class CfgPatches {
	class sGunplay_MMIO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"MassGuns_Muzzles",
			"MassGuns_Optics",
			"MassGuns_Support"
		};
	};
};

class CfgMods {
	class sGunplay_MMIO {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_MMIO";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_MMIO";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		
		dependencies[] = {
			"World",
		};

		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"simonvic/sGunplay_CompatibilityMods/sGunplay_MMIO/scripts/4_World"};
			};
		};
	};
};

class cfgWeapons {
	class Rifle_Base;
	class Mass_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassB52_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class M16A2;
	class Mass_HK416_Base : M16A2 {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class MassKivaari_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class M4A1;
	class MassM16_Base : M4A1 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class CZ527;
	class MassM24_Base : CZ527 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Mass_M98B_Base : CZ527 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class BoltActionRifle_Base;
	class MassM300_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassM417_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class MassMini14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassMP40_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassMP153_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Mass_PKM_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassPPSH41_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassAR15DMR_Base : M4A1 {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class AK74;
	class Mass_RPK74_Base : AK74 {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class Scout;
	class Mass_RugerPrecision_Base : Scout {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Mass_SPAS12_Base : MassMP153_Base {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class Izh18;
	class Stevens_Base : Izh18 {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassSVT40_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Mass_SVU_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class MassType81_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
};

class cfgVehicles{

	//////////////////////////////////////////////////////////////////////////// OPTICS
	class ItemOptics;
	class Mass1P69 : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class MassPKA : ItemOptics {
		s_pipRadius = 0.6;
		s_pipMagnification = 0.25;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.1;
	};
	class MassScope : ItemOptics {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		s_nearPlaneOverride = 0.3;
	};
	class LongrangeOptic;
	class MassScoutLRS : LongrangeOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipMagnification = 0.1;
		s_pipRadius = 1.0;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.4;
	};

	//////////////////////////////////////////////////////////////////////////// BUTTSTOCKS

	class Inventory_Base;
	class M4_OEBttstck;
	class Mass_HK416Bttstck : M4_OEBttstck {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class MassAR15AdjBttstck : M4_OEBttstck {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class MassM417Stock : M4_OEBttstck {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};
	class MassSPAS12Stock : Inventory_Base {
		s_recoilControlStabilityX = 0.40;
		s_recoilControlStabilityY = 0.40;
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.60;
	};

	//////////////////////////////////////////////////////////////////////////// COMPENSATORS

	class ItemSuppressor;
	class MassMuzzle338 : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzle556 : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzle762 : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzleComp556 : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzlePistol : ItemSuppressor {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.05;
	};

};
