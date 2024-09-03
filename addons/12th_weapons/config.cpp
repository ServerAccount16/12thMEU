// Inside of this cpp consists of weapon and ammo configs

// Begin HPP includes

#include "macros.hpp"

// Begin CfgPatches

class CfgPatches
{
  class 12th_weapons
  {
    units[] = {};
    weapons[] = {};
    ammo[] = {};
    magazines[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {};
  };
};

// Begin CfgAmmo

class CfgAmmo
{
  // Begin Defining Base Class
  // Training Ammo Base Class
  class BulletBase;
  // Rifle Ammo Base Class
  class OPTRE_B_95x40_Ball;
  class OPTRE_B_5x23_Caseless;
  // Begin 40mm Ammo Base Class
  class M319_HEAT;
  // Begin Rockets Base Class
  class M_NLAW_AT_F;
  // Begin Training Ammuntion
  class 12th_20g_bb : BulletBase
  {
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
    cartridge = "";
    hit = 0;
    indirectHit = 0;
    indirectHitRange = 0;
    cost = 100;
    typicalSpeed = 380;
    airFriction = -0.0016;
    caliber = 1.2;
    deflecting = -1;
    airLock = 1;
    tracerScale = 0.75;
    tracerBeginTime = 0.01;
    tracerEndTime = 20;
    nvgOnly = 0;
    audibleFire = 30;
    aiAmmoUsageFlags = 64;
    dangerRadiusBulletClose = 4;
    dangerRadiusHit = 8;
    suppressionRadiusBulletClose = 2;
    suppressionRadiusHit = 4;
  };
  // Begin Rifle Ammo

  // Begin Rifle Underwater Ammo
  class 12th_95x40_UW : OPTRE_B_95x40_Ball
  {
    typicalSpeed = 700;
    waterFriction = -0.00096;
    timeToLive = 0.12;
    effectFly = "AmmoUnderwater";
  };
  class 12th_5x23mm_UW : OPTRE_B_5x23_Caseless
  {
    typicalSpeed = 700;
    waterFriction = -0.00095999998;
    timeToLive = 0.12;
    effectFly = "AmmoUnderwater";
  };
  // Begin 40mm Ammo
  class 12th_40mmG_HEAT : M319_HEAT
  {
    ace_frag_metal = 2000;
    indirectHitRange = 0.1;
    hit = 470;
  };
  // Begin Rockets
  class 12th_m96_rocket_heat : M_NLAW_AT_F
  {
    model = "DMNS\Weapons\Launchers\M96_rocket.p3d";
    hit = 600;
    indirectHit = 20;
    indirectHitRange = 2;
    explosive = 0.8;
    cost = 500;
    airFriction = 0;
    sideairFriction = 0;
    coefGravity = 0;
    maxSpeed = 450;
    typicalSpeed = 250;
    initTime = 0.2;
    thrustTime = 0.8;
    thrust = 100;
    fuseDistance = 20;
    simulationStep = 0.02;
    timeToLive = 30;
    effectsMissile = "missile3";
    whistleDist = 20;
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    submunitionAmmo = "ammo_Penetrator_Titan_AT";
    submunitionDirectionType = "SubmunitionModelDirection";
    submunitionInitSpeed = 1000;
    submunitionParentSpeedCoef = 0;
    submunitionInitialOffset[] = {0, 0, -0.2};
    triggerOnImpact = 1;
    deleteParentWhenTriggered = 0;
    flightProfiles[] = {"Direct"};
    class Direct
    {
    };
  };
};

// Begin CfgMagazines

class CfgMagazines
{
  // Begin Defining Base Classes
  // Begin Vanilla Magazine Base Classes
  class RPG32_HE_F;
  // Begin OPTRE Rifle Magazine Base Classes
  class OPTRE_32Rnd_762x51_Mag;
  class OPTRE_36Rnd_95x40_Mag;
  class OPTRE_400Rnd_762x51_Box_Tracer;
  class OPTRE_100Rnd_762x51_Box;
  class OPTRE_60Rnd_5x23mm_Mag;
  class OPTRE_60Rnd_762x51_Mag;
  // Begin OPTRE 40mm Magazine Base Classes
  class M319_HEAT_Grenade_Shell;

  // Begin Training Rifle Magazines
  class 12th_20g_mag : OPTRE_32Rnd_762x51_Mag
  {
    displayName = "32Rnd .20g BB Cartridge";
    displaynameshort = ".20g BB";
    count = 32;
    initspeed = 1500;
    ammo = "12th_20g_bb";
  };
  // Begin Rifle Magazines
  class 12th_95x40_100rnd : OPTRE_36Rnd_95x40_Mag
  {
    scope = 2;
    author = "Weber";
    displayName = "100rnd 9.5x40mm Box Magazine";
    ammo = "OPTRE_B_95x40_Ball";
    count = 100;
    mass = 40;
    tracersEvery = 0;
    lastRoundsTracer = 6;
  };

  class 12th_762x51_200rnd : OPTRE_100Rnd_762x51_Box
  {
    author = "Weber";
    displayName = "200rnd 7.62x51mm Box Magazine";
    count = 200;
    mass = 40;
  };

  class 12th_762x51_200rnd_T : OPTRE_400Rnd_762x51_Box_Tracer
  {
    author = "Weber";
    displayName = "200rnd 7.62x51mm Box Magazine (Tracer)";
    count = 200;
    mass = 40;
  };

  class 12th_br_36Rnd_UW : OPTRE_36Rnd_95x40_Mag
  {
    author = "Weber";

    displayName = "36Rnd 9.5x40mm Magazine (Underwater)";
    count = 36;
    initspeed = 700;
    descriptionShort = "36 Round Magazine 9.5x40mm";
    mass = 10;
    ammo = "12th_95x40_UW";
  };

  class 12th_m7_60rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "60Rnd 5x23mm Magazine (Underwater)";
    count = 60;
    initspeed = 700;
    descriptionShort = "60 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "12th_5x23mm_UW";
  };
  class 12th_m7_48rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "48Rnd 5x23mm Magazine (Underwater)";
    count = 48;
    initspeed = 700;
    descriptionShort = "48 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "12th_5x23mm_UW";
  };
  // Begin 40mm Magazines
  class 12th_40mm_heat : M319_HEAT_Grenade_Shell
  {
    scope = 2;
    displayName = "[12th] 40mm HEAT";
    displaynameshort = "40mm HEAT";
    ammo = "12th_40mmG_HEAT";
    author = "Waylen";
    mass = 8;
  };
};
// Begin CBA Disposable

class CBA_DisposableLaunchers
{
  ACE_12th_M96_LAW_Ready[] = {"12th_M96_LAW", "12th_M96_LAW_Used"};
};
// Begin CfgWeapons

class CfgWeapons
{
  // Begin Defining Base Class
  // Begin OPTRE Rifle Base Class
  class OPTRE_M247;
  class OPTRE_MA37K;
  class OPTRE_BR45;
  class OPTRE_M6B;
  class OPTRE_M45;
  class OPTRE_Commando;
  class OPTRE_M319;
  class OPTRE_M319N;
  // Begom Foundry Rifle Base Class
  class 19_UNSC_br55;
  class 19_UNSC_br55_gl;
  class 19_UNSC_br55_HB;
  class 19_UNSC_br55_HB_gl;
  class 19_UNSC_M6C;
  class 19_UNSC_M7;
  class 19_UNSC_M90;
  class 19_UNSC_MA5A;
  class 19_UNSC_MA5A_gl;
  class 19_UNSC_MA5B;
  class 19_UNSC_M7_Side;
  class 19_UNSC_M392;
  class 19_UNSC_SRS99AM;
  class Dmns_M33_T;
  // Begin Launcher Base Class
  class DMNS_M96_LAW;
  // Begin Weapon Variable Base Class
  class WeaponSlotsInfo;
  class MuzzleSlot;
  class PointerSlot;
  class UnderBarrelSlot;
  class FullAuto;
  class Launcher;
  class InventoryOpticsItem_Base_F;
  // Start Attachment Base Class
  class OPTRE_M301UGL;
  class GL_3GL_F;
  class OPTRE_SRS99C_Scope;

  // Begin Attachments
  /*class 12th_SRS99_Scope: OPTRE_SRS99C_Scope {
    scope = 2;
    displayName = "[12th] Oracle N-variant SRS99AM Scope with Rangefinding Module";
    descriptionShort = "Oracle N-variant SRS99AM Sniper Rifle 5-10x56 Scope";
    picture = "\UNSC_F_Weapons\weapons\UI\srs99_UI.paa";
    model = "\UNSC_F_Weapons\weapons\srs99_data\attachments\SRS99AM_scope_proxy.p3d";
    weaponInfoType = "RscOptics_Rangefinder";
    class ItemInfo: InventoryOpticsItem_Base_F {
      mass = 1;
      opticType = 1;
      optics = 1;
      modelOptics = "\UNSC_F_Weapons\weapons\srs99_data\attachments\SRS99AM_scope_proxy.p3d";
      class OpticsModes {
        class srs_scope_top {
          opticsID = 1;
          useModelOptics = 0;
          opticsPPEffects[] = { "" };
          opticsFlare = false;
          opticsDisablePeripherialVision = 0;
          opticsZoomMin = 0.375;
          opticsZoomMax = 1.25;
          opticsZoomInit = 0.75;
          memoryPointCamera = "eye";
          visionMode[] = { "Normal", "NVG" };
          discreteDistance[] = { 100 };
          discreteDistanceInitIndex = 1;
          distanceZoomMin = 100;
          distanceZoomMax = 100;
          distanceZoominit = 100;
          cameraDir = "";
        };
        class srs_zoom {
          opticsID = 2;
          opticsFlare = false;
          opticsDisablePeripherialVision = 0;
          useModelOptics = 1;
          opticsPPEffects[] = {
              "OpticsCHAbera1", "OpticsBlur1"
          };
          opticsZoomMin = 0.0099999998;
          opticsZoomMax = 0.25;
          opticsZoomInit = 0.25;
          discretefov[] = { 0.25, 0.050000001, 0.025, 0.0099999998 };
          discreteinitIndex = 0;
          discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000 };
          discreteDistanceInitIndex = 1;
          distanceZoomMin = 100;
          distanceZoomMax = 2000;
          memoryPointCamera = "opticView";
          modelOptics[] = {
              "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
          };
          visionMode[] = {
              "Normal", "NVG", "TI"
          };
          thermalMode[] = { 0 };
        };
      };
    };
  };*/

  // Begin M96

  class 12th_M96_LAW : DMNS_M96_LAW
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    baseWeapon = "12th_M96_LAW";
    displayName = "M96 LAW Disposable Launcher";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_SIGHTS;
      };
    };
  };
  class 12th_M96_LAW_Ready : 12th_M96_LAW
  {
    author = "Weber";
    scope = 1;
    scopeArsenal = 1;
    baseWeapon = "12th_M96_LAW_Ready";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_SIGHTS;
      };
    };
  };
  class 12th_M96_LAW_Used : 12th_M96_LAW
  {
    author = "Weber";
    scope = 1;
    scopeArsenal = 1;
    baseWeapon = "12th_M96_LAW_Used";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_SIGHTS;
      };
    };
  };

  // Begin Foundry Rifles

  class 12th_M6C : 19_UNSC_M6C
  {
    scope = 2;
    scopeArsenal = 2;
    author = "Weber";
    display = "[12th] M6C";
    baseWeapon = "12th_M6C";
    magazines[] = COMMON_M6_MAGAZINES;
  };

  class 12th_M7_Test : 19_UNSC_M7
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7 TEST";
    baseWeapon = "12th_M7_Test";
    magazines[] = COMMON_SMG_MAGAZINES;
  };

  class 12th_M7_Test_Folded : 19_UNSC_M7_Side
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M7 Folded TEST";
    baseWeapon = "12th_M7_Test_Folded";
    magazines[] = COMMON_SMG_MAGAZINES;
  };

  class 12th_M90 : 19_UNSC_M90
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M90";
    baseWeapon = "12th_M90";
  };

  // Training MA5A

  class 12th_MA5A_BB : 19_UNSC_MA5A
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] Training MA5A";
    baseWeapon = "12th_MA5A_BB";
    magazines[] = {"12th_20g_mag"};
  };

  class 12th_MA5A : 19_UNSC_MA5A
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] MA5A";
    baseWeapon = "12th_MA5A";
    magazines[] = COMMON_MA5C_MAGAZINES;
  };

  class 12th_MA5A_gl : 19_UNSC_MA5A_gl
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] MA5A W/ M301";
    baseWeapon = "12th_MA5A_gl";
    muzzles[] = {"this", "12th_M301UGL"};
    class 12th_M301UGL : OPTRE_M301UGL
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS };
    };
    magazines[] = COMMON_MA5C_MAGAZINES;
  };

  class 12th_MA5B : 19_UNSC_MA5B
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] MA5B";
    baseWeapon = "12th_MA5B";
    magazines[] = {"OPTRE_60Rnd_762x51_Mag"};
  };

  class 12th_br55 : 19_UNSC_br55
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR55";
    baseWeapon = "12th_BR55";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot
      {
      };
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot
      {
      };
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  class 12th_br55_gl : 19_UNSC_br55_gl
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR55 UGL";
    muzzles[] = {"this", "12th_M301UGL"};
    class 12th_m301ugl : GL_3GL_F
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS };
    };
    baseWeapon = "12th_BR55_gl";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot
      {
      };
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot
      {
      };
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  class 12th_BR55_HB : 19_UNSC_br55_HB
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR55HB";
    baseWeapon = "12th_BR55_HB";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot
      {
      };
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot
      {
      };
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  class 12th_BR55_HB_gl : 19_UNSC_br55_HB_gl
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR55HB UGL";
    muzzles[] = {"this", "12th_M301UGL"};
    class 12th_m301ugl : GL_3GL_F
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS };
    };
    baseWeapon = "12th_BR55_HB_gl";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot
      {
      };
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot
      {
      };
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  class 12th_M392 : 19_UNSC_M392
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] M392 DMR";
    baseWeapon = "12th_M392";
    HUD_TotalPosibleBullet = 32;
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
        compatibleItems[] = COMMON_BR_SIGHTS;
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

  /*class 12th_SRS99AM: 19_UNSC_SRS99AM {
    author = "Weber";
    baseWeapon = "12th_SRS99AM";
    scope = 2;
    displayName = "[12th] SRS99AM";
    model = "\UNSC_F_Weapons\weapons\UNSC_SRS99AM.p3d";
    mass = 300;
    reloadAction = "WBK_SRS99C_Reload";
    picture = "\UNSC_F_Weapons\weapons\UI\srs99_UI.paa";
    UiPicture = "\UNSC_F_Weapons\weapons\UI\srs99_ui.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
      mass = 300;
      class MuzzleSlot: MuzzleSlot {
        compatibleItems[] = {};
      };
      class CowsSlot: CowsSlot {
        compatibleitems[] = { "12th_SRS99_Scope" };
      };
      class PointerSlot: PointerSlot {
        compatibleitems[] = {};
      };
      class UnderBarrelSlot: UnderBarrelSlot {
        compatibleitems[] = {};
      };
    };
  };*/

  // Begin OPTRE Weapons

  class 12th_MA37K : OPTRE_MA37K
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    mass = 30;
    displayName = "[12th] MA37K Carbine";
    baseWeapon = "12th_MA37K";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\x\12thMEU\addons\12th_weapons\data\MA37K\MA37k_co.paa"};
    magazines[] = COMMON_MA5C_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot
      {
        compatibleitems[] = {"OPTRE_MA37KSuppressor"};
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
      };
    };
  };

  class 12th_BR45 : OPTRE_BR45
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR45";
    baseWeapon = "12th_BR45";
    hiddenSelections[] = {"camo", "camo_details"};
    hiddenSelectionsTextures[] = {
        "\x\12thMEU\addons\12th_weapons\data\BR45\BR45_co.paa",
        "\x\12thMEU\addons\12th_weapons\data\BR45\decals_ca.paa"};
    magazines[] = COMMON_BR_MAGAZINES;
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
        compatibleitems[] = {};
      };
    };
  };

  class 12th_Commando : OPTRE_Commando
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] VK78 Commando";
    baseWeapon = "12th_Commando";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\x\12thMEU\addons\12th_weapons\data\Commando\Commando_co.paa",
        "\x\12thMEU\addons\12th_weapons\data\Commando\Commando2_co.paa"};
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

  class 12th_MMG33_t : Dmns_M33_T
  {
    author = "Jack";
    displayName = "[12th] MMG33-T";
    baseWeapon = "12th_MMG33_T";
    magazines[] = {
        "12th_95x40_100rnd", "OPTRE_36Rnd_95x40_Mag",
        "OPTRE_36Rnd_95x40_Mag_Tracer", "12th_95x40_100rnd_T"};
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

  class 12th_M33_t : Dmns_M33_T
  {
    author = "Jack";
    displayName = "[12th] M33-T";
    baseWeapon = "12th_M33_T";
    magazines[] = {
        "12th_762x51_200rnd", "12th_762x51_200rnd_T",
        "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
        "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
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
            "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
            "MMG01_InteriorTail_SoundSet"};
      };
    };

    class FullAutoFast : FullAuto
    {
      reloadTime = 0.09;
      textureType = "fastAuto";

      class BaseSoundModType
      {
      };
      class standardsound : BaseSoundModType
      {
        soundsetshot[] = {
            "MMG01_Shot_SoundSet", "MMG01_Tail_SoundSet",
            "MMG01_InteriorTail_SoundSet"};
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

  class 12th_M247 : OPTRE_M247
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M247 GPMG";
    baseWeapon = "12th_M247";
    magazines[] = {
        "OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer",
        "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow", "12th_762x51_200rnd",
        "12th_762x51_200rnd_T"};
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

  class 12th_M319 : OPTRE_M319
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M319 Individual Grenade Launcher";
    baseWeapon = "12th_M319";
    magazines[] = COMMON_GL_MAGS;
  };

  class 12th_M319N : OPTRE_M319N
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] M319N Individual Grenade Launcher";
    baseWeapon = "12thMm319N";
    magazines[] = COMMON_GL_MAGS;
  };
};