#include "config_macros.hpp"

class CfgPatches {
  class 12th_aircraft {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Air_F",
      "A3_Air_F_Beta",
      "A3_Weapons_F",
      "OPTRE_Core",
      "OPTRE_Vehicles_Air",
      "Splits_Functions"
    };
  };
};

// Begin Cfg Vehicles

class CfgVehicles {
  class Splits_Pelican_Base;
  class OPTRE_UNSC_hornet;
  class OPTRE_UNSC_falcon;
  class OPTRE_UNSC_falcon_armed;
  class OPTRE_UNSC_falcon_S;
  class OPTRE_UNSC_falcon_armed_S;
  class OPTRE_AV22_Sparrowhawk_Base;
  class OPTRE_AV22_Sparrowhawk;
  class OPTRE_AV22A_Sparrowhawk;
  class OPTRE_AV22B_Sparrowhawk;
  class OPTRE_AV22C_Sparrowhawk;
  class MEU_F29_Nandao_VTOL;

  // Begin Pelican :)

  class 12th_d77_tc_pelican: Splits_Pelican_Base {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    vehicleClass = "Air";
    author = "Weber";
    faction = "12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    OPTRE_canThrust = 1;
    OPTRE_minVelocity = 1.4;
    OPTRE_maxVelocity = 167;
    OPTRE_velocityMult = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR"; // When we make our own faction be sure to change this
    displayName = "[12th] D77-TC Pelican";
    Pelican_TextureSets
    Air_SP_Info(Pelican,0,Troop Transport)
  };
};