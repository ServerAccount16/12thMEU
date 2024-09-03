// Weapon and Ammo Configuration

// Includes necessary macros for configurations
#include "macros.hpp"

// Configuration for weapon and ammo data

class CfgPatches
{
  class 12th_weapons
  {
    units[] = {}; // No specific units are associated with this patch
    weapons[] = {"12th_M96_LAW", "12th_M96_LAW_Ready", "12th_M96_LAW_Used", 
                 "12th_M6C", "12th_M7_Test", "12th_M7_Test_Folded", "12th_M90", 
                 "12th_MA5A_BB", "12th_MA5A", "12th_MA5A_gl", "12th_MA5B", 
                 "12th_br55", "12th_br55_gl", "12th_br55_HB", "12th_br55_HB_gl", 
                 "12th_M392", "12th_MA37K", "12th_BR45", "12th_Commando", 
                 "12th_MMG33_T", "12th_M33_t", "12th_M247", "12th_M319", 
                 "12th_M319N"};
    ammo[] = {"12th_20g_bb", "12th_95x40_UW", "12th_5x23mm_UW", "12th_40mmG_HEAT"};
    magazines[] = {"12th_20g_mag", "12th_95x40_100rnd", "12th_762x51_200rnd", 
                   "12th_762x51_200rnd_T", "12th_br_36Rnd_UW", "12th_m7_60rnd_UW", 
                   "12th_m7_48rnd_UW", "12th_40mm_heat"};
    requiredVersion = 0.1;
    requiredAddons[] = {}; // No additional addons required
  };
};

// Configuration for custom ammunition

class CfgAmmo
{
  class BulletBase; // Base class for all bullet-type ammunition
  class OPTRE_B_95x40_Ball; // Base class for 9.5x40mm Ball ammo
  class OPTRE_B_5x23_Caseless; // Base class for 5x23mm Caseless ammo
  class M319_HEAT; // Base class for 40mm HEAT grenades

  // Training ammunition configuration
  class 12th_20g_bb : BulletBase
  {
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
    cartridge = "";
    hit = 0; // Non-lethal training rounds
    indirectHit = 0;
    indirectHitRange = 0;
    cost = 100;
    typicalSpeed = 380; // Speed in meters per second
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

  // Underwater rifle ammunition configuration
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
    waterFriction = -0.00096;
    timeToLive = 0.12;
    effectFly = "AmmoUnderwater";
  };

  // High-Explosive Anti-Tank (HEAT) grenade configuration
  class 12th_40mmG_HEAT : M319_HEAT
  {
    ace_frag_metal = 2000; // Amount of metal fragments generated
    indirectHitRange = 0.1;
    hit = 470; // Damage caused by the explosion
  };
};

// Configuration for custom magazines

class CfgMagazines
{
  class OPTRE_32Rnd_762x51_Mag; // Base class for 7.62x51mm magazine
  class OPTRE_36Rnd_95x40_Mag; // Base class for 9.5x40mm magazine
  class OPTRE_400Rnd_762x51_Box_Tracer; // Base class for 7.62x51mm tracer box
  class OPTRE_60Rnd_5x23mm_Mag; // Base class for 5x23mm magazine
  class M319_HEAT_Grenade_Shell; // Base class for 40mm HEAT shell

  // Training magazine configuration
  class 12th_20g_mag : OPTRE_32Rnd_762x51_Mag
  {
    displayName = "32Rnd .20g BB Cartridge";
    displaynameshort = ".20g BB";
    count = 32; // Number of rounds in the magazine
    initspeed = 1500; // Initial bullet speed in meters per second
    ammo = "12th_20g_bb"; // Type of ammo used
  };

  // Various magazine configurations for different calibers
  class 12th_95x40_100rnd : OPTRE_36Rnd_95x40_Mag
  {
    scope = 2;
    author = "Weber";
    displayName = "100rnd 9.5x40mm Box Magazine";
    ammo = "OPTRE_B_95x40_Ball";
    count = 100;
    mass = 40;
    tracersEvery = 0;
    lastRoundsTracer = 6; // Tracer rounds for the last 6 rounds
  };

  class 12th_762x51_200rnd : OPTRE_32Rnd_762x51_Mag
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
    ammo = "12th_95x40_UW"; // Underwater ammunition
  };

  class 12th_m7_60rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "60Rnd 5x23mm Magazine (Underwater)";
    count = 60;
    initspeed = 700;
    descriptionShort = "60 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "12th_5x23mm_UW"; // Underwater ammunition
  };

  class 12th_m7_48rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "48Rnd 5x23mm Magazine (Underwater)";
    count = 48;
    initspeed = 700;
    descriptionShort = "48 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "12th_5x23mm_UW"; // Underwater ammunition
  };

  class 12th_40mm_heat : M319_HEAT_Grenade_Shell
  {
    scope = 2;
    displayName = "[12th] 40mm HEAT";
    displaynameshort = "40mm HEAT";
    ammo = "12th_40mmG_HEAT"; // 40mm HEAT grenade
    author = "Waylen";
    mass = 8;
  };
};

// Configuration for disposable launchers

class CBA_DisposableLaunchers
{
  ACE_12th_M96_LAW_Ready[] = {"12th_M96_LAW", "12th_M96_LAW_Used"}; // Defines the ready and used states of the M96 LAW
};

// Configuration for custom weapons

class CfgWeapons
{
  class WeaponSlotsInfo; // Base class for weapon slots
  class MuzzleSlot; // Base class for muzzle attachments
  class PointerSlot; // Base class for pointer attachments
  class UnderBarrelSlot; // Base class for underbarrel attachments
  class FullAuto; // Base class for full-auto fire mode
  class Launcher; // Base class for launcher weapons
  class OPTRE_MA37K; // Base class for the MA37K Carbine
  class OPTRE_BR45; // Base class for the BR45 Battle Rifle
  class OPTRE_Commando;
  class OPTRE_M247;
  class OPTRE_M319;
  class OPTRE_M319N;
  class OPTRE_M301UGL;
  class Dmns_M33_T; // Base class for the M33-T Machine Gun
  class DMNS_M96_LAW; // Base class for the M96 LAW Launcher
  class GL_3GL_F; // Base class for grenade launchers
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

  // Weapon configuration for the M96 LAW
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

  // Configuration for various rifles and attachments

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

  // Training MA5A configuration

  class 12th_MA5A_BB : 19_UNSC_MA5A
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] Training MA5A";
    baseWeapon = "12th_MA5A_BB";
    magazines[] = {"12th_20g_mag"}; // Training ammunition magazine
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
    muzzles[] = {"this", "12th_M301UGL"}; // Attachments
    class 12th_M301UGL : OPTRE_M301UGL
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS }; // Grenade launcher magazines
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

  // BR55 Rifle configuration with attachments

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
      class MuzzleSlot : MuzzleSlot {};
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot {};
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  // Additional BR55 variants with grenade launchers

  class 12th_br55_gl : 19_UNSC_br55_gl
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] BR55 UGL";
    muzzles[] = {"this", "12th_M301UGL"}; // Attachments
    class 12th_m301ugl : GL_3GL_F
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS }; // Grenade launcher magazines
    };
    baseWeapon = "12th_BR55_gl";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot {};
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot {};
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
      class MuzzleSlot : MuzzleSlot {};
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot {};
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
    muzzles[] = {"this", "12th_M301UGL"}; // Attachments
    class 12th_m301ugl : GL_3GL_F
    {
      displayName = "M301 Grenade Launcher";
      descriptionShort = "M301 GL";
      magazines[] = { COMMON_GL_MAGS }; // Grenade launcher magazines
    };
    baseWeapon = "12th_BR55_HB_gl";
    magazines[] = COMMON_BR_MAGAZINES;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot {};
      class CowsSlot : CowsSlot
      {
        compatibleItems[] = COMMON_BR_SIGHTS;
      };
      class PointerSlot : PointerSlot {};
      class UnderBarrelSlot : UnderBarrelSlot
      {
        compatibleitems[] = {};
      };
    };
  };

  // M392 DMR configuration

  class 12th_M392 : 19_UNSC_M392
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    canShootInWater = 1;
    displayName = "[12th] M392 DMR";
    baseWeapon = "12th_M392";
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

  // VK78 Commando configuration

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

  // M33-T Machine Gun configuration

  class 12th_MMG33_T : Dmns_M33_T
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
      class BaseSoundModType {};
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
      class BaseSoundModType {};
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

  // Individual grenade launcher configuration

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
    baseWeapon = "12th_M319N";
    magazines[] = COMMON_GL_MAGS;
  };
};
