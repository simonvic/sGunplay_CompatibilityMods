class CfgPatches {
	class sGunplay_ModernScopes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay"
		};
	};
};

class CfgMods {
	class sGunplay_ModernScopes {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_ModernScopes";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_ModernScopes";
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
	class VTR_accupoint_Trijicon : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_Barska : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 0;
		s_pipRadius = 0.16;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		s_nearPlaneOverride = 0.45;
	};
	class VTR_bravo4 : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 0;
		s_pipRadius = 0.57;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_fx2_scope : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 0;
		s_pipRadius = 0.16;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		s_nearPlaneOverride = 0.5;
	};
	class VTR_Leupold_mark4_scope : ItemOptics {
		s_pipRadius = 0.16;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		s_nearPlaneOverride = 0.3;
	};
	class VTR_NcstarAdo : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_AtacrNightForce : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 3.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_PenTax : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_SigSauerTango : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_Vortex : ItemOptics {
		s_pipRadius = 0.26;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_SigSauerTango : ItemOptics {
		s_isFullscreen = 1;
		s_showEnterMisalignment = 1;
		s_pipRadius = 1.0;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class VTR_Vudu : ItemOptics {
		s_pipRadius = 0.26;
		s_pipMagnification = 0.314;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
};
