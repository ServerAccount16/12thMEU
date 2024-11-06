#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"

/*
  Documentation on how to add a custom Marine helmet:
  This used to be a single macro-per-helmet but has since
  become a slightly more involved process due to the
  fact that every helmet is now also gets an entry in the extended
  arsenal mod.

  NOTE: if you're just doing a plain texture update, there is no need to update the
        config here.
  NOTE: please add in these custom helmets in alphabetical order, A->Z.

  I'm just gonna break this down into steps:

  Texture import step:
    * Get your custom helmet texture converted into a paa.
    * Rename said texture along this format: "twelfth_ch_[CAMO]_[NAME].paa".
      I will note that the standard brown camo variant used here does not have
      a CAMO prefix and it is therefore ommited from the filename
    * Put the helmet texture into "addons/twelfth_custom_helms/data/helms".

  Config update step:
    * Add in "twelfth_ch_[CAMO]_[NAME]" into the weapons[] array below.
    * Add in "twelfth_ch_[CAMO]_[NAME]_nv" into the weapons[] array below.
    * Add in a CUSTOM_HELM_S_AV([NAME]) macro call, along
      with the other macro calls below.
    * Add in an entry into the XtdGearModels->CfgWeapons->twelfth_custom_helms->member
      array that goes like "[NAME]", below.
    * Add in a CH_HELM_S_GI([NAME]) macro call into XtdGearInfos->CfgWeapons block.
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
      "twelfth_ch_Bunge",
      "twelfth_ch_Coady",
      "twelfth_ch_Dennis",
      "twelfth_ch_Dom",
      "twelfth_ch_Dras",
      "twelfth_ch_Gallegos",
      "twelfth_ch_Galvin",
      "twelfth_ch_Geoff",
      "twelfth_ch_Griffin",
      "twelfth_ch_Gaunt",
      "twelfth_ch_Kasper",
      "twelfth_ch_Kiens",
      "twelfth_ch_LeDoux",
      "twelfth_ch_Link",
      "twelfth_ch_Luerssen",
      "twelfth_ch_Moss",
      "twelfth_ch_Obi",
      "twelfth_ch_Oliver",
      "twelfth_ch_Quebec",
      "twelfth_ch_Romanov",
      "twelfth_ch_Schultz",
      "twelfth_ch_Shen",
      "twelfth_ch_Sand",
      "twelfth_ch_Sammy",
      "twelfth_ch_Skynyrd",
      "twelfth_ch_Simmons",
      "twelfth_ch_Styx",
      "twelfth_ch_Walker",
      "twelfth_ch_Waylen",
      "twelfth_ch_Wilson",
      "twelfth_ch_Wolffe",
      "twelfth_ch_Aurora_nv",
      "twelfth_ch_Bert_nv",
      "twelfth_ch_Bretek_nv",
      "twelfth_ch_Broad_nv",
      "twelfth_ch_Bunge_nv",
      "twelfth_ch_Burns_nv",
      "twelfth_ch_Coady_nv",
      "twelfth_ch_Dennis_nv",
      "twelfth_ch_Dom_nv",
      "twelfth_ch_Dras_nv",
      "twelfth_ch_Gallegos_nv",
      "twelfth_ch_Galvin_nv",
      "twelfth_ch_Geoff_nv",
      "twelfth_ch_Griffin_nv",
      "twelfth_ch_Gaunt_nv",
      "twelfth_ch_Kasper_nv",
      "twelfth_ch_Kiens_nv",
      "twelfth_ch_LeDoux_nv",
      "twelfth_ch_Link_nv",
      "twelfth_ch_Luerssen_nv",
      "twelfth_ch_Moss_nv",
      "twelfth_ch_Obi_nv",
      "twelfth_ch_Oliver_nv",
      "twelfth_ch_Quebec_nv",
      "twelfth_ch_Romanov_nv",
      "twelfth_ch_Schultz_nv",
      "twelfth_ch_Shen_nv",
      "twelfth_ch_Sand_nv",
      "twelfth_ch_Sammy_nv",
      "twelfth_ch_Skynyrd_nv",
      "twelfth_ch_Simmons_nv",
      "twelfth_ch_Styx_nv",
      "twelfth_ch_Walker_nv",
      "twelfth_ch_Waylen_nv",
      "twelfth_ch_Wilson_nv",
      "twelfth_ch_Wolffe_nv",
      "twelfth_pilot_ch_base",
      "twelfth_pilot_ch_penquite",
      "twelfth_pilot_ch_rich"
    };
    requiredAddons[]= {
      "A3_Armor_F_Beta",
      "A3_Soft_F",
      "OPTRE_Vehicles_M494"
    };
  };
};

class CfgWeapons {
  class H_HelmetB;
  class ItemInfo;
  class HeadgearItem;

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

  //-STANDARD-------------------------------------------------------
  CUSTOM_HELM_S_AV(Aurora)
  CUSTOM_HELM_S_AV(Bert)
  CUSTOM_HELM_S_AV(Bobby)
  CUSTOM_HELM_S_AV(Bretek)
  CUSTOM_HELM_S_AV(Broad)
  CUSTOM_HELM_S_AV(Bunge)
  CUSTOM_HELM_S_AV(Burns)
  CUSTOM_HELM_S_AV(Coady)
  CUSTOM_HELM_S_AV(Dennis)
  CUSTOM_HELM_S_AV(Dom)
  CUSTOM_HELM_S_AV(Dras)
  CUSTOM_HELM_S_AV(Gallegos)
  CUSTOM_HELM_S_AV(Galvin)
  CUSTOM_HELM_S_AV(Geoff)
  CUSTOM_HELM_S_AV(Griffin)
  CUSTOM_HELM_S_AV(Gaunt)
  CUSTOM_HELM_S_AV(Kasper)
  CUSTOM_HELM_S_AV(Kiens)
  CUSTOM_HELM_S_AV(LeDoux)
  CUSTOM_HELM_S_AV(Link)
  CUSTOM_HELM_S_AV(Luerssen)
  CUSTOM_HELM_S_AV(Moss)
  CUSTOM_HELM_S_AV(Obi)
  CUSTOM_HELM_S_AV(Oliver)
  CUSTOM_HELM_S_AV(Quebec)
  CUSTOM_HELM_S_AV(Romanov)
  CUSTOM_HELM_S_AV(Schultz)
  CUSTOM_HELM_S_AV(Shen)
  CUSTOM_HELM_S_AV(Sand)
  CUSTOM_HELM_S_AV(Sammy)
  CUSTOM_HELM_S_AV(Skynyrd)
  CUSTOM_HELM_S_AV(Simmons)
  CUSTOM_HELM_S_AV(Spector)
  CUSTOM_HELM_S_AV(Styx)
  CUSTOM_HELM_S_AV(Walker)
  CUSTOM_HELM_S_AV(Waylen)
  CUSTOM_HELM_S_AV(Wilson)
  CUSTOM_HELM_S_AV(Wolffe)

  //-PILOTS---------------------------------------------------------

  /*
    Adding Custom pilot helms:
    The main macro used here is this:
    CUSTOM_PILOT_HELM(SUFFIX,DISPLAY,C1,C2,C3,C4,C5)
    Input:
      * SUFFIX:
        Class name suffix. This macro creates a new class in the config
        that follows this format: twelfth_pilot_ch_[SUFFIX]. Keep these suffixes unique.
      * DISPLAY:
        Display text, in quotes. This value gets shown in the ACE arsenal.
      * C1 up to C5:
        These are the category values that are to be used in loading textures.
        The model used for these helmets requires 5 texture paths.
        These texture paths would look something like this:
          \base\folder\Addons_co.paa
          \base\folder\EXT_co.paa
          \base\folder\INT_co.paa
          \base\folder\MID_co.paa
          \base\folder\Visor_co.paa

        Basically, these macro input variables designate the folder
        in which to look for a specific pilot helmet texture, something like:
          \data\pilots\[C1]\Addons_co.paa
          \data\pilots\[C2]\EXT_co.paa
          \data\pilots\[C3]\INT_co.paa
          \data\pilots\[C4]\MID_co.paa
          \data\pilots\[C5]\Visor_co.paa

    Additionally, don't forget to add the newly created class name
    to the 'Units' array at the top of this file, in this format:
    twelfth_pilot_ch_[SUFFIX]
  */

  CUSTOM_PILOT_HELM(penquite, "[twelfth][Pilot][Customs] Penquite",penquite,penquite,default,default,default)
  CUSTOM_PILOT_HELM(rich,     "[twelfth][Pilot][Customs] Rich",rich,rich,default,default,default)
};

class XtdGearModels {
  class CfgWeapons {
    class twelfth_custom_helms {
      label="twelfth Custom Infantry Helmets";
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
          "Bunge",
          "Coady",
          "Dennis",
          "Dom",
          "Dras",
          "Gallegos",
          "Galvin",
          "Geoff",
          "Griffin",
          "Gaunt",
          "Kasper",
          "Kiens",
          "LeDoux",
          "Link",
          "Luerssen",
          "Moss",
          "Obi",
          "Oliver",
          "Quebec",
          "Romanov",
          "Schultz",
          "Shen",
          "Sand",
          "Sammy",
          "Skynyrd",
          "Simmons",
          "Spector",
          "Styx",
          "Walker",
          "Waylen",
          "Wilson",
          "Wolffe",
        };
      };
    };
  };
};

class XtdGearInfos {
  class CfgWeapons {
    CH_HELM_S_GI(Aurora)
    CH_HELM_S_GI(Bert)
    CH_HELM_S_GI(Bobby)
    CH_HELM_S_GI(Bretek)
    CH_HELM_S_GI(Broad)
    CH_HELM_S_GI(Burns)
    CH_HELM_S_GI(Bunge)
    CH_HELM_S_GI(Coady)
    CH_HELM_S_GI(Dennis)
    CH_HELM_S_GI(Dom)
    CH_HELM_S_GI(Dras)
    CH_HELM_S_GI(Gallegos)
    CH_HELM_S_GI(Galvin)
    CH_HELM_S_GI(Geoff)
    CH_HELM_S_GI(Griffin)
    CH_HELM_S_GI(Gaunt)
    CH_HELM_S_GI(Kasper)
    CH_HELM_S_GI(Kiens)
    CH_HELM_S_GI(LeDoux)
    CH_HELM_S_GI(Link)
    CH_HELM_S_GI(Luerssen)
    CH_HELM_S_GI(Mitchell)
    CH_HELM_S_GI(Moss)
    CH_HELM_S_GI(Obi)
    CH_HELM_S_GI(Oliver)
    CH_HELM_S_GI(Quebec)
    CH_HELM_S_GI(Romanov)
    CH_HELM_S_GI(Schultz)
    CH_HELM_S_GI(Shen)
    CH_HELM_S_GI(Sand)
    CH_HELM_S_GI(Sammy)
    CH_HELM_S_GI(Skynyrd)
    CH_HELM_S_GI(Simmons)
    CH_HELM_S_GI(Spector)
    CH_HELM_S_GI(Styx)
    CH_HELM_S_GI(Walker)
    CH_HELM_S_GI(Waylen)
    CH_HELM_S_GI(Wilson)
    CH_HELM_S_GI(Wolffe)
  };
};
