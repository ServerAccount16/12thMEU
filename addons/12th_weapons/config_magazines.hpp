class CfgMagazines
{
  class OPTRE_32Rnd_762x51_Mag;         // Base class for 7.62x51mm magazine
  class OPTRE_36Rnd_95x40_Mag;          // Base class for 9.5x40mm magazine
  class OPTRE_400Rnd_762x51_Box_Tracer; // Base class for 7.62x51mm tracer box
  class OPTRE_60Rnd_5x23mm_Mag;         // Base class for 5x23mm magazine
  class M319_HEAT_Grenade_Shell;        // Base class for 40mm HEAT shell
  class CA_LauncherMagazine;
  class RPG32_HE_F;

  // Training magazine configuration
  class twelfth_20g_mag : OPTRE_32Rnd_762x51_Mag
  {
    displayName = "32Rnd .20g BB Cartridge";
    displaynameshort = ".20g BB";
    count = 32;           // Number of rounds in the magazine
    initspeed = 1500;     // Initial bullet speed in meters per second
    ammo = "twelfth_20g_bb"; // Type of ammo used
  };

  // Various magazine configurations for different calibers
  class twelfth_95x40_100rnd : OPTRE_36Rnd_95x40_Mag
  {
    scope = 2;
    author = "Weber";
    displayName = "100rnd 9.5x40mm Box Magazine";
    ammo = "OPTRE_B_95x40_Ball";
    count = 100;
    mass = 40;
    tracersEvery = 0;
    lastRoundsTracer = 6; // Tracer rounds for the last 6 rounds
    ACE_isBelt = 1;
  };

    class twelfth_95x40_100rnd_T : OPTRE_36Rnd_95x40_Mag
  {
    scope = 2;
    author = "Waylen";
    displayName = "100rnd 9.5x40mm Box Magazine (Tracers)";
    ammo = "OPTRE_B_95x40_Ball";
    count = 100;
    mass = 40;
    tracersEvery = 0;
    lastRoundsTracer = 100; // Tracers for the last 100 rounds
    ACE_isBelt = 1;
  };

  class twelfth_762x51_200rnd : OPTRE_32Rnd_762x51_Mag
  {
    author = "Weber";
    displayName = "200rnd 7.62x51mm Box Magazine";
    count = 200;
    mass = 40;
    ACE_isBelt = 1;
  };

  class twelfth_762x51_200rnd_T : OPTRE_32Rnd_762x51_Mag
  {
    author = "Weber";
    displayName = "200rnd 7.62x51mm Box Magazine (Tracers)";
    count = 200;
    mass = 40;
    ACE_isBelt = 1;
    lastRoundsTracer = 200; // Tracers for the last 100 rounds
  };

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

  class twelfth_40mm_heat : M319_HEAT_Grenade_Shell
  {
    scope = 2;
    displayName = "[12th] 40mm HEAT";
    displaynameshort = "40mm HEAT";
    ammo = "twelfth_40mmG_HEAT"; // 40mm HEAT grenade
    author = "Waylen";        // Nerd (your mother - waylen)
    mass = 8;
  };

  class twelfth_m96_magazine: RPG32_HE_F {
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

};