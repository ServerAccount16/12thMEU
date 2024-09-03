#include "\x\cba\addons\main\script_macros_common.hpp"
#include "config_macros.hpp"

/*
  Defines the mod's configuration for backpacks, including different variants
  such as standard, jungle, desert, and winter backpacks with different roles
  like RTO (Radio Telephone Operator) and bio (biomedical).
*/

class CfgPatches {
  class 12th_backpacks {
    units[] = {  // List of all custom backpack units.
      "12th_backpack_standard",
      "12th_backpack_standard_rto",
      "12th_backpack_standard_bio",
      "12th_backpack_standard_pouch",
      "12th_backpack_jungle",
      "12th_backpack_jungle_rto",
      "12th_backpack_jungle_bio",
      "12th_backpack_jungle_pouch",
      "12th_backpack_desert",
      "12th_backpack_desert_rto",
      "12th_backpack_desert_bio",
      "12th_backpack_desert_pouch",
      "12th_backpack_winter",
      "12th_backpack_winter_rto",
      "12th_backpack_winter_bio",
      "12th_backpack_winter_pouch",
      "12th_backpack_alt_rto"  // Alternative RTO backpack.
    };
    weapons[] = {};  // No weapons defined.
    requiredVersion = 0.1;  // Minimum required game version.
  };
};

class CfgVehicles {
  class B_AssaultPack_Base;  // Base class for standard backpacks.
  class 19th_Bag_Base;  // Base class for alternative backpacks.

  // Base class for all custom backpacks.
  class 12th_backpack_base : B_AssaultPack_Base {
    author = "Weber";
    scope = 0;  // Not visible in the editor.
    scopeArsenal = 0;  // Not visible in the arsenal.
    picture = "";  // No picture defined.
    displayName = "[12th] Backpack Base (DON'T USE)";
    model = "\x\12thMEUAssets\addons\12th_backpacks\backpack\12thWeberbackpack.p3d";
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
  class 12th_backpack_invis : 12th_backpack_base {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] Invisible Backpack";
    model = "\halo_marine\null.p3d";  // Invisible model.
    hiddenSelectionsTextures[] = {"", "", "", ""};  // No textures.
  };

  // Alternative RTO backpack due to popular demand.
  class 12th_backpack_alt_rto : 19th_Bag_Base {
    scope = 2;
    author = "Weber";
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
  BACKPACK_ALLTYPES(winter, Winter)
  BACKPACK_ALLTYPES(desert, Desert)
  BACKPACK_ALLTYPES(standard, Standard)
  BACKPACK_ALLTYPES(jungle, Jungle)
};
