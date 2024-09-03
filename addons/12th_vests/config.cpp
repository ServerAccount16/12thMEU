// This directive suppresses specific Hemtt warnings related to padded arguments in the configuration file.
#pragma hemtt suppress pw3_padded_arg config

// Including macros that are defined in "config_macros.hpp" which are used later in the configuration.
#include "config_macros.hpp"

// Configuration for CfgPatches, which defines the mod's dependencies and included content.
class CfgPatches {
  class 12th_vests { // Defines a class named 12th_vests.
    units[]= {};  // No units are defined in this mod.
    weapons[]= {  // Weapons array defines items that can be categorized as weapons.
      "12th_invis_vest"  // Including an invisible vest as a "weapon".
    };
    requiredVersion=0.1;  // Minimum required version of the game/mod.
  };
};

// Configuration for CfgVehicles, specifically for container-type vehicles.
class CfgVehicles {
  class ContainerSupply;  // Forward declaration of the ContainerSupply class.
  class 12th_vest_supply : ContainerSupply {  // Creating a new class that inherits from ContainerSupply.
    maximumLoad=VEST_MAXLOAD;  // Setting the maximum load capacity using the VEST_MAXLOAD macro.
  };
};

// Configuration for CfgWeapons, which defines different items, including vests.
class CfgWeapons {
  class ItemCore;  // Forward declaration of the ItemCore class, base class for items.
  class VestItem;  // Forward declaration of the VestItem class, base class for vests.
  class OPTRE_UNSC_M52A_Armor2_MAR; // Forward declaration of the M52A class, base class for invisible vests.

  // Base class for UNSC Foundries vests.
  class 12th_unscf_vest_base : ItemCore {
    scope=0;  // Not visible in-game.
    scopeArsenal=0;  // Not available in the Arsenal.
    author="Kelp";  // Author of the item.
    picture="";  // No picture is set.
    model="\19th_H2A_armor\19th_H2A_marines_vests.p3d";  // Path to the vest model.
    allowedSlots[]={ 701 };  // Allowed inventory slots for the vest.
    hiddenSelections[]={};  // Array for hidden selections (textures) that can be modified.
    hiddenSelectionsTextures[]={};  // Array for textures corresponding to the hidden selections.
    UNSCF_VEST_ITEM_INFO("",default)  // Including vest item information using the UNSCF_VEST_ITEM_INFO macro.
  };

  // Class for the invisible vest.
  class 12th_invis_vest: OPTRE_UNSC_M52A_Armor2_MAR {  // Inherits from OPTRE_UNSC_M52A_Armor2_MAR.
    author="Kelp";  // Author of the item.
    scope=2;  // Visible in-game.
    scopeArsenal=2;  // Available in the Arsenal.
    displayName = "[12th] Invisible Vest";  // Name displayed in-game.
    model="\halo_marine\null.p3d";  // Model for the invisible vest.
    picture="";  // No picture is set.
    hiddenSelectionsTextures[] = {""};  // No textures applied.
    INVIS_VEST_ITEM_INFO  // Including item information specific to the invisible vest.
  };

  // Defining all variants of the UNSC Foundries standard (std) camo vests.
  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_std,std,[12th][S])

  // Defining all variants of the UNSC Foundries winter (winter) camo vests.
  UNSCF_VEST_ALL_VARIANTS(12th_unscf_vest_win,winter,[12th][W])
};
