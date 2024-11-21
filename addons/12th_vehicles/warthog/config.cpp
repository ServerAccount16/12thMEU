#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"
#include "spawn_info.hpp"

class CfgPatches {
  class twelfth_vehicles_warthogs {
    units[] = {
      "twelfth_warthog_fav",
      "twelfth_warthog_fav_apc",
      "twelfth_warthog_fav_medical",
      "twelfth_warthog_tt",
      "twelfth_warthog_mg",
      "twelfth_warthog_atgm",
      "twelfth_warthog_gauss",
      "twelfth_warthog_mlms",
    };
    requiredVersion = 0.1;
  };
};

class CfgVehicles {
  // warthog base classes
  class OPTRE_M12_FAV_APC;
  class OPTRE_M12_FAV_APC_MED;
  class OPTRE_M12_FAV;
  class OPTRE_M12_LRV;
  class OPTRE_M12A1_LRV;
  class OPTRE_M813_TT;
  class OPTRE_M12G1_LRV;
  class OPTRE_M12R_AA;
  class SAG6_M12_MLMS;


  class twelfth_warthog_fav: OPTRE_M12_FAV {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog FAV";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo_doors"};
    hiddenSelectionsTextures[]= {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", 
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", 
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa",
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1
    };
    WARTHOG_SP_INFO(0,FAV)
  };

  class twelfth_warthog_fav_apc: OPTRE_M12_FAV_APC {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog APC";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    // NOTE: the police texture here would look too weird
    class TextureSources {
      WARTHOG_TEX_STD_V1_APC
    };
    WARTHOG_SP_INFO(1,APC)
  };

  class twelfth_warthog_fav_medical: OPTRE_M12_FAV_APC_MED {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog Medical";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_MED
    };
    WARTHOG_SP_INFO(2,Medical APC)
  };

  class twelfth_warthog_tt: OPTRE_M813_TT {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog TT";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    // NOTE: the police texture here would look too weird
    class TextureSources {
      WARTHOG_TEX_STD_V1_APC
    };
    WARTHOG_SP_INFO(3,Troop Transport)
  };

  class twelfth_warthog_mg: OPTRE_M12_LRV {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog MG";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo_doors"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M12
    };
    WARTHOG_SP_INFO(4,MG)
  };

  class twelfth_warthog_atgm: OPTRE_M12A1_LRV {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog ATGM";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo_doors"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M12
    };
    WARTHOG_SP_INFO(5,ATGM)
  };

  class twelfth_warthog_gauss: OPTRE_M12G1_LRV {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog Gauss";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4", "camo_doors"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M68
    };
    WARTHOG_SP_INFO(6,Gauss)
  };

  class twelfth_warthog_aa: OPTRE_M12R_AA {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog AA";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4", "camo_doors"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M79
    };
    WARTHOG_SP_INFO(7,AA)
  };

  class twelfth_warthog_mlms: SAG6_M12_MLMS {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog MLMS";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4", "camo_doors"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M79
    };
    WARTHOG_SP_INFO(8,MLMS)
  };

};