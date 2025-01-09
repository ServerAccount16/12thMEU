/*
  ==============================================================================
  config_magazines.hpp

  This file defines all magazine classes. Each class can inherit from an ArmA
  base magazine or a modded base magazine. The main differences typically are
  capacity, ammo type, display name, and mass.

  Key Properties:
    - `count`: number of rounds.
    - `ammo`: the type of CfgAmmo it fires.
    - `initspeed`: muzzle velocity in m/s (some parent classes also set this).
    - `mass`: used by ACE to represent weight. (Bigger number = heavier)
    - `scope`: 
        2 = Public, visible in Arsenal.
        1 = Hidden in-game, but accessible by script.
        0 = Not visible/hidden, used internally.

  Keep consistent naming so players/devs can easily find the correct magazine!
  ==============================================================================
*/
class CfgMagazines
{
  // Forward declarations (inheritance targets)
  class OPTRE_32Rnd_762x51_Mag;         // Base class for 7.62x51mm magazine
  class OPTRE_100Rnd_762x51_Box_Tracer; // Base class for 7.62 Boxes
  class OPTRE_100Rnd_762x51_Box;        // Base class for 7.62 Boxes w/ tracers
  class OPTRE_36Rnd_95x40_Mag_Tracer;   // Base class for 9.5 Boxes
  class OPTRE_36Rnd_95x40_Mag;          // Base class for 9.5x40mm magazine
  class OPTRE_400Rnd_762x51_Box_Tracer; // Base class for 7.62x51mm tracer box
  class OPTRE_60Rnd_5x23mm_Mag;         // Base class for 5x23mm magazine
  class M319_HEAT_Grenade_Shell;        // Base class for 40mm HEAT shell
  class CA_LauncherMagazine;
  class RPG32_HE_F;

  // Training Magazine for BB
  class twelfth_20g_mag : OPTRE_32Rnd_762x51_Mag
  {
    displayName = "32Rnd .20g BB Cartridge";
    displaynameshort = ".20g BB";
    count = 32;           // Number of rounds in the magazine
    initspeed = 1500;     // Initial bullet speed in meters per second
    ammo = "twelfth_20g_bb"; // Type of ammo used
  };
  // Underwater BR magazine
  class twelfth_br_36Rnd_UW : OPTRE_36Rnd_95x40_Mag
  {
    author = "Weber";
    displayName = "36Rnd 9.5x40mm Magazine (Underwater)";
    count = 36;
    initspeed = 700;
    descriptionShort = "36 Round Magazine 9.5x40mm";
    mass = 10;
    ammo = "twelfth_95x40_UW"; // Underwater ammunition
  };
  // Underwater M7 60-round mag
  class twelfth_m7_60rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "60Rnd 5x23mm Magazine (Underwater)";
    count = 60;
    initspeed = 700;
    descriptionShort = "60 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "twelfth_5x23mm_UW"; // Underwater ammunition
  };
  // Underwater M7 48-round mag
  class twelfth_m7_48rnd_UW : OPTRE_60Rnd_5x23mm_Mag
  {
    author = "Weber";
    displayName = "48Rnd 5x23mm Magazine (Underwater)";
    count = 48;
    initspeed = 700;
    descriptionShort = "48 Round Magazine 5x23mm (Increased Muzzle Velocity)";
    mass = 8;
    ammo = "twelfth_5x23mm_UW"; // Underwater ammunition
  };
  // Custom 40mm HEAT magazine
  class twelfth_40mm_heat : M319_HEAT_Grenade_Shell
  {
    scope = 2;
    displayName = "[12th] 40mm HEAT";
    displaynameshort = "40mm HEAT";
    ammo = "twelfth_40mmG_HEAT"; // 40mm HEAT grenade
    author = "Waylen";        // Nerd (your mother - waylen)
    mass = 8;
  };
  // M96 LAW rocket magazine
  class twelfth_m96_magazine: RPG32_HE_F 
  {
    scope = 2;
    allowedSlots[] = {};
    displayName = "M96 HEAT Disposable Rockets";
    displaynameshort = "HEAT";
    descriptionShort = "High Explosive Anti Tank<br/>Un-guided";
    ammo = "twelfth_m96_rocket_heat"; 
    picture = "\DMNS\Weapons\Launchers\icons\gear_rpg32_rocket_ca.paa";
    model = "\a3\weapons_f\ammo\rocket_01_f.p3d";
    count = 1;
    /*
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "" };
    mass = 45;
    initSpeed = 650;
    allowedSlots[] = { 901, 701 };
    */
  };
  // MG Belts
  class twelfth_100Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box 
  {
    scope = 2;
    author = "Waylen";
    displayName = "100rnd 7.62x51mm Box";
    count = 100;
    mass = 40; // 4 lbs
    lastRoundsTracer = 20; 
    ACE_isBelt = 1; 
  };

  class twelfth_100Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer 
  {
    scope = 2;
    author = "Waylen";
    displayName = "100rnd 7.62x51mm Box (T)";
    count = 100;
    mass = 40; // 4 lbs
    lastRoundsTracer = 100; 
    ACE_isBelt = 1; 
  };

  class twelfth_200Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box 
  {
    scope = 2;
    author = "Waylen";
    displayName = "200rnd 7.62x51mm Box";
    count = 200;
    mass = 60; // 6 lbs
    lastRoundsTracer = 40; 
    ACE_isBelt = 1; 
  };

  class twelfth_200Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer 
  {
    scope = 2;
    author = "Waylen";
    displayName = "200rnd 7.62x51mm Box (T)";
    count = 200;
    mass = 60; // 6 lbs
    lastRoundsTracer = 200; 
    ACE_isBelt = 1; 
  };

  class twelfth_400Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box 
  {
    scope = 2;
    author = "Waylen";
    displayName = "400rnd 7.62x51mm Box";
    count = 400;
    mass = 90; // 9 lbs
    lastRoundsTracer = 40; 
    ACE_isBelt = 1; 
  };

  class twelfth_400Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer 
  {
    scope = 2;
    author = "Waylen";
    displayName = "400rnd 7.62x51mm Box (T)";
    count = 400;
    mass = 90; // 9 lbs
    lastRoundsTracer = 400; 
    ACE_isBelt = 1; 
  };
  // 9.5x40mm box mag
  class twelfth_100Rnd_95x40_Box: OPTRE_36Rnd_95x40_Mag_Tracer
  {
    scope = 2;
    author = "Waylen";
    displayName = "100rnd 9.5x40mm Box";
    count = 100;
    mass = 45; // 4.5 lbs
    lastRoundsTracer = 100; 
    ACE_isBelt = 1; 
  };

  class twelfth_100Rnd_95x40_Box_T: OPTRE_36Rnd_95x40_Mag_Tracer
  {
    scope = 2;
    author = "Waylen";
    displayName = "100rnd 9.5x40mm Box (T)";
    count = 100;
    mass = 45; // 4.5 lbs
    lastRoundsTracer = 100; 
    ACE_isBelt = 1; 
  };

};