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
      "twelfth_backpack_standard_light",
      "twelfth_backpack_standard_heavy",
      "twelfth_backpack_standard_rto",
      "twelfth_backpack_standard_medic",
      "twelfth_backpack_forest",
      "twelfth_backpack_forest_light",
      "twelfth_backpack_forest_heavy",
      "twelfth_backpack_forest_rto",
      "twelfth_backpack_forest_medic",
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
    author = "19th; Sammy";
    scope = 0;  // Not visible in the editor.
    scopeArsenal = 0;  // Not visible in the arsenal.
    picture = "";  // No picture defined.
    displayName = "[12th] Backpack Base (DON'T USE)";
    model = "\19th_H2A_armor\19th_H2A_marines_backpacks";
    hiddenSelections[] = {  // Available texture selections.
      "main",
      "pouches",
      "roll",
      "radio"
    };
    maximumLoad = BP_MAXLOAD;  // Load capacity macro.
    mass = BP_MASS;  // Backpack mass macro.
    class TransportMagazines {};  // No magazines by default.
    class TransportItems {};  // No items by default.
  };

  // Invisible backpack class for special use cases.
  class twelfth_backpack_invis : twelfth_backpack_base {
    author = "Waylen";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] Invisible Backpack";
    model = "\halo_marine\null.p3d";  // Invisible model.
    hiddenSelectionsTextures[] = {"", "", "", ""};  // No textures.
  };

  // Alternative RTO backpack due to popular demand.
  class twelfth_backpack_alt_rto : 19th_Bag_Base {
    scope = 2;
    author = "19th";
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
  BACKPACK_ALLTYPES(standard,Standard)
  BACKPACK_ALLTYPES(forest,Forest)
};

class XtdGearModels {
  class CfgVehicles{
    class twelfth_backpacks {
      label = "12th Backpacks";
      options[] = {"camo", "type"};
      class camo {
        alwaysSelectable = 1;
        label = "Camoflauge";
        values[] = {"standard", "forest"};
        class standard {label = "Standard"; image = XTP(std);};
        class forest {label = "Forest"; image = XTP(forest);};
      };
      class type {
        alwaysSelectable = 1;
        label = "Variant";
        values [] = {"na", "light", "heavy", "medic", "rto"};
        class na {label = "N/A";};
        class light {label = "Light";};
        class heavy {label = "Heavy";};
        class medic {label = "Corpsman";};
        class rto {label = "RTO";};
      };
    };
  };
};

class XtdGearInfos {
  class CfgVehicles {
    ALL_GI(standard)
    ALL_GI(forest)
  };
};