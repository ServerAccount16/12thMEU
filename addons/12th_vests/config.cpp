// This directive suppresses specific Hemtt warnings related to padded arguments in the configuration file.
#pragma hemtt suppress pw3_padded_arg config

// Including macros that are defined in "config_macros.hpp" which are used later in the configuration.
// "unscf_vest_sel.hpp" includes the vest macros.
#include "config_macros.hpp"
#include "unscf_vest_sel.hpp"

// Configuration for CfgPatches, which defines the mod's dependencies and included content.
class CfgPatches {
  class 12th_vests {
    units[]= {};
    weapons[]= { 
      "12th_invis_vest"
    };
    requiredVersion=0.1;
  };
};

// Begin CfgVehicles.
class CfgVehicles {
  class ContainerSupply;
  class 12th_vest_supply : ContainerSupply {
    maximumLoad=VEST_MAXLOAD;  // Setting the maximum load capacity using the VEST_MAXLOAD macro.
  };
};

// Begin CfgWeapons
class CfgWeapons {
  class ItemCore;
  class VestItem;
  class OPTRE_UNSC_M52A_Armor2_MAR; // This is only used for the invisible Vest. Thank you Kelp

  // Base class for UNSC Foundries vests.
  class 12th_unscf_vest_base : ItemCore {
    scope=0;  // Not visible in-game.
    scopeArsenal=0;  // Not available in the Arsenal.
    author="Weber";
    picture="";  // No picture is set. I'll make one eventually probably
    model="\19th_H2A_armor\19th_H2A_marines_vests.p3d";
    allowedSlots[]={ 701 };]
    hiddenSelections[]={};
    hiddenSelectionsTextures[]={};
    UNSCF_VEST_ITEM_INFO("",default)  // Including vest item information using the UNSCF_VEST_ITEM_INFO macro.
  };

  // Class for the invisible vest.
  class 12th_invis_vest: OPTRE_UNSC_M52A_Armor2_MAR {
    author="Weber"; 
    scope=2;  // Visible in-game.
    scopeArsenal=2;  // Available in the Arsenal.
    displayName = "[12th] Invisible Vest";
    model="\halo_marine\null.p3d";
    picture="";
    hiddenSelectionsTextures[] = {""};
    INVIS_VEST_ITEM_INFO  // Including item information specific to the invisible vest.
  };

  // Defining all variants of the UNSC Foundries standard (std) camo vests.
  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_std,std,[12th][S])

  // Defining all variants of the UNSC Foundries winter (winter) camo vests.
  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_win,winter,[12th][W])
};

// Thank you Kelp for making a baseline for be to build off of :kisses: