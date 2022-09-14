class CfgPatches {
	class sGunplay_FLAVA {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"TF_AK_Zenit_PT1Bttstck",
			"TF_AN94_Bttstck",
			"TF_Attachments",
			"TF_MK20_Buttstock",
			"TF_Grips",
			"TF_ADD_SCAR_Handguard",
			"TF_AKSu_Handguards",
			"TF_AKS74U_CAAHndgrd_RIS",
			"TF_AKSu_Handguards",
			"TF_AK_Hndgrd",
			"TF_Handguard_CMMG_15",
			"TF_Handguard_CMMG_9",
			"TF_Handguard_M4",
			"TF_MREX_Handguard",
			"TF_STD_SCAR_Handguard",
			"TF_OTs14_Groza_Muzzle",
			"TF_PistolGrips",
			"TF_AK_Bttstck",
			"TF_M4_B5PrecisionBttstck",
			"TF_M4_FABDGLCoreBttstck",
			"TF_M4_MagpulPRSGen3Bttstck",
			"TF_PKM_CNCC39Bttstck",
			"TF_PKM_ZenitPT2Bttstck",
			"TF_PKM_WoodBttstck",
			"TF_PKP_PlasticBttstck",
			"TF_AR10_KACHndgrd_RIS",
			"TF_AR10_LancerHndgrd",
			"TF_AR10_NoveskeHndgrd",
			"TF_AR10_URXHndgrd",
			"TF_Handguard_M16",
			"TF_PKM_Handguard",
			"TF_PKM_6ch43Compensator",
			"TF_PKM_6ch63Compensator",
			"TF_PKM_6ch76Compensator",
			"TF_PKM_6p20_Compensator",
			"TF_PKM_DTK1_Compensator",
			"TF_PKM_SAICompensator",
			"TF_PistolGrips_B",
			"TF_Elcan_SpecterDR",
			"TF_EOTech_XPS",
			"TF_HAMR",
			"TF_OTs_14_Groza_Optic",
			"TF_AK_MVRIBttstck"
		};
	};
};

class CfgMods {
	class sGunplay_FLAVA {
		dir = "simonvic/sGunplay_FLAVA";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_FLAVA";
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
	class TF_OTs_14_GrozaOptic : ItemOptics {
		isFullscreen = 1;
		showEnterMisalignment = 1;
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.314, 0.01};
			PPLensProperties[] = {0.314, 0.0, 0.0, 0.2};
		};
	};
	class TF_HAMROptic : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.4, 0.01};
			PPLensProperties[] = {0.314, 0.0, 0.0, 0.2};
		};
	};
	class TF_ElcanSpecterDROptic_Base : ItemOptics {
		class OpticsInfo {
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			discretefov[] = {}; //sorry no double zoom :(
			PPMaskProperties[] = {0.0, 0.0, 0.5, 0.01};
			PPLensProperties[] = {0.314, 0.0, 0.0, 0.2};
		};
	};
	class TF_ElcanSpecterDR_6xOptic_Base : ItemOptics {
		class OpticsInfo {
			opticsZoomMin="0.3926/6";
			opticsZoomMax="0.3926/6";
			opticsZoomInit="0.3926/6";
			discretefov[] = {}; //sorry no double zoom :(
			PPMaskProperties[] = {0.0, 0.0, 0.3, 0.01};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class TF_EOTechXPSOptic_Base;
	class TF_EOTechXPSOpticUp_Black : TF_EOTechXPSOptic_Base {
		class OpticsInfo {
			PPMaskProperties[] = {-0.005, 0.0, 0.7, 0.02};
			PPLensProperties[] = {0.4, 0.005, 0.0, 0.2};
		};
	};
	

	class ItemSuppressor;
	class TF_PKM_SAICompensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_ZenitDTK1Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_6p20Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch76Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch63Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKM_6ch43Compensator : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};

	class Inventory_Base;
	class TF_AR_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_PKP_CNCC46Hndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_PKM_ZenitB50Hndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_M16_KACHndgrd_RIS_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_URXHndgrd_MLOCK : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_NoveskeHndgrd_Short_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_NoveskeHndgrd_Long_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_LancerHndgrd_MLOCK : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_KACHndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AK_ZenitB10MB19Hndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AK_MagpulZhukovHndgrdU_MLOCK : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AK_MagpulMOEHndgrd_MLOCK : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_ZenitRK1B25U_RIS_Grip : Inventory_Base {
		s_recoilControlHandsX = 0.15;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.25;
	};
	class TF_PKP_PlasticBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_PKM_WoodBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_PKM_ZenitPT2Bttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_PKM_CNCC39Bttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4_B5PrecisionBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4_MagpulPRSGen3Bttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M16_Bttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4_FABDGLCoreBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_AK_MagpulZhukovBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_AK_MVRIBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_AK_Zenit_PT1Bttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_AN94_PlasticBttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_MAR10_Bttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4CraneBttstck : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4_ADARBttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_M4_CMMG_RIPBttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_SCAR_Mk20Bttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_SCAR_StndBttstck_Base : Inventory_Base {
		s_recoilControlHandsX = 0.45;
		s_recoilControlHandsY = 0.45;
		s_recoilControlMisalignmentX = 0.20;
		s_recoilControlMisalignmentY = 0.25;
		s_recoilControlKick = 0.75;
	};
	class TF_SAW_RIS_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AFG_RIS_Grip_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class TF_AFG_MLOCK_Grip_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.35;
		s_recoilControlMisalignmentY = 0.30;
	};
	class TF_BCM_MLOCK_Grip_Base : Inventory_Base {
		s_recoilControlHandsX = 0.15;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.25;
	};
	class TF_RVG_RIS_Grip_Base : Inventory_Base {
		s_recoilControlHandsX = 0.15;
		s_recoilControlHandsY = 0.15;
		s_recoilControlMisalignmentX = 0.30;
		s_recoilControlMisalignmentY = 0.25;
	};
	class TF_SCAR_ADDHndgrd_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AKS74U_WoodHndgrd : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AKS74U_CAAHndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AKS74U_ZenitB11PlasticHndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AK_ZenitB30B31Hndgrd_RIS : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_CMMG15Hndgrd_MLOCK_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR10_CMMG9Hndgrd_MLOCK_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_ADAR_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_DD12_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_DD9_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_DD_FSP_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_SMR13_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_Handguard_M4_SMR9_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_M4_Hndgrd_RIS_FDE_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_SCAR_MREXHndgrd_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_SCAR_StndHndgrd_Base : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_OTs_14_Groza_Barrel_Grip : Inventory_Base {
		s_recoilControlHandsX = 0.20;
		s_recoilControlHandsY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
	class TF_AR_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class TF_AK_Grip_Base : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
};