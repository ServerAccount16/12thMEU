/*
  ==============================================================================
  config_weapons.hpp

  This file defines our custom weapons, including rifles, SMGs, machine guns,
  launchers, etc. Each class typically inherits from a known parent mod/class
  like OPTRE_MA5C or 19_UNSC_M6C. Then we override properties such as
  displayName, magazines[], attachments, etc.

  Key Points:
    - `scope` and `scopeArsenal` control how the weapon appears in the editor/arsenal.
    - `baseWeapon` is the "root" weapon that is recognized by the Arsenal.
    - `magazines[]` sets which magazines the weapon can use.
    - `class WeaponSlotsInfo` controls attachable items (muzzle, optics, etc.)
    - The macros from config_macros.hpp (e.g. COMMON_SIGHTS) reduce repetition.
  ==============================================================================
*/
// Predeclaring references for weapon states, attachments, etc.
  class Mode_SemiAuto;
  class Mode_Burst;
  class Mode_FullAuto;
  class WeaponSlotsInfo; // Base class for weapon slots
  class MuzzleSlot;      // Base class for muzzle attachments
  class CowsSlot;
  class PointerSlot;     // Base class for pointer attachments
  class UnderBarrelSlot; // Base class for underbarrel attachments
  class FullAuto;        // Base class for full-auto fire mode

class CfgWeapons
{
  // Base classes from external mods or vanilla A3
  class Launcher;        // Base class for launcher weapons
  class OPTRE_MA37K;
  class OPTRE_MA5C;
  class OPTRE_MA5CGL;
  class OPTRE_MA5K;
  class OPTRE_BR45;
  class OPTRE_Commando;
  class OPTRE_M247;
  class OPTRE_M319;
  class OPTRE_M319N;
  class OPTRE_M301UGL; // Base class for our UGLs
  class Dmns_M33_T;
  class DMNS_M96_LAW;
  class GL_3GL_F;                   // Base class for grenade launchers
  class UGL_F;
  class InventoryOpticsItem_Base_F; // Base class for optics
  class 19_UNSC_M6C; 
  class 19_UNSC_M7; 
  class 19_UNSC_M7_Side;  
  class 19_UNSC_M90;  
  class 19_UNSC_MA5A;   
  class 19_UNSC_MA5A_gl;  
  class 19_UNSC_MA5B; 
  class 19_UNSC_br55; 
  class 19_UNSC_br55_gl;  
  class 19_UNSC_br55_HB;  
  class 19_UNSC_br55_HB_gl; 
  class 19_UNSC_M392; 
  class InventoryUnderItem_Base_F;  
  class dzn_MG_Tripod_Universal;  
  class dzn_MG_Tripod_Universal_Carry;  

  /*
    =============================================================================
    MG Tripod Definitions
    =============================================================================
  */
  class 12th_MG_Tripod_Carry: dzn_MG_Tripod_Universal_Carry{
    displayName = "[12th] MG Tripod";
    author = "10Dozen, Waylen";
    scope = 2;
    scopeArsenal = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={};
			mass=100;
		};
		dzn_MG_Tripod_AttachItems[]=
		{
			"12th_MG_Tripod"
		};
  };

  class 12th_MG_Tripod: dzn_MG_Tripod_Universal{
    displayName = "[12th] MG Tripod";
    author = "10Dozen, Waylen";
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo: InventoryUnderItem_Base_F
		{
			allowedSlots[]={};
			deployedPivot="bipod";
			hasBipod="true";
			mass=250;
			soundBipodDeploy[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
				0.70794576,
				1,
				20
			};
			soundBipodFold[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
				0.70794576,
				1,
				20
			};
			soundBipodDown[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
				0.70794576,
				1,
				20
			};
			soundBipodUp[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
				0.70794576,
				1,
				20
			};
		};
    inertia=2;
		dzn_MG_Tripod_CarryItem="12th_MG_Tripod_Carry";
		dzn_MG_Tripod_CarryItemUniversal="12th_MG_Tripod_Carry";
  };
  /*
    =============================================================================
    M96 LAW (Disposable Launcher) Definition
    =============================================================================
    We define multiple states: normal backpack state, ready-to-fire, and used.
  */
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class twelfth_m96: Launcher_Base_F { // launcher when on back
      author = "DemonicOnPC; Waylen";
      scope = 2; 
      scopeArsenal = 2;
      baseWeapon = "twelfth_m96";
      displayName = "[12th] M96 LAW - Mk VI"; // usual displayName
      //displayName = "[12th] M96 LAW - Mk VI (B)"; // debug displayname 

      magazines[] = { "CBA_FakeLauncherMagazine" }; // When stowed/backpacked, it does not carry a real rocket.

      model = "\DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
      picture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
      UiPicture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
      handAnim[] = {
          "OFP2_ManSkeleton",
          "\A3\Weapons_F_Exp\Launchers\RPG7\Data\Anim\RPG7V.rtm"
      };
      hiddenSelections[] = { "camo1", "camo2" };
      hiddenSelectionsTextures[] = {
          "\DMNS\Weapons\Launchers\Data\M96_Tube_co.paa",
          "\DMNS\Weapons\Launchers\Data\M96_body_co.paa"
      };

      reloadAction = "GestureReloadRPG7";
      recoil = "recoil_nlaw";
      maxZeroing = 500;
      shotPos = "muzzlePos2";
      shotEnd = "muzzleEnd2";
      modes[] = { "Single" };

      class Single: Mode_SemiAuto {
        sounds[] = { "StandardSound" };

        class BaseSoundModeType {};
        class StandardSound: BaseSoundModeType {
            begin1[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw", 1.99526, 1, 1800 };
            soundBegin[] = { "begin1", 1 };
        };

        reloadSpeed = 10;
        recoil = "recoil_single_nlaw";
        aiRateOfFire = 7;
        aiRateOfFireDistance = 500;
        minRange = 25;
        minRangeProbab = 0.8;
        midRange = 50;
        midRangeProbab = 0.8;
        maxRange = 790;
        maxRangeProbab = 0.8;
      };

      class GunParticles {
          class effect1 {
              positionName = "muzzleEnd2";
              directionName = "muzzlePos2";
              effectName = "RocketBackEffectsNLAWNT";
          };
      };

      drySound[] = { "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW", 0.177828, 1, 15 };
      changeFiremodeSound[] = { "A3\sounds_f\dummysound", 0.562341, 1, 20 };
      modelOptics = "-";

      class OpticsModes {
        class irons {
          opticsID = 1;
          useModelOptics = 0;
          opticsPPEffects[] = {};
          opticsZoomMin = 0.375;
          opticsZoomMax = 1.25;
          opticsZoomInit = 0.75;
          visionMode[] = {};
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          distanceZoomMin = 300;
          distanceZoomMax = 300;
          cameraDir = "look";
          discreteDistance[] = { 300 };
          discreteDistanceInitIndex = 0;
          discreteDistanceCameraPoint[] = { "eye_300" };
        };
      };

      canLock = 0;
      ballisticsComputer = 0;
      inertia = 1;
      aimTransitionSpeed = 0.5;
      dexterity = 1;

      class WeaponSlotsInfo: WeaponSlotsInfo {
          class CowsSlot: CowsSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            displayName = "$STR_A3_CowsSlot0";
            compatibleItems[] = COMMON_SIGHTS;
            iconPosition[] = { 0.5, 0.3 };
          };
          mass = 125; // launcher + rocket (100 + 45)
      };

      class ItemInfo {
          priority = 3;
      };
      descriptionShort = "A 66mm single-use RPG, effective against medium armor";
    };
  // Ready state: actual loaded launcher in hands
    class twelfth_m96_READY: twelfth_m96{
        displayName = "[12th] M96 LAW - Mk VI";
        //displayName = "[12th] M96 LAW - Mk VI (R)"; // debug displayName
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "twelfth_m96";
        magazines[] = { "twelfth_m96_magazine" };
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class EventHandlers {
          fired = "_this call CBA_fnc_firedDisposable";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 125; // launcher mass + rocket (100 + 45)
        };
    };

    class twelfth_m96_USED: twelfth_m96{ // fired launcher
        displayName = "[12th] M96 LAW - Mk VI (Used)";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "twelfth_m96_USED";
        
        magazines[] = { "CBA_FakeLauncherMagazine" };
        weaponPoolAvailable = 0;

        model = "DMNS\Weapons\Launchers\DMNS_M96_LAW_Used.p3d";

        class WeaponSlotsInfo: WeaponSlotsInfo{
            mass = 80; // launcher mass (100)
        };
    };
  /*
    =============================================================================
    Sidearms, SMGs, Shotguns, and other small arms
    =============================================================================
  */
  // **ANY COMMON_MACRO_NAME CAN BE FOUND IN macros.hpp**

  class twelfth_M6C : 19_UNSC_M6C
  {
    scope = 2;
    scopeArsenal = 2;
    author = "Weber";
    displayName = "[12th] M6C";
    baseWeapon = "twelfth_M6C";
    magazines[] = COMMON_M6_MAGAZINES;
  };

  class twelfth_M7_Test : 19_UNSC_M7
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7";
    baseWeapon = "twelfth_M7_Test";
    magazines[] = COMMON_SMG_MAGAZINES;
  };

  class twelfth_M7_Test_Folded : 19_UNSC_M7_Side
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7 Folded";
    baseWeapon = "twelfth_M7_Test_Folded";
    magazines[] = COMMON_SMG_MAGAZINES;
  };

  class twelfth_M90 : 19_UNSC_M90
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M90";
    baseWeapon = "twelfth_M90";
    magazines[] = {
      "12Rnd_8Gauge", "12Rnd_8Gauge_slug",
      "12Rnd_8Gauge_slug_tracer", "TCF_12Rnd_8Gauge_Beanbag"
    };
  };
  /*
    =============================================================================
    Assault Rifles
    =============================================================================
  */
   class twelfth_MA5C: OPTRE_MA5C {
     author = "Waylen";
     scope = 2;
     scopeArsenal = 2;
     displayName = "[12th] MA5C Assault Rifle";
     baseWeapon = "twelfth_MA5C";
     canShootInWater = 1;
     magazines[] = COMMON_MA5C_MAGAZINES;

     class WeaponSlotsInfo: WeaponSlotsInfo {
       class MuzzleSlot: MuzzleSlot {
           compatibleitems[] = { "OPTRE_MA5Suppressor" };
       };
       class CowsSlot: CowsSlot {};
       class PointerSlot: PointerSlot {
           compatibleitems[] = COMMON_SIGHTS;
       };
       class UnderBarrelSlot: UnderBarrelSlot {
           compatibleitems[] = {};
       };
     };
   };

  class twelfth_MA5CGL: OPTRE_MA5CGL {
    author = "Waylen";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] MA5CGL Assault Rifle";
    muzzles[] = { "this", "twelfth_M301UGL" };
    class twelfth_M301UGL: OPTRE_M301UGL {
        displayName = "M301 Grenade Launcher";
        descriptionShort = "M301 GL";
        magazines[] = COMMON_GL_MAGS;
    };
    baseWeapon = "twelfth_MA5CGL";
    magazines[] = COMMON_MA5C_MAGAZINES;        

    class WeaponSlotsInfo: WeaponSlotsInfo {
      class MuzzleSlot: MuzzleSlot {
          compatibleitems[] = { "OPTRE_MA5Suppressor" };
      };
      class CowsSlot: CowsSlot {};
      class PointerSlot: PointerSlot {
          compatibleitems[] = COMMON_SIGHTS;
      };
      class UnderBarrelSlot: UnderBarrelSlot {
          compatibleitems[] = {};
      };
    };
  };

  class twelfth_MA37K: OPTRE_MA37K {
    author = "Waylen";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    mass = 30;
    displayName = "[12th] MA37K Carbine";
    baseWeapon = "twelfth_MA37K";
    magazines[] = COMMON_MA5C_MAGAZINES;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      mass = 30;
      class MuzzleSlot: MuzzleSlot {
          compatibleitems[] = { "OPTRE_MA37KSuppressor" };
      };
      class CowsSlot: CowsSlot {};
      class PointerSlot: PointerSlot {
          compatibleitems[] = COMMON_SIGHTS;
      };
      class UnderBarrelSlot: UnderBarrelSlot {
          compatibleitems[] = {};
      };
    };
  };

    class twelfth_MA5K: OPTRE_MA5K {
    author = "Waylen";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    mass = 30;
    displayName = "[12th] MA5K Carbine";
    baseWeapon = "twelfth_MA5K";
    magazines[] = COMMON_MA5C_MAGAZINES;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      mass = 30;
      class MuzzleSlot: MuzzleSlot {
          compatibleitems[] = { "OPTRE_MA5Suppressor" };
      };
      class CowsSlot: CowsSlot {};
      class PointerSlot: PointerSlot {
          compatibleitems[] = COMMON_SIGHTS;
      };
      class UnderBarrelSlot: UnderBarrelSlot {
          compatibleitems[] = {};
      };
    };
  };

 // Training MA5A configuration

  class twelfth_MA5A_BB : 19_UNSC_MA5A
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] Training MA5A";
    baseWeapon = "twelfth_MA5A_BB";
    magazines[] = {"twelfth_20g_mag"}; // Training ammunition magazine
  };

    class twelfth_MA5C_BB : OPTRE_MA5C
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] Training MA5C";
    baseWeapon = "twelfth_MA5C_BB";
    magazines[] = {"twelfth_20g_mag"}; // Training ammunition magazine
  };

   class twelfth_MA5A : 19_UNSC_MA5A
   {
     author = "Weber";
     scope = 2;
     scopeArsenal = 2;
     canShootInWater = 1;
     displayName = "[12th] MA5A";
     baseWeapon = "twelfth_MA5A";
     magazines[] = COMMON_MA5C_MAGAZINES;
   };

   class twelfth_MA5A_gl : 19_UNSC_MA5A_gl
   {
     author = "Weber";
     scope = 2;
     scopeArsenal = 2;
     canShootInWater = 1;
     displayName = "[12th] MA5A W/ M301";
     baseWeapon = "twelfth_MA5A_gl";
     muzzles[] = {"this", "twelfth_M301UGL"}; // This is the portion of code that adds the UGL. Basically it has 2 muzzles to fire from
     class twelfth_M301UGL: UGL_F
     {
       displayName = "M301 Grenade Launcher";
       descriptionShort = "M301 GL";
       useModelOptics=1;
       useExternalOptic=0;
       magazines[] = COMMON_GL_MAGS; // Grenade launcher magazines
       magazineWell[]=
       {
           "UGL_40x36"
       };
       cameraDir="OP_look";
       discreteDistance[]={100,150,200,250,300,350};
       discreteDistanceCameraPoint[]=
       {
           "OP_eye2",
           "OP_eye3",
           "OP_eye4",
           "OP_eye5",
           "OP_eye6",
           "OP_eye8"
       };
       discreteDistanceInitIndex=1;
       reloadAction="GestureReloadMXUGL";
       reloadMagazineSound[]=
       {
           "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
           1,
           1,
           10
       };
     };
     magazines[] = COMMON_MA5C_MAGAZINES;
   };

  class twelfth_MA5B : 19_UNSC_MA5B
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] MA5B";
    baseWeapon = "twelfth_MA5B";
    magazines[] = {"OPTRE_60Rnd_762x51_Mag"};
  };
  /*
    =============================================================================
    BR and DMR
    =============================================================================
  */

    class twelfth_br55 : 19_UNSC_br55
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName = "[12th] BR55";
      baseWeapon = "twelfth_BR55";
      magazines[] = COMMON_BR_MAGAZINES;
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
        };
        class CowsSlot : CowsSlot
        {
          compatibleitems[] = COMMON_BR_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
        };
      };
    };

    // Additional BR55 variants with grenade launchers

    class twelfth_br55_gl : 19_UNSC_br55_gl
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName = "[12th] BR55 UGL";
      muzzles[] = {"this", "twelfth_M301UGL"}; // Attachments
      class twelfth_m301ugl : GL_3GL_F
      {
        displayName = "M301 Grenade Launcher";
        descriptionShort = "M301 GL";
        magazines[] = COMMON_GL_MAGS; // Grenade launcher mags
      };
      baseWeapon = "twelfth_BR55_gl";
      magazines[] = COMMON_BR_MAGAZINES;
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
        };
        class CowsSlot : CowsSlot
        {
          compatibleitems[] = COMMON_BR_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
        };
      };
    };

    class twelfth_BR55_HB : 19_UNSC_br55_HB
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName = "[12th] BR55HB";
      baseWeapon = "twelfth_BR55_HB";
      magazines[] = COMMON_BR_MAGAZINES;
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
        };
        class CowsSlot : CowsSlot
        {
          compatibleitems[] = COMMON_BR_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
        };
      };
      class Single: Mode_SemiAuto
	    {
		    sounds[]=
		    {
		    	"StandardSound",
		    	"SilencedSound"
		    };
		    class BaseSoundModeType
		    {
		    	weaponSoundEffect="DefaultRifle";
		    	closure1[]={};
		    	closure2[]={};
		    	soundClosure[]=
		    	{
		    		"closure1",
		    		0.5,
		    		"closure2",
		    		0.5
		    	};
		    };
		    class StandardSound: BaseSoundModeType
		    {
		    	begin1[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    	begin2[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    	begin3[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    begin4[]=
		    {
		    	"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
		    	1.2,
		    	1,
		    	2000
		    };
		    	soundBegin[]=
		    	{
		    		"begin1",
		    		0.1,
		    		"begin2",
		    		0.1,
		    		"begin3",
		    		0.1,
		    		"begin4",
		    		0.1
		    	};
		    	class SoundTails
		    	{
		    		class TailInterior
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
		    				2.2387211,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="interior";
		    		};
		    		class TailTrees
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*trees";
		    		};
		    		class TailForest
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*forest";
		    		};
		    		class TailMeadows
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		    		};
		    		class TailHouses
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*houses";
		    		};
		    	};
		    };
		    class SilencedSound: BaseSoundModeType
		    {
		    	begin1[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	begin2[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	begin3[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	soundBegin[]=
		    	{
		    		"begin1",
		    		0.33000001,
		    		"begin2",
		    		0.33000001,
		    		"begin1",
		    		0.34
		    	};
		    	class SoundTails
		    	{
		    		class TailInterior
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="interior";
		    		};
		    		class TailTrees
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*trees";
		    		};
		    		class TailForest
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*forest";
		    		};
		    		class TailMeadows
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		    		};
		    		class TailHouses
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*houses";
		    		};
		    	};
		    };
		    reloadTime=0.1;
		    recoil="recoil_single_mx";
		    recoilProne="recoil_single_prone_mx";
		    dispersion=0.00005;
		    minRange=0;
		    minRangeProbab=0.80000001;
		    midRange=500;
		    midRangeProbab=0.89999998;
		    maxRange=1000;
		    maxRangeProbab=0.60000002;
		    aiRateOfFire=2;
		    aiRateOfFireDistance=20;
	    };
	    class Burst: Mode_Burst
	    {
		    sounds[]=
		    {
		    	"StandardSound",
		    	"SilencedSound"
		    };
		    class BaseSoundModeType
		    {
		    	weaponSoundEffect="DefaultRifle";
		    	closure1[]={};
		    	closure2[]={};
		    	soundClosure[]=
		    	{
		    		"closure1",
		    		0.5,
		    		"closure2",
		    		0.5
		    	};
		    };
		    class StandardSound: BaseSoundModeType
		    {
		    	begin1[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    	begin2[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    	begin3[]=
		    	{
		    		"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
		    		1.2,
		    		1,
		    		2000
		    	};
		    begin4[]=
		    {
		    	"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
		    	1.2,
		    	1,
		    	2000
		    };
		    	soundBegin[]=
		    	{
		    		"begin1",
		    		0.1,
		    		"begin2",
		    		0.1,
		    		"begin3",
		    		0.1,
		    		"begin4",
		    		0.1
		    	};
		    	class SoundTails
		    	{
		    		class TailInterior
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
		    				2.2387211,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="interior";
		    		};
		    		class TailTrees
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*trees";
		    		};
		    		class TailForest
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*forest";
		    		};
		    		class TailMeadows
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		    		};
		    		class TailHouses
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
		    				1,
		    				1,
		    				1800
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*houses";
		    		};
		    	};
		    };
		    class SilencedSound: BaseSoundModeType
		    {
		    	begin1[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	begin2[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	begin3[]=
		    	{
		    		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
		    		0.79432821,
		    		1,
		    		400
		    	};
		    	soundBegin[]=
		    	{
		    		"begin1",
		    		0.33000001,
		    		"begin2",
		    		0.33000001,
		    		"begin1",
		    		0.34
		    	};
		    	class SoundTails
		    	{
		    		class TailInterior
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="interior";
		    		};
		    		class TailTrees
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*trees";
		    		};
		    		class TailForest
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*forest";
		    		};
		    		class TailMeadows
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		    		};
		    		class TailHouses
		    		{
		    			sound[]=
		    			{
		    				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
		    				1,
		    				1,
		    				400
		    			};
		    			frequency=1;
		    			volume="(1-interior/1.4)*houses";
		    		};
		    	};
		    };
		    soundBurst=0;
		    burst=3;
		    reloadTime=0.08;
		    recoil="recoil_auto_mx";
		    recoilProne="recoil_auto_prone_mx";
		    dispersion=0.00005;
		    minRange=1;
		    minRangeProbab=0.80000001;
		    midRange=500;
		    midRangeProbab=0.89999998;
		    maxRange=1000;
		    maxRangeProbab=0.60000002;
		    aiRateOfFire=1;
		    aiRateOfFireDistance=10;
	    };
    };

    // commented out cus marksmen DO NOT need a GL lmfao
    //class twelfth_BR55_HB_gl : 19_UNSC_br55_HB_gl
    //{
    //  author = "Weber";
    //  scope = 2;
    //  scopeArsenal = 2;
    //  canShootInWater = 1;
    //  displayName = "[12th] BR55HB UGL";
    //  muzzles[] = {"this", "twelfth_M301UGL"}; // Attachments
    //  class twelfth_m301ugl : GL_3GL_F
    //  {
    //    displayName = "M301 Grenade Launcher";
    //    descriptionShort = "M301 GL";
    //    magazines[] = COMMON_GL_MAGS; // Grenade launcher mags
    //  };
    //  baseWeapon = "twelfth_BR55_HB_gl";
    //  magazines[] = COMMON_BR_MAGAZINES;
    //  class WeaponSlotsInfo : WeaponSlotsInfo
    //  {
    //    class MuzzleSlot : MuzzleSlot
    //    {
    //    };
    //    class CowsSlot : CowsSlot
    //    {
    //      compatibleitems[] = COMMON_BR_SIGHTS;
    //    };
    //    class PointerSlot : PointerSlot
    //    {
    //    };
    //    class UnderBarrelSlot : UnderBarrelSlot
    //    {
    //    };
    //  };
    //};
  /*
    =============================================================================
    Machine Guns
    =============================================================================
  */
    class twelfth_M392 : 19_UNSC_M392
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName = "[12th] M392 DMR";
      baseWeapon = "twelfth_M392";
      HUD_TotalPosibleBullet = 32; // Total possible bullets displayed in HUD
      magazines[] = COMMON_MA5C_MAGAZINES;
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
          compatibleitems[] = {
              "optre_MA5Suppressor", "19_UNSC_BR55_Suppressor",
              "19_UNSC_BR55L_Suppressor"};
        };
        class CowsSlot : CowsSlot
        {
          compatibleItems[] = COMMON_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
          compatibleitems[] = COMMON_RAIL_ATTACHMENTS;
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
          compatibleitems[] = COMMON_MEDIUM_BIPOD;
        };
      };
    };

    // VK78 Commando configuration

    class twelfth_Commando : OPTRE_Commando
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      displayName = "[12th] VK78 Commando";
      baseWeapon = "twelfth_Commando";
      hiddenSelections[] = {"camo1", "camo2"};
      /*hiddenSelectionsTextures[] = {
          "\x\12thMEU\addons\12th_weapons\data\Commando\Commando_co.paa",
          "\x\12thMEU\addons\12th_weapons\data\Commando\Commando2_co.paa"};*/ // Commented out until texture is made.
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
          compatibleitems[] = {"OPTRE_M7_silencer"};
        };
        class CowsSlot : CowsSlot
        {
          compatibleItems[] = COMMON_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
          compatibleitems[] = COMMON_RAIL_ATTACHMENTS;
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
          compatibleitems[] = COMMON_LIGHT_BIPOD;
        };
      };
    };

    // M33-T Machine Gun configuration

    class twelfth_M33_T: Dmns_M33_T {
        author = "Jack, Waylen";
        displayName = "[12th] M33-T";
        baseWeapon = "twelfth_M33_T";
        magazines[] = {
          "twelfth_100Rnd_762x51_Box", "twelfth_100Rnd_762x51_Box_T",
          "twelfth_200Rnd_762x51_Box", "twelfth_200Rnd_762x51_Box_T",
          "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
          "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"
          };
        modes[] = { "FullAuto", "FullAutoFast" };
	      distanceZoomMin=100;
	      distanceZoomMax=700;
        maxZeroing=700;

        // Tripod compat
        DEPLOYED_GESTURE_GPMG;
        RELOAD_EH;

        ace_overheating_mrbs = 5500;
        ace_overheating_slowdownFactor = 1;
        ace_overheating_allowSwapBarrel = 1;
        ace_overheating_dispersion = 0.25;
        ace_overheating_jamTypesAllowed[] = {"Feed", "Fire", "Eject", "Extract"};
        ace_overheating_closedbolt = 1;
        ace_overheating_barrelMass = 3.5;        

        class FullAuto: FullAuto {
            dispersion = 0.00116;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            reloadTime = 0.15;

            class BaseSoundModType {};
            class standardsound: BaseSoundModType {
                soundsetshot[] = {
                    "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
                    "MMG01_InteriorTail_SoundSet"
                };
            };
        };
      class FullAutoFast : FullAuto
      {
        reloadTime = 0.08; // 800 RPM
        textureType = "fastAuto";
        class BaseSoundModType
        {
        };
        class standardsound : BaseSoundModType
        {
          soundsetshot[] = {
              "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
              "MMG01_InteriorTail_SoundSet"
          };
        };
      };

        class WeaponSlotsInfo: WeaponSlotsInfo {
          class MuzzleSlot : MuzzleSlot
          {
            compatibleitems[] = {"OPTRE_MA5Suppressor"};
          };
          class CowsSlot : CowsSlot
          {
            compatibleItems[] = COMMON_SIGHTS;
          };
          class PointerSlot : PointerSlot
          {
            compatibleitems[] = COMMON_RAIL_ATTACHMENTS;
          };
          class UnderBarrelSlot : UnderBarrelSlot
          {
            compatibleitems[] = COMMON_HEAVY_BIPOD;
          };
        };
    };
        
    class twelfth_MMG33_T : Dmns_M33_T
    {
      author = "Jack"; // Thank you!
      scope = 2;
      scopeArsenal = 2;
      displayName = "[12th] MMG33-T";
      baseWeapon = "twelfth_MMG33_T";
      magazines[] = {
          "twelfth_100Rnd_95x40_Box", "twelfth_100Rnd_95x40_Box_T",
          "OPTRE_36Rnd_95x40_Mag", "OPTRE_36Rnd_95x40_Mag_Tracer"
          };
      modes[] = {"FullAuto", "FullAutoFast"};
	    distanceZoomMin=100;
	    distanceZoomMax=700;
      maxZeroing=700;

      ace_overheating_mrbs = 5000;
      ace_overheating_slowdownFactor = 1;
      ace_overheating_allowSwapBarrel = 1;
      ace_overheating_dispersion = 0.25;
      ace_overheating_jamTypesAllowed[] = {"Feed", "Fire", "Eject", "Extract"};
      ace_overheating_closedbolt = 1;
      ace_overheating_barrelMass = 3.5;


      // Tripod compat
      DEPLOYED_GESTURE_GPMG;
      RELOAD_EH;

      class FullAuto : FullAuto
      {
        dispersion = 0.00116;
        minRange = 0;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.1;
        aiRateOfFire = 1e-06;
        reloadTime = 0.15;
        class BaseSoundModType
        {
        };
        class standardsound : BaseSoundModType
        {
          soundsetshot[] = {
              "MMG02_Shot_SoundSet", "MMG02_Tail_SoundSet",
              "MMG02_InteriorTail_SoundSet"};
        };
      };
      class FullAutoFast : FullAuto
      {
        reloadTime = 0.11;
        textureType = "fastAuto";
        class BaseSoundModType
        {
        };
        class standardsound : BaseSoundModType
        {
          soundsetshot[] = {
              "MMG02_Shot_SoundSet", "MMG02_Tail_SoundSet",
              "MMG02_InteriorTail_SoundSet"};
        };
      };
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
          compatibleitems[] = {"OPTRE_MA5Suppressor"};
        };
        class CowsSlot : CowsSlot
        {
          compatibleItems[] = COMMON_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
          compatibleitems[] = COMMON_RAIL_ATTACHMENTS;
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
          compatibleitems[] = COMMON_HEAVY_BIPOD;
        };
      };
    };

    // M247 GPMG configuration

    class twelfth_M247 : OPTRE_M247
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      displayName = "[12th] M247 GPMG";
      baseWeapon = "twelfth_M247";
      DEPLOYED_GESTURE_GPMG;
      RELOAD_EH;
      magazines[] = {
          "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
          "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow", 
          "twelfth_100Rnd_762x51_Box", "twelfth_100Rnd_762x51_Box_T",
          "twelfth_200Rnd_762x51_Box", "twelfth_200Rnd_762x51_Box_T",
          "twelfth_400Rnd_762x51_Box", "twelfth_400Rnd_762x51_Box_T"
          };
      modes[] = {"FullAuto", "FullAutoFast"};
      class FullAuto : FullAuto
      {
        dispersion = 0.00116;
        minRange = 0;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.1;
        aiRateOfFire = 1e-06;
        reloadTime = 0.09;
      };
      class FullAutoFast : FullAuto
      {
        reloadTime = 0.07;
        textureType = "fastAuto";
      };
      class WeaponSlotsInfo : WeaponSlotsInfo
      {
        class MuzzleSlot : MuzzleSlot
        {
          compatibleitems[] = {"OPTRE_MA5Suppressor"};
        };
        class CowsSlot : CowsSlot
        {
          compatibleItems[] = COMMON_SIGHTS;
        };
        class PointerSlot : PointerSlot
        {
          compatibleitems[] = COMMON_RAIL_ATTACHMENTS;
        };
        class UnderBarrelSlot : UnderBarrelSlot
        {
          compatibleitems[] = COMMON_HEAVY_BIPOD;
        };
      };
    };
  /*
    =============================================================================
    Grenade Launchers
    =============================================================================
  */

    class twelfth_M319 : OPTRE_M319
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      displayName = "[12th] M319 Individual Grenade Launcher";
      baseWeapon = "twelfth_M319";
      magazines[] = COMMON_GL_MAGS;
    };

    class twelfth_M319N : OPTRE_M319N
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      displayName = "[12th] M319N Individual Grenade Launcher";
      baseWeapon = "twelfth_M319N";
      magazines[] = COMMON_GL_MAGS;
    };
  };