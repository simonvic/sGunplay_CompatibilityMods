class CfgMods {
	class sGunplay_INTENZ {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_INTENZ";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_INTENZ";
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
	class sGunplay_INTENZ {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"IntenZ_Optics_Leupold",
			"IntenZ_Optics_VortexViper",
			"IntenZ_Weapons_AK47",
			"IntenZ_Weapons_M14",
			"IntenZ_Weapons_PKP",
			"IntenZ_Optics_ACOG"
		};
	};
};

class CfgVehicles {
	class ItemOptics_Base;
	class IZ_Optic_ACOG_Base : ItemOptics_Base {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class IZ_Optic_Leupold : ItemOptics_Base {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class IZ_Optic_VortexViper : ItemOptics_Base {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class Mosin_Compensator;
	class IZ_PKP_Compensator : Mosin_Compensator {
		s_recoilControlStabilityX = 0.10;
		s_recoilControlStabilityY = 0.10;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.15;
		s_recoilControlKick = 0.0;
	};
};

class CfgWeapons {
	class AKM_Base;
	class IZ_AK47_Base : AKM_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.75;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class Rifle_Base;
	class IZ_M14_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.0;
		s_recoilControlStabilityY = 0.50;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.50;
		s_recoilControlKick = 0.75;
	};
};