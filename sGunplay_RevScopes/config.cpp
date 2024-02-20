class CfgPatches {
	class sGunplay_RevScopes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"TF6_Weapons_Optics"
		};
	};
};

class CfgMods {
	class sGunplay_RevScopes {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_RevScopes";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_RevScopes";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {};
	};
};

class cfgVehicles {

	class ItemOptics;
	class EXPS3G33Optic_Base : ItemOptics {
		s_pipRadius = 0.38;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
		class OpticsInfo {
			PPDOFProperties[]={0,0.2,0,0,0,0};
			opticsZoomMin="0.3926/3";
			opticsZoomMax="0.3926/3";
			opticsZoomInit="0.3926/3";
			discretefov[]={};
		};
	};
	class EXPS3G33Optic_AK_Base : ItemOptics {
		s_pipRadius = 0.38;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
		class OpticsInfo {
			PPDOFProperties[]={0,0.2,0,0,0,0};
			opticsZoomMin="0.3926/3";
			opticsZoomMax="0.3926/3";
			opticsZoomInit="0.3926/3";
			discretefov[]={};
		};
	};
	class VortexRazorOptic_Base : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 3.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class VortexRazorOptic_AK_Base : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 3.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class SpecterOptic_Base : ItemOptics {
		s_pipRadius = 0.3;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class SpecterOptic_AK_Base : ItemOptics {
		s_pipRadius = 0.3;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class NightforceOptic_Base : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class PKASOptic : ItemOptics {
		s_pipRadius = 0.7;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class SusatOptic : ItemOptics {
		s_pipRadius = 0.32;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class SusatOptic_AK : ItemOptics {
		s_pipRadius = 0.32;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class OldScopeOptic : ItemOptics {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 2.0;
		s_pipMagnification = 0.1;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class ATACROptic : ItemOptics {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
	class ATACROptic_AK : ItemOptics {
		s_pipRadius = 0.314;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.3;
	};
};
