/**

https://simonvic.github.io/sUDE/tutorials/2/#Recoils

To define a 5.56 recoil, do the following:

class Recoil_YourWeapon : GenericRecoil_556 {
	override void initRecoilParameters() {
		super.initRecoilParameters();
		// don't forgot about super call!
		// here only change what you need
		kick = 0.69;
	}
}
*/

class GenericRecoil_9 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-0.690, 0.690,  2.450,  3.750};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.650;
		
		misalignIntensity  = {0.250, 0.125};
		misalignAccumSpeed = 0.975;
		misalignResetSpeed = 0.600;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.065;
		kickResetTime      = 1.450;
	}
}

class GenericRecoil_45 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-0.700, 0.700,  2.450,  3.785};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.650;
		
		misalignIntensity  = {0.250, 0.125};
		misalignAccumSpeed = 0.975;
		misalignResetSpeed = 0.600;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.065;
		kickResetTime      = 1.450;
	}
}

class GenericRecoil_9_39 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = { -0.165, 0.585,  2.275,  3.050};	
		handsAccumSpeed    = 0.925;
		handsResetSpeed    = 0.870;

		misalignIntensity  = {0.125, 0.125};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.650;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.020;
		kickResetTime      = 2.250;
	}
}

class GenericRecoil_357 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-1.750, 2.550,  7.250,  9.300};	
		handsAccumSpeed    = 0.985;
		handsResetSpeed    = 0.750;
		
		misalignIntensity  = {0.125, 0.125};
		misalignAccumSpeed = 0.985;
		misalignResetSpeed = 0.550;
		
		mouseRanges        = { -0.250, 0.275,  0.500,  0.750};
		mouseTime          = 0.100;
	
		kick               = 0.080;
		kickResetTime      = 2.250;
	}
}

class GenericRecoil_5_45 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.725;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.950;
		misalignResetSpeed = 0.750;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.047;
		kickResetTime      = 2.250;
	}
}

class GenericRecoil_5_56 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.690;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.700;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.048;
		kickResetTime      = 2.250;
	}
}

class GenericRecoil_7_62x39 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.725;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.650;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.050;
		kickResetTime      = 2.250;
	}
}

class GenericRecoil_7_62x54 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = { -2.165, 2.285,  7.565,  8.795};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.750;

		misalignIntensity  = {0.250, 0.150};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.575};
		mouseTime          = 0.200;
	
		kick               = 0.055;
		kickResetTime      = 3.550;
	}
}

class GenericRecoil_308 : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = { -1.165, 2.285,  7.565,  8.795};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.750;

		misalignIntensity  = {0.250, 0.150};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.850;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.575};
		mouseTime          = 0.200;
	
		kick               = 0.085;
		kickResetTime      = 3.150;
	}
}

class GenericRecoil_12ga : RecoilBase {
	override void initRecoilParameters() {
		handsRanges        = { -3.750, 3.750,  7.265,  8.295};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.675;
		
		misalignIntensity  = {0.050, 0.050};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.775};
		mouseTime          = 0.075;
	
		kick               = 0.095;
		kickResetTime      = 3.550;
	}
}



//////////////////////////////////////////////////////////////////////// VANILLA
//////////////////////////////////////////////////////////////////////// 5.45
modded class Ak74Recoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.725;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.950;
		misalignResetSpeed = 0.750;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.047;
		kickResetTime      = 2.250;
	}
}

//////////////////////////////////////////////////////////////////////// 5.56
modded class M4a1Recoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.750;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.700;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.048;
		kickResetTime      = 2.250;
	}
}
modded class AUGRecoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.150, 1.150,  2.750,  3.985};
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.690;
		
		misalignIntensity  = {0.250, 0.250};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.750;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.015;
		kickResetTime      = 2.250;
	}
}
modded class Ak101Recoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.690;
		
		misalignIntensity  = {0.750, 0.300};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.700;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.048;
		kickResetTime      = 2.250;
	}
}
modded class M16A2Recoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.920;
		handsResetSpeed    = 0.800;
		
		misalignIntensity  = {0.750, 0.300};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.700;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.045;
		kickResetTime      = 2.250;
	}
}

//////////////////////////////////////////////////////////////////////// 7.62x39
modded class AkmRecoil {
	override void initRecoilParameters() {
		handsRanges        = {-1.550, 1.550,  2.750,  3.985};	
		handsAccumSpeed    = 0.975;
		handsResetSpeed    = 0.690;
		
		misalignIntensity  = {0.500, 0.300};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.650;
	
		mouseRanges        = { 0.175, 0.250,  1.250,  1.750};
		mouseTime          = 0.150;
	
		kick               = 0.050;
		kickResetTime      = 2.250;
	}
}
//////////////////////////////////////////////////////////////////////// 7.62x54
modded class SvdRecoil {
	override void initRecoilParameters() {
		handsRanges        = { -1.165, 3.285,  7.565,  8.795};	
		handsAccumSpeed    = 0.960;
		handsResetSpeed    = 0.750;

		misalignIntensity  = {0.250, 0.150};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.575};
		mouseTime          = 0.200;
	
		kick               = 0.055;
		kickResetTime      = 3.550;
	}
}
modded class MosinRecoil {
	override void initRecoilParameters() {
		handsRanges        = { -1.165, 3.285,  7.265,  8.295};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.700;

		misalignIntensity  = {0.250, 0.150};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.550,  2.275};
		mouseTime          = 0.200;
	
		kick               = 0.045;
		kickResetTime      = 3.125;
	}
}
//////////////////////////////////////////////////////////////////////// .308
modded class FALRecoil {
	override void initRecoilParameters() {
		handsRanges        = { -1.165, 2.285,  7.565,  8.795};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.750;

		misalignIntensity  = {0.250, 0.150};
		misalignAccumSpeed = 0.925;
		misalignResetSpeed = 0.850;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.575};
		mouseTime          = 0.200;
	
		kick               = 0.085;
		kickResetTime      = 3.150;
	}
}
//////////////////////////////////////////////////////////////////////// 12ga
modded class SiagaRecoil {
	override void initRecoilParameters() {
		handsRanges        = { -3.750, 3.750,  7.265,  8.295};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.675;
		
		misalignIntensity  = {0.050, 0.050};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.750,  2.775};
		mouseTime          = 0.075;
	
		kick               = 0.095;
		kickResetTime      = 3.550;
	}
}