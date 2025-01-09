#pragma hemtt suppress pw3_padded_arg config
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "config_macros.hpp"

/*
  ==============================================================================
  Overview
  ==============================================================================
  - CfgPatches: Declares this addon (twelfth_backpacks) and the units (backpack
    classes) it provides.
  - CfgVehicles: Defines each custom backpack class. The macros in
    config_macros.hpp generate different variants (light, heavy, RTO, medic)
    for each camo type (e.g., standard, forest).
  - XtdGearModels & XtdGearInfos: Provide extended gear definitions for custom
    UI/Arsenal handling.

  Key Macros:
    - BACKPACK_ALLTYPES(CAMOTYPE, DISPLAY_TYPE) => Creates 5 classes:
         twelfth_backpack_na_<CAMOTYPE>
         twelfth_backpack_light_<CAMOTYPE>
         twelfth_backpack_heavy_<CAMOTYPE>
         twelfth_backpack_rto_<CAMOTYPE>
         twelfth_backpack_medic_<CAMOTYPE>
      Each with different texture setups for the hidden selections.

    - BP_MAXLOAD & BP_MASS => Control the backpack capacity and weight.
  ==============================================================================
*/

class CfgPatches {
  /*
    Base classes from Arma or other mods that we inherit from:
    - B_AssaultPack_Base: The vanilla Arma 3 assault pack base.
    - 19th_Bag_Base: Another modded base class for an alternative RTO backpack.
  */
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

  // ---------------------------------------------------------------------------
  //  twelfth_backpack_base
  // ---------------------------------------------------------------------------
  /*
    This serves as a parent class for standard 12th MEU backpacks. 
    All other variants (standard, forest, etc.) inherit from it.
  */
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


  // ---------------------------------------------------------------------------
  //  twelfth_backpack_invis
  // ---------------------------------------------------------------------------
  /*
    An invisible backpack used for special cases (maybe for certain loadouts
    that need a backpack slot but no visible model).
  */
  class twelfth_backpack_invis : twelfth_backpack_base {
    author = "Waylen";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[12th] Invisible Backpack";
    model = "\halo_marine\null.p3d";  // Invisible model.
    hiddenSelectionsTextures[] = {"", "", "", ""};  // No textures.
  };

  // ---------------------------------------------------------------------------
  //  twelfth_backpack_alt_rto
  // ---------------------------------------------------------------------------
  /*
    A separate RTO backpack that inherits from 19th_Bag_Base instead of
    twelfth_backpack_base. This is a special variant for those who prefer
    a different model/appearance for radio operators.
  */
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

  /*
    The big macro: BACKPACK_ALLTYPES(CAMOTYPE, DISPLAY_TYPE)
    For example, BACKPACK_ALLTYPES(standard,Standard) creates:
      twelfth_backpack_na_standard     -> [12th][Standard] Backpack
      twelfth_backpack_light_standard  -> [12th][Standard][Light] Backpack
      twelfth_backpack_heavy_standard  -> [12th][Standard][Heavy] Backpack
      twelfth_backpack_rto_standard    -> [12th][Standard][RTO] Backpack
      twelfth_backpack_medic_standard  -> [12th][Standard][Medic] Backpack
    Each sets a different texture combination for hiddenSelectionsTextures[].
  */
  BACKPACK_ALLTYPES(standard,Standard)
  BACKPACK_ALLTYPES(forest,Forest)
};

// -----------------------------------------------------------------------------
//  XtdGear Integration
// -----------------------------------------------------------------------------
/*
  The "XtdGearModels" and "XtdGearInfos" classes let you define custom UI 
  or arsenal categories for these backpacks if you have an extended gear mod 
  supporting them (like XtdGear).
*/
class XtdGearModels {
  class CfgVehicles{
    /*
      The ALL_GI(CAMO) macro calls BACKPACK_GI(CAMO, TYPE) for each type
      (light, na, heavy, medic, rto). This means the extended gear system
      sees each variant (e.g., twelfth_backpack_light_standard) with 
      model="twelfth_backpacks", camo="standard", type="light", etc.
    */
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