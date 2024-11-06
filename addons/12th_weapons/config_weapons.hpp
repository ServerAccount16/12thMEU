// Configuration for custom weapons

class CfgWeapons
{
  class WeaponSlotsInfo; // Base class for weapon slots
  class MuzzleSlot;      // Base class for muzzle attachments
  class CowsSlot;
  class PointerSlot;     // Base class for pointer attachments
  class UnderBarrelSlot; // Base class for underbarrel attachments
  class FullAuto;        // Base class for full-auto fire mode
  class Launcher;        // Base class for launcher weapons
  class OPTRE_MA37K;
  class OPTRE_MA5C;
  class OPTRE_MA5CGL;
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
  class 19_UNSC_M6C;                //
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
  class Mode_SemiAuto;
  class Mode_Burst;
  class Mode_FullAuto;

  // M96 LAW Rewrite
  
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class twelfth_m96: Launcher_Base_F { // launcher when on back
      author = "DemonicOnPC; Waylen";
      scope = 2; 
      scopeArsenal = 2;
      baseWeapon = "twelfth_m96";
      //displayName = "[12th] M96 LAW - Mk VI"; // usual displayName
      displayName = "[12th] M96 LAW - Mk VI (B)"; // debug displayname 

      magazines[] = { "CBA_FakeLauncherMagazine" };

      model = "\DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
      picture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
      UiPicture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
      handAnim[] = {
          "OFP2_ManSkeleton",
          "\A3\Weapons_F_Exp\Launchers\RPG7\Data\Anim\RPG7V.rtm"
      };
      /*hiddenSelections[] = { "camo1", "camo2" };
      hiddenSelectionsTextures[] = {
          "\x\12thMEU\addons\12th_weapons\data\m96\tube_co.paa",
          "\x\12thMEU\addons\12th_weapons\data\m96\body_co.paa"
      };*/

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
          mass = 145; // launcher + rocket (100 + 45)
      };

      class ItemInfo {
          priority = 3;
      };
      descriptionShort = "A 66mm single-use RPG, effective against medium armor";
    };

    class twelfth_m96_READY: twelfth_m96{ // launcher when shouldered/held
        displayName = "[12th] M96 LAW - Mk VI (R)"; // debug displayName
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
            mass = 145; // launcher mass + rocket (100 + 45)
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
            mass = 100; // launcher mass (100)
        };
    };

  // Configuration for various rifles and attachments

  // **ANY COMMON_MACRO_NAME CAN BE FOUND IN macros.hpp**

  class twelfth_M6C : 19_UNSC_M6C
  {
    scope = 2;
    scopeArsenal = 2;
    author = "Weber";
    display = "[12th] M6C";
    baseWeapon = "twelfth_M6C";
    magazines[] = COMMON_M6_MAGAZINES;
  };

  class twelfth_M7_Test : 19_UNSC_M7
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7 TEST";
    baseWeapon = "twelfth_M7_Test";
    magazines[] = COMMON_SMG_MAGAZINES;
  };

  class twelfth_M7_Test_Folded : 19_UNSC_M7_Side
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7 Folded TEST";
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
  };

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

    // BR55 Rifle configuration with attachments
    // I want to come back through this later and update this so that these are maybe a macro since they're so similar

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
    };

    class twelfth_BR55_HB_gl : 19_UNSC_br55_HB_gl
    {
      author = "Weber";
      scope = 2;
      scopeArsenal = 2;
      canShootInWater = 1;
      displayName = "[12th] BR55HB UGL";
      muzzles[] = {"this", "twelfth_M301UGL"}; // Attachments
      class twelfth_m301ugl : GL_3GL_F
      {
        displayName = "M301 Grenade Launcher";
        descriptionShort = "M301 GL";
        magazines[] = COMMON_GL_MAGS; // Grenade launcher mags
      };
      baseWeapon = "twelfth_BR55_HB_gl";
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

    // M392 DMR configuration

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

    class twelfth_MMG33_T : Dmns_M33_T
    {
      author = "Jack"; // Thank you!
      displayName = "[12th] MMG33-T";
      baseWeapon = "twelfth_MMG33_T";
      magazines[] = {
          "twelfth_95x40_100rnd", "OPTRE_36Rnd_95x40_Mag",
          "OPTRE_36Rnd_95x40_Mag_Tracer", "twelfth_95x40_100rnd_T"};
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
      magazines[] = {
          "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
          "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow", "twelfth_762x51_200rnd",
          "twelfth_762x51_200rnd_T"};
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

    // Individual grenade launcher configuration

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