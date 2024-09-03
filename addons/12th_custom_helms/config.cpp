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
    * Rename said texture along this format: "12th_ch_[CAMO]_[NAME].paa".
      I will note that the standard brown camo variant used here does not have
      a CAMO prefix and it is therefore ommited from the filename
    * Put the helmet texture into "addons/12th_custom_helms/data/helms".

  Config update step:
    * Add in "12th_ch_[CAMO]_[NAME]" into the weapons[] array below.
    * Add in "12th_ch_[CAMO]_[NAME]_nv" into the weapons[] array below.
    * Add in a CUSTOM_HELM_S_AV([NAME]) macro call, along
      with the other macro calls below.
    * Add in an entry into the XtdGearModels->CfgWeapons->12th_custom_helms->member
      array that goes like "[NAME]", below.
    * Add in a CH_HELM_S_GI([NAME]) macro call into XtdGearInfos->CfgWeapons block.
*/

class CfgPatches {
  class 12th_custom_helms {
    units[] = {};
    weapons[] = {
      "12th_custom_helm_base",
      "12th_ch_Alek",
      "12th_ch_Atom",
      "12th_ch_Aurora",
      "12th_ch_Barley",
      "12th_ch_Bert",
      "12th_ch_Bess",
      "12th_ch_Bretek",
      "12th_ch_Broad",
      "12th_ch_Burns",
      "12th_ch_Bunge",
      "12th_ch_Cain",
      "12th_ch_Coady",
      "12th_ch_Cole",
      "12th_ch_Dixie",
      "12th_ch_Dom",
      "12th_ch_Dras",
      "12th_ch_Fenix",
      "12th_ch_Fox",
      "12th_ch_Gallegos",
      "12th_ch_Galvin",
      "12th_ch_Geoff",
      "12th_ch_Gepard",
      "12th_ch_Griffin",
      "12th_ch_Holiday",
      "12th_ch_Kasper",
      "12th_ch_Kelp",
      "12th_ch_Kemble",
      "12th_ch_Kiens",
      "12th_ch_King",
      "12th_ch_LeDoux",
      "12th_ch_Link",
      "12th_ch_Louie",
      "12th_ch_Luerssen",
      "12th_ch_Mitchell",
      "12th_ch_Moss",
      "12th_ch_Neo",
      "12th_ch_Obi",
      "12th_ch_OConnell",
      "12th_ch_Oliver",
      "12th_ch_Pandem",
      "12th_ch_Parker",
      "12th_ch_Quebec",
      "12th_ch_Romanov",
      "12th_ch_Schultz",
      "12th_ch_Shen",
      "12th_ch_Sine",
      "12th_ch_Sammy",
      "12th_ch_Skynyrd",
      "12th_ch_Simmons",
      "12th_ch_Smith",
      "12th_ch_Speirs",
      "12th_ch_Styx",
      "12th_ch_Walker",
      "12th_ch_Waylen",
      "12th_ch_Wilson",
      "12th_ch_Wolffe",
      "12th_ch_Alek_nv",
      "12th_ch_Atom_nv",
      "12th_ch_Aurora_nv",
      "12th_ch_Barley_nv",
      "12th_ch_Bert_nv",
      "12th_ch_Bess_nv",
      "12th_ch_Bretek_nv",
      "12th_ch_Broad_nv",
      "12th_ch_Bunge_nv",
      "12th_ch_Burns_nv",
      "12th_ch_Cain_nv",
      "12th_ch_Coady_nv",
      "12th_ch_Cole_nv",
      "12th_ch_Dixie_nv",
      "12th_ch_Dom_nv",
      "12th_ch_Dras_nv",
      "12th_ch_Fenix_nv",
      "12th_ch_Fox_nv",
      "12th_ch_Gallegos_nv",
      "12th_ch_Galvin_nv",
      "12th_ch_Geoff_nv",
      "12th_ch_Griffin_nv",
      "12th_ch_Holiday_nv",
      "12th_ch_Kasper_nv",
      "12th_ch_Kelp_nv",
      "12th_ch_Kemble_nv",
      "12th_ch_Kiens_nv",
      "12th_ch_King_nv",
      "12th_ch_LeDoux_nv",
      "12th_ch_Link_nv",
      "12th_ch_Louie_nv",
      "12th_ch_Luerssen_nv",
      "12th_ch_Mitchell_nv",
      "12th_ch_Moss_nv",
      "12th_ch_Neo_nv",
      "12th_ch_Obi_nv",
      "12th_ch_OConnell_nv",
      "12th_ch_Oliver_nv",
      "12th_ch_Pandem_nv",
      "12th_ch_Parker_nv",
      "12th_ch_Quebec_nv",
      "12th_ch_Romanov_nv",
      "12th_ch_Schultz_nv",
      "12th_ch_Shen_nv",
      "12th_ch_Sine_nv",
      "12th_ch_Sammy_nv",
      "12th_ch_Skynyrd_nv",
      "12th_ch_Simmons_nv",
      "12th_ch_Smith_nv",
      "12th_ch_Speirs_nv",
      "12th_ch_Styx_nv",
      "12th_ch_Walker_nv",
      "12th_ch_Waylen_nv",
      "12th_ch_Wilson_nv",
      "12th_ch_Wolffe_nv",
      "12th_pilot_ch_base",
      "12th_pilot_ch_penquite",
      "12th_pilot_ch_rich"
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

  class 12th_custom_helm_base : H_HelmetB {
    scope=0;
    scopeArsenal=0;
    author="Kelp";
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
  CUSTOM_HELM_S_AV(Alek)
  CUSTOM_HELM_S_AV(Atom)
  CUSTOM_HELM_S_AV(Aurora)
  CUSTOM_HELM_S_AV(Barley)
  CUSTOM_HELM_S_AV(Bert)
  CUSTOM_HELM_S_AV(Bess)
  CUSTOM_HELM_S_AV(Bobby)
  CUSTOM_HELM_S_AV(Bretek)
  CUSTOM_HELM_S_AV(Broad)
  CUSTOM_HELM_S_AV(Bunge)
  CUSTOM_HELM_S_AV(Burns)
  CUSTOM_HELM_S_AV(Cain)
  CUSTOM_HELM_S_AV(Coady)
  CUSTOM_HELM_S_AV(Cole)
  CUSTOM_HELM_S_AV(Dixie)
  CUSTOM_HELM_S_AV(Dom)
  CUSTOM_HELM_S_AV(Dras)
  CUSTOM_HELM_S_AV(Fenix)
  CUSTOM_HELM_S_AV(Fox)
  CUSTOM_HELM_S_AV(Gallegos)
  CUSTOM_HELM_S_AV(Galvin)
  CUSTOM_HELM_S_AV(Geoff)
  CUSTOM_HELM_S_AV(Griffin)
  CUSTOM_HELM_S_AV(Holiday)
  CUSTOM_HELM_S_AV(Kasper)
  CUSTOM_HELM_S_AV(Kelp)
  CUSTOM_HELM_S_AV(Kemble)
  CUSTOM_HELM_S_AV(Kiens)
  CUSTOM_HELM_S_AV(King)
  CUSTOM_HELM_S_AV(LeDoux)
  CUSTOM_HELM_S_AV(Link)
  CUSTOM_HELM_S_AV(Louie)
  CUSTOM_HELM_S_AV(Luerssen)
  CUSTOM_HELM_S_AV(Mitchell)
  CUSTOM_HELM_S_AV(Moss)
  CUSTOM_HELM_S_AV(Neo)
  CUSTOM_HELM_S_AV(Obi)
  CUSTOM_HELM_S_AV(OConnell)
  CUSTOM_HELM_S_AV(Oliver)
  CUSTOM_HELM_S_AV(Pandem)
  CUSTOM_HELM_S_AV(Parker)
  CUSTOM_HELM_S_AV(Quebec)
  CUSTOM_HELM_S_AV(Romanov)
  CUSTOM_HELM_S_AV(Schultz)
  CUSTOM_HELM_S_AV(Shen)
  CUSTOM_HELM_S_AV(Sine)
  CUSTOM_HELM_S_AV(Sammy)
  CUSTOM_HELM_S_AV(Skynyrd)
  CUSTOM_HELM_S_AV(Simmons)
  CUSTOM_HELM_S_AV(Smith)
  CUSTOM_HELM_S_AV(Spector)
  CUSTOM_HELM_S_AV(Speirs)
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
        that follows this format: 12th_pilot_ch_[SUFFIX]. Keep these suffixes unique.
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
    12th_pilot_ch_[SUFFIX]
  */

  CUSTOM_PILOT_HELM(penquite, "[12th][Pilot][Customs] Penquite",penquite,penquite,default,default,default)
  CUSTOM_PILOT_HELM(rich,     "[12th][Pilot][Customs] Rich",rich,rich,default,default,default)
};

class XtdGearModels {
  class CfgWeapons {
    class 12th_custom_helms {
      label="12th Custom Infantry Helmets";
      options[]= {"visor","camo","member"};
      class camo {
        alwaysSelectable=1;
        label="Camouflage";
        values[]={"std","win"};
        class std {label="Standard";};
        class win {label="Winter";};
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
          "Alek",
          "Atom",
          "Aurora",
          "Barley",
          "Bert",
          "Bess",
          "Bobby",
          "Bretek",
          "Broad",
          "Burns",
          "Bunge",
          "Cain",
          "Coady",
          "Cole",
          "Dixie",
          "Dom",
          "Dras",
          "Fenix",
          "Fox",
          "Gallegos",
          "Galvin",
          "Geoff",
          "Gepard",
          "Griffin",
          "Holiday",
          "Kasper",
          "Kelp",
          "Kemble",
          "Kiens",
          "King",
          "LeDoux",
          "Link",
          "Louie",
          "Luerssen",
          "Mitchell",
          "Moss",
          "Neo",
          "OConnell",
          "Obi",
          "Oliver",
          "Pandem",
          "Parker",
          "Quebec",
          "Romanov",
          "Schultz",
          "Shen",
          "Sine",
          "Sammy",
          "Skynyrd",
          "Simmons",
          "Smith",
          "Spector",
          "Speirs",
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
    CH_HELM_S_GI(Alek)
    CH_HELM_S_GI(Atom)
    CH_HELM_S_GI(Aurora)
    CH_HELM_S_GI(Barley)
    CH_HELM_S_GI(Bert)
    CH_HELM_S_GI(Bess)
    CH_HELM_S_GI(Bobby)
    CH_HELM_S_GI(Bretek)
    CH_HELM_S_GI(Broad)
    CH_HELM_S_GI(Burns)
    CH_HELM_S_GI(Bunge)
    CH_HELM_S_GI(Cain)
    CH_HELM_S_GI(Coady)
    CH_HELM_S_GI(Cole)
    CH_HELM_S_GI(Dixie)
    CH_HELM_S_GI(Dom)
    CH_HELM_S_GI(Dras)
    CH_HELM_S_GI(Fenix)
    CH_HELM_S_GI(Fox)
    CH_HELM_S_GI(Gallegos)
    CH_HELM_S_GI(Galvin)
    CH_HELM_S_GI(Geoff)
    CH_HELM_S_GI(Gepard)
    CH_HELM_S_GI(Griffin)
    CH_HELM_S_GI(Holiday)
    CH_HELM_S_GI(Kasper)
    CH_HELM_S_GI(Kelp)
    CH_HELM_S_GI(Kemble)
    CH_HELM_S_GI(Kiens)
    CH_HELM_S_GI(King)
    CH_HELM_S_GI(LeDoux)
    CH_HELM_S_GI(Link)
    CH_HELM_S_GI(Louie)
    CH_HELM_S_GI(Luerssen)
    CH_HELM_S_GI(Mitchell)
    CH_HELM_S_GI(Moss)
    CH_HELM_S_GI(Neo)
    CH_HELM_S_GI(Obi)
    CH_HELM_S_GI(OConnell)
    CH_HELM_S_GI(Oliver)
    CH_HELM_S_GI(Pandem)
    CH_HELM_S_GI(Parker)
    CH_HELM_S_GI(Quebec)
    CH_HELM_S_GI(Romanov)
    CH_HELM_S_GI(Schultz)
    CH_HELM_S_GI(Shen)
    CH_HELM_S_GI(Sine)
    CH_HELM_S_GI(Sammy)
    CH_HELM_S_GI(Skynyrd)
    CH_HELM_S_GI(Simmons)
    CH_HELM_S_GI(Smith)
    CH_HELM_S_GI(Spector)
    CH_HELM_S_GI(Speirs)
    CH_HELM_S_GI(Styx)
    CH_HELM_S_GI(Walker)
    CH_HELM_S_GI(Waylen)
    CH_HELM_S_GI(Wilson)
    CH_HELM_S_GI(Wolffe)
  };
};
