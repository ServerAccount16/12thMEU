#pragma hemtt suppress pw3_padded_arg config
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "config_macros.hpp"

/*
  Defines the mod's configuration for backpacks, including different variants
  such as standard, jungle, desert, and winter backpacks with different roles
  like RTO (Radio Telephone Operator) and bio (biomedical).
*/

class CfgPatches {
  class twelfth_backpacks {
    units[] = {  // List of all custom backpack units.
      "twelfth_backpack_standard",
      "twelfth_backpack_standard_rto",
      "twelfth_backpack_standard_bio",
      "twelfth_backpack_standard_pouch",
      "twelfth_backpack_jungle",
      "twelfth_backpack_jungle_rto",
      "twelfth_backpack_jungle_bio",
      "twelfth_backpack_jungle_pouch",
      "twelfth_backpack_desert",
      "twelfth_backpack_desert_rto",
      "twelfth_backpack_desert_bio",
      "twelfth_backpack_desert_pouch",
      "twelfth_backpack_winter",
      "twelfth_backpack_winter_rto",
      "twelfth_backpack_winter_bio",
      "twelfth_backpack_winter_pouch",
      "twelfth_backpack_alt_rto"  // Alternative RTO backpack.
    };
    weapons[] = {};  // No weapons defined.
    requiredVersion = 0.1;  // Minimum required game version.
  };
};

class CfgVehicles {
  class B_AssaultPack_Base;  // Base class for standard backpacks.
  class 19th_Bag_Base;  // Base class for alternative backpacks.

  // Base class for all custom backpacks.
  class twelfth_backpack_base : B_AssaultPack_Base {
    author = "Kelp";
    scope = 0;  // Not visible in the editor.
    scopeArsenal = 0;  // Not visible in the arsenal.
    picture = "";  // No picture defined.
    displayName = "[12th] Backpack Base (DON'T USE)";
    model = "\x\12thMEU\addons\12th_backpacks\backpack\12thKelpbackpack.p3d";
    hiddenSelections[] = {  // Available texture selections.
      "Main",
      "Pouches",
      "Biofoam",
      "Antenna"
    };
    maximumLoad = BP_MAXLOAD;  // Load capacity macro.
    mass = BP_MASS;  // Backpack mass macro.
    class TransportMagazines {};  // No magazines by default.
    class TransportItems {};  // No items by default.
  };

  // Invisible backpack class for special use cases.
  class twelfth_backpack_invis : twelfth_backpack_base {
    author = "Kelp";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] Invisible Backpack";
    model = "\halo_marine\null.p3d";  // Invisible model.
    hiddenSelectionsTextures[] = {"", "", "", ""};  // No textures.
  };

  // Alternative RTO backpack due to popular demand.
  class twelfth_backpack_alt_rto : 19th_Bag_Base {
    scope = 2;
    author = "Kelp";
    scopeArsenal = 2;
    displayName = "[12th][Alt] Backpack RTO";
    maximumLoad = BP_MAXLOAD;  // Load capacity macro.
    mass = BP_MASS;  // Backpack mass macro.
    picture = "";  // No picture defined.
    hiddenSelections[] = {  // Available texture selections.
      "Bag",
      "PouchFront"
    };
    hiddenSelectionsTextures[] = {"", ""};  // No textures by default.
  };

  // Generate all backpack types (standard, jungle, desert, winter) using macros.
  BACKPACK_ALLTYPES(standard, Standard)
};
