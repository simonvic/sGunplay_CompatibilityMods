class CfgMods {
	class sGunplay_FOX {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_FOX";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_FOX";
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
	class sGunplay_FOX {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"FOX_Optics",
			"FOX_Attachments",
			"TFH_Weapons"
		};
	};
};

class cfgVehicles {
	class PUScopeOptic;
	class Inventory_Base;
	class ItemSuppressor;
	class ItemOptics;

	class FOX_VORTEX : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	
	class FOX_KAR98_Optic: PUScopeOptic {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
		
	class FOX_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TFH_Bttstck : Inventory_Base {
		s_recoilControlStabilityX = 0.45;
		s_recoilControlStabilityY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};

	class FOX_AK74_Compensator_Base : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};
	class FOX_AKS74U_Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};
	class FOX_AK74_Zen_Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};
	class FOX_RPK74_Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};
	class FOX_EVO_Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};
	class FOX_PP19_Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.20;
	};

	class FOX_rail_hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class TFH_rail_hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class FOX_rail_hndgrd2 : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
	class FOX_hndgrd : Inventory_Base {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.15;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.55;
	};
};

class CfgWeapons {
	class Rifle_Base;
	class FOX_CZ361 : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.65;
		s_recoilControlKick = 0.75;
	};
	class FOX_KEDR : Rifle_Base {
		s_recoilControlStabilityX = 0.70;
		s_recoilControlStabilityY = 0.70;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.65;
		s_recoilControlKick = 0.75;
	};
	class M16A2_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.30;
		s_recoilControlKick = 0.75;
	};
	class FOX_SOK94 : Rifle_Base {
		s_recoilControlStabilityX = 0.50;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.30;
		s_recoilControlKick = 0.75;
	};
	class FOX_PPSH41 : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
};