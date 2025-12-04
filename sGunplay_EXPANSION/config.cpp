class CfgPatches {
	class sGunplay_EXPANSION {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"DayZExpansion_Weapons_SMG_Kedr",
			"DayZExpansion_Weapons_Rifles_M14",
			"DayZExpansion_Weapons_Rifles_M1A"

		};
	};
};

class CfgMods {
	class sGunplay_EXPANSION {
		dir = "simonvic/sGunplay_CompatibilityMods/sGunplay_EXPANSION";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_EXPANSION";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {};
	};
};

class cfgWeapons {
	class Rifle_Base;
	class BoltActionRifle_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class M14_Base;

	/////////////////////////////////////////////////////////////////////// SMGS
	class Expansion_Kedr_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	//////////////////////////////////////////////////////////////////////// ARS
	class Expansion_G36_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	
	///////////////////////////////////////////////////////////////////// RIFLES
	class Expansion_AWM_Base : BoltActionRifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Expansion_DT11_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Expansion_Kar98_Base : BoltActionRifle_InnerMagazine_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Expansion_M14_Base : M14_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	class Expansion_M1A_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};

	/////////////////////////////////////////////////////////////////// SHOTGUNS
	class Expansion_BenelliM4_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.60;
		s_recoilControlStabilityY = 0.60;
		s_recoilControlMisalignmentX = 0.60;
		s_recoilControlMisalignmentY = 0.60;
		s_recoilControlKick = 0.60;
	};
	
};
