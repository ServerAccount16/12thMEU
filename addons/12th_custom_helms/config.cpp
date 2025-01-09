#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"

/*
  ==============================================================================
  Documentation / Workflow
  ==============================================================================
  1) **Texture Import**  
     - Convert your helmet texture(s) to .paa.  
     - Name them using this pattern: `twelfth_ch_[CAMO]_[NAME].paa`, for example
       "twelfth_ch_std_Bert.paa" (if no explicit camo is used, omit that part).

  2) **Add a New Helmet**  
     - In the `CfgPatches` -> `weapons[]` array below, add both:
       `twelfth_ch_[CAMO]_[NAME]`
       and
       `twelfth_ch_[CAMO]_[NAME]_nv`
       (the NV variant).
     - Under `CfgWeapons`, call the relevant macro:
       `CUSTOM_HELM_S_AV(NAME)`, which auto-generates two classes:
         - `twelfth_ch_std_[NAME]`
         - `twelfth_ch_std_[NAME]_nv`.
     - Add the new helmet name to `XtdGearModels->CfgWeapons->twelfth_custom_helms->member[]`.
     - Use the macro `CH_HELM_S_GI(NAME)` in `XtdGearInfos->CfgWeapons` block.

  3) **Pilot Helmets**  
     - If you’re adding a custom pilot helmet, use `CUSTOM_PILOT_HELM(...)`.
     - Then also add the resulting class name to `CfgPatches` weapons[] array.

  4) **Alphabetical Order**  
     - Insert new entries in alphabetical order to keep the file tidy.

  ==============================================================================
*/

class CfgPatches {
  class twelfth_custom_helms {
    units[] = {};
    weapons[] = {
      "twelfth_custom_helm_base",
      "twelfth_ch_Aurora",
      "twelfth_ch_Bert",
      "twelfth_ch_Bretek",
      "twelfth_ch_Broad",
      "twelfth_ch_Burns",
//      "twelfth_ch_Bunge",
      "twelfth_ch_Coady",
      "twelfth_ch_Dennis",
      "twelfth_ch_Dom",
      "twelfth_ch_Don",
//      "twelfth_ch_Dras",
      "twelfth_ch_Gallegos",
      "twelfth_ch_Galvin",
      "twelfth_ch_Geoff",
      "twelfth_ch_Gaunt",
      "twelfth_ch_Kasper",
      "twelfth_ch_Kiens",
      "twelfth_ch_LeDoux",
      "twelfth_ch_Link",
      "twelfth_ch_Luerssen",
      "twelfth_ch_Moss",
//      "twelfth_ch_Obi",
      "twelfth_ch_Oliver",
      "twelfth_ch_Quebec",
      "twelfth_ch_Romanov",
      "twelfth_ch_Schultz",
//      "twelfth_ch_Shen",
      "twelfth_ch_Sand",
      "twelfth_ch_Sammy",
      "twelfth_ch_Simmons",
      "twelfth_ch_Styx",
      "twelfth_ch_Waylen",
      "twelfth_ch_Wilson",
      "twelfth_ch_Wolffe",
      "twelfth_ch_Wulf",
      "twelfth_ch_Aurora_nv",
      "twelfth_ch_Bert_nv",
      "twelfth_ch_Bretek_nv",
      "twelfth_ch_Broad_nv",
//      "twelfth_ch_Bunge_nv",
      "twelfth_ch_Burns_nv",
      "twelfth_ch_Coady_nv",
      "twelfth_ch_Dennis_nv",
      "twelfth_ch_Dom_nv",
      "twelfth_ch_Don_nv",
//      "twelfth_ch_Dras_nv",
      "twelfth_ch_Gallegos_nv",
      "twelfth_ch_Galvin_nv",
      "twelfth_ch_Geoff_nv",
      "twelfth_ch_Gaunt_nv",
      "twelfth_ch_Kasper_nv",
      "twelfth_ch_Kiens_nv",
      "twelfth_ch_LeDoux_nv",
      "twelfth_ch_Link_nv",
      "twelfth_ch_Luerssen_nv",
      "twelfth_ch_Moss_nv",
//      "twelfth_ch_Obi_nv",
      "twelfth_ch_Oliver_nv",
      "twelfth_ch_Quebec_nv",
      "twelfth_ch_Romanov_nv",
      "twelfth_ch_Schultz_nv",
//      "twelfth_ch_Shen_nv",
      "twelfth_ch_Sand_nv",
      "twelfth_ch_Sammy_nv",
      "twelfth_ch_Simmons_nv",
      "twelfth_ch_Styx_nv",
      "twelfth_ch_Waylen_nv",
      "twelfth_ch_Wilson_nv",
      "twelfth_ch_Wolffe_nv",
      "twelfth_ch_Wulf_nv",
      "twelfth_pilot_ch_base",
      "twelfth_pilot_ch_penquite",
      "twelfth_pilot_ch_waylen"
    };
    requiredAddons[]= {
      "A3_Armor_F_Beta",
      "A3_Soft_F",
      "OPTRE_Vehicles_M494"
    };
  };
};

class CfgWeapons {
  /*
    Base classes & references:
    - H_HelmetB: Standard ArmA 3 base helmet
    - HeadgearItem: For item-specific config (weight, armor, etc.)
  */
  class H_HelmetB;
  class ItemInfo;
  class HeadgearItem;
  // ---------------------------------------------------------------------------
  //  Base Class for 12th Custom Helmets
  // ---------------------------------------------------------------------------
  class twelfth_custom_helm_base : H_HelmetB {
    scope=0;
    scopeArsenal=0;
    author="Waylen";
    displayName="[12th] Custom Helmet Base (DON'T USE)";
    ace_hearing_protection=1;
    ace_hearing_lowerVolume=0.30000001;
    model="\halo_marine\halo_helm_01";
    picture="";
    class ItemInfo: HeadgearItem {
      uniformModel="\halo_marine\halo_helm_01";
      mass=40;
      modelSides[]={6};
      passThrough=0.1;
      class HitpointsProtectionInfo {
        class Head {
          hitpointName="HitHead";
          armor=20;
          passThrough=0.1;
        };
      };
    };
  };
  // ---------------------------------------------------------------------------
  //  Macros: CUSTOM_HELM_S_AV(NAME)
  // ---------------------------------------------------------------------------
  /*
    Creates two classes:
      1) twelfth_ch_std_[NAME]    : Standard
      2) twelfth_ch_std_[NAME]_nv : NV variant (capable of some "visor" or 2nd selection)
    
    Each inherits from `twelfth_custom_helm_base`, sets textures, etc.
    If you want to hide or comment out certain members, do so below in the macro calls.
  */

  // -- Standard Helmets --
  CUSTOM_HELM_S_AV(Aurora)
  CUSTOM_HELM_S_AV(Bert)
  CUSTOM_HELM_S_AV(Bobby)
  CUSTOM_HELM_S_AV(Bretek)
  CUSTOM_HELM_S_AV(Broad)
//  CUSTOM_HELM_S_AV(Bunge)
  CUSTOM_HELM_S_AV(Burns)
  CUSTOM_HELM_S_AV(Coady)
  CUSTOM_HELM_S_AV(Dennis)
  CUSTOM_HELM_S_AV(Dom)
  CUSTOM_HELM_S_AV(Don)
//  CUSTOM_HELM_S_AV(Dras)
  CUSTOM_HELM_S_AV(Gallegos)
  CUSTOM_HELM_S_AV(Galvin)
  CUSTOM_HELM_S_AV(Geoff)
  CUSTOM_HELM_S_AV(Gaunt)
  CUSTOM_HELM_S_AV(Kasper)
  CUSTOM_HELM_S_AV(Kiens)
  CUSTOM_HELM_S_AV(LeDoux)
  CUSTOM_HELM_S_AV(Link)
  CUSTOM_HELM_S_AV(Luerssen)
  CUSTOM_HELM_S_AV(Moss)
//  CUSTOM_HELM_S_AV(Obi)
  CUSTOM_HELM_S_AV(Oliver)
  CUSTOM_HELM_S_AV(Quebec)
  CUSTOM_HELM_S_AV(Romanov)
  CUSTOM_HELM_S_AV(Schultz)
//  CUSTOM_HELM_S_AV(Shen)
  CUSTOM_HELM_S_AV(Sand)
  CUSTOM_HELM_S_AV(Sammy)
  CUSTOM_HELM_S_AV(Simmons)
  CUSTOM_HELM_S_AV(Spector)
  CUSTOM_HELM_S_AV(Styx)
  CUSTOM_HELM_S_AV(Waylen)
  CUSTOM_HELM_S_AV(Wilson)
  CUSTOM_HELM_S_AV(Wolffe)
  CUSTOM_HELM_S_AV(Wulf)

  // -- Pilot Helmets --
  /*
    Macro usage:
    CUSTOM_PILOT_HELM(
      SUFFIX, 
      DISPLAY, 
      C1, C2, C3, C4, C5
    );
    Each bracket represents a separate texture path inside data\pilots\.

    Example:
    If you pass (penquite,"[12th][Pilot][Customs] Penquite", default, penquite, default, default, default)
    The 5 textures it looks for:
      \...\pilots\default\Addons_co.paa
      \...\pilots\penquite\EXT_co.paa
      \...\pilots\default\INT_co.paa
      \...\pilots\default\MID_co.paa
      \...\pilots\default\Visor_co.paa
  */

  CUSTOM_PILOT_HELM(penquite, "[12th][Pilot][Customs] Penquite",default,penquite,default,default,default)
  CUSTOM_PILOT_HELM(waylen, "[12th][Pilot][Customs] Waylen",waylen,waylen,default,default,default)

};

// -----------------------------------------------------------------------------
//  Extended Arsenal Integration
// -----------------------------------------------------------------------------
/*
  1) XtdGearModels: The top-level definitions for different helmet configs.
  2) XtdGearInfos:  Concrete expansions mapping each helmet name to its model, 
                    camo variant, and visor state (Yes or No).
*/
class XtdGearModels {
  class CfgWeapons {
    class twelfth_custom_helms {
      label="12th Custom Infantry Helmets";
      options[]= {"visor","camo","member"};
      class camo {
        alwaysSelectable=1;
        label="Camouflage";
        values[]={"std"};
        class std {label="Standard";};
      };
      class visor {
        alwaysSelectable=1;
        label="Visor";
        values[]={"Yes", "No"};
      };
      class member {
        alwaysSelectable=1;
        label="Member";
        values[]={
          "Aurora",
          "Bert",
          "Bobby",
          "Bretek",
          "Broad",
          "Burns",
//          "Bunge",
          "Coady",
          "Dennis",
          "Dom",
          "Don",
//          "Dras",
          "Gallegos",
          "Galvin",
          "Geoff",
          "Gaunt",
          "Kasper",
          "Kiens",
          "LeDoux",
          "Link",
          "Luerssen",
          "Moss",
//          "Obi",
          "Oliver",
          "Quebec",
          "Romanov",
          "Schultz",
//          "Shen",
          "Sand",
          "Sammy",
          "Simmons",
          "Spector",
          "Styx",
          "Waylen",
          "Wilson",
          "Wolffe",
          "Wulf",
        };
      };
    };
  };
};

class XtdGearInfos {
  /*
      The macro CH_HELM_S_GI(SFX) => expands to references for both standard
      (visor = "Yes") and NV (visor = "No") for each name in "member".
    */
  class CfgWeapons {
    CH_HELM_S_GI(Aurora)
    CH_HELM_S_GI(Bert)
    CH_HELM_S_GI(Bobby)
    CH_HELM_S_GI(Bretek)
    CH_HELM_S_GI(Broad)
    CH_HELM_S_GI(Burns)
//    CH_HELM_S_GI(Bunge)
    CH_HELM_S_GI(Coady)
    CH_HELM_S_GI(Dennis)
    CH_HELM_S_GI(Dom)
    CH_HELM_S_GI(Don)
//    CH_HELM_S_GI(Dras)
    CH_HELM_S_GI(Gallegos)
    CH_HELM_S_GI(Galvin)
    CH_HELM_S_GI(Geoff)
    CH_HELM_S_GI(Gaunt)
    CH_HELM_S_GI(Kasper)
    CH_HELM_S_GI(Kiens)
    CH_HELM_S_GI(LeDoux)
    CH_HELM_S_GI(Link)
    CH_HELM_S_GI(Luerssen)
    CH_HELM_S_GI(Moss)
//    CH_HELM_S_GI(Obi)
    CH_HELM_S_GI(Oliver)
    CH_HELM_S_GI(Quebec)
    CH_HELM_S_GI(Romanov)
    CH_HELM_S_GI(Schultz)
//    CH_HELM_S_GI(Shen)
    CH_HELM_S_GI(Sand)
    CH_HELM_S_GI(Sammy)
    CH_HELM_S_GI(Simmons)
    CH_HELM_S_GI(Spector)
    CH_HELM_S_GI(Styx)
    CH_HELM_S_GI(Waylen)
    CH_HELM_S_GI(Wilson)
    CH_HELM_S_GI(Wolffe)
    CH_HELM_S_GI(Wulf)

  };
};
