#include "config_macros.hpp"

class CfgPatches {
  class 12th_aircraft {
    units[] = {
      "12th_d77_tc_pelican",
      "12th_hornet",
      "12th_falcon_unarmed",
      "12th_falcon_armed",
      "12th_falcon_s_unarmed",
      "12th_falcon_s_armed",
      "12th_sparrowhawk_m",
      "12th_sparrowhawk_l",
      "12th_sparrowhawk_ml",
      "12th_sparrowhawk",
      "12th_wyvern_inf",
      "12th_wyvern_veh",
      "12th_prime",
      "12th_blackfish_inf",
      "12th_blackfish_veh",
      "12th_blackfish_armed"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "A3_Air_F",
      "A3_Air_F_Beta",
      "A3_Weapons_F",
      "OPTRE_Core",
      "OPTRE_Vehicles_Air",
      "Splits_Functions"
    };
  };
};

class CfgVehicles {

  // Base classes from other mods
  class Splits_Pelican_base;
  class OPTRE_UNSC_hornet;
  class OPTRE_UNSC_falcon;
  class OPTRE_UNSC_falcon_armed;
  class OPTRE_UNSC_falcon_S;
  class OPTRE_UNSC_falcon_armed_S;
  class OPTRE_AV22_Sparrowhawk_Base;
  class OPTRE_AV22_Sparrowhawk;
  class OPTRE_AV22A_Sparrowhawk;
  class OPTRE_AV22B_Sparrowhawk;
  class OPTRE_AV22C_Sparrowhawk;
  class O_T_VTOL_02_infantry_dynamicLoadout_F;
  class O_T_VTOL_02_vehicle_dynamicLoadout_F;
  class B_UAV_06_F;
  class B_T_VTOL_01_infantry_F;
  class B_T_VTOL_01_vehicle_F;
  class B_T_VTOL_01_armed_F;
  class MEU_F29_Nandao_VTOL;

  // 12th MEU Pelican
  class 12th_d77_tc_pelican: Splits_Pelican_base {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    vehicleClass = "Air";
    author = "SplitJaw & DemonicOnPC & Kelp & Gepard";
    faction = "12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
    displayName = "[12th] D77-TC Pelican";
    PELICAN_TEXTURESETS
    AIR_SP_INFO(Pelican,0,Troop Transport)
  };

  // 12th MEU Hornet
  class 12th_hornet: OPTRE_UNSC_hornet {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    vehicleClass = "Air";
    author="Kelp";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    displayName="[12th] AV-14 Hornet";
    hiddenSelections[]={"camo1"};
    hiddenSelectionsTextures[]={
      "\x\12thMEUAssets\addons\12th_aircraft\hornet\default\hull_co.paa"
    };
    class textureSources {
      class 12th_hornet_tex_def {
        displayName="Default";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_aircraft\hornet\default\hull_co.paa"
        };
      };
      class 12th_hornet_tex_winter {
        displayName="Winter";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_aircraft\hornet\winter\hull_co.paa"
        };
      };
      class 12th_hornet_tex_cstm_gepard {
        displayName="Custom (Gepard)";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_aircraft\hornet\gepard\hull_co.paa"
        };
      };
    };
    AIR_SP_INFO(Hornet,0,Base)
  };

  // 12th MEU Falcon Variants
  class 12th_falcon_unarmed: OPTRE_UNSC_falcon {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144 Falcon Unarmed";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "attach_gun"};
    AIR_SP_INFO(Falcon,0,Unarmed)
    FALCON_TEXTURESETS
  };

  class 12th_falcon_armed: OPTRE_UNSC_falcon_armed {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144 Falcon Armed";
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    AIR_SP_INFO(Falcon,1,20mm Cannon)
    FALCON_TEXTURESETS
  };

  class 12th_falcon_s_unarmed: OPTRE_UNSC_falcon_S {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144S Falcon Unarmed";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "attach_gun"};
    AIR_SP_INFO(Falcon,2,Unarmed w/ Side Gun)
    FALCON_TEXTURESETS
  };

  class 12th_falcon_s_armed: OPTRE_UNSC_falcon_armed_S {
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] UH-144S Falcon Armed";
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    AIR_SP_INFO(Falcon,3,20mm w/ Side Gun)
    FALCON_TEXTURESETS
  };

  // 12th MEU Sparrowhawk Variants
  class 12th_sparrowhawk_m: OPTRE_AV22_Sparrowhawk {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22M Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseLaser",
      "attach_CannonHeavy"
    };
    AIR_SP_INFO(Sparrowhawk,0,50mm Fixed | Cannon)
    SPARROWHAWK_TEXTURESETS
  };

  class 12th_sparrowhawk_l: OPTRE_AV22A_Sparrowhawk {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22L Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseCannon",
      "attach_CannonLight"
    };
    AIR_SP_INFO(Sparrowhawk,1,30mm Fixed | Laser)
    SPARROWHAWK_TEXTURESETS
  };

  class 12th_sparrowhawk_ml: OPTRE_AV22B_Sparrowhawk {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22ML Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseCannon",
      "attach_CannonHeavy"
    };
    AIR_SP_INFO(Sparrowhawk,2,50mm Fixed | Laser)
    SPARROWHAWK_TEXTURESETS
  };

  class 12th_sparrowhawk: OPTRE_AV22C_Sparrowhawk {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AV-22 Sparrowhawk";
    hiddenSelections[] = {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "attach_Decal1",
      "attach_Decal2",
      "attach_noseLaser",
      "attach_CannonLight"
    };
    AIR_SP_INFO(Sparrowhawk,3,30mm Fixed | Cannon)
    SPARROWHAWK_TEXTURESETS
  };

  // 12th MEU Wyvern Variants
  class 12th_wyvern_inf: O_T_VTOL_02_infantry_dynamicLoadout_F {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AVD-99IT Wyvern";
    hiddenSelections[]={
      "camo_1",
      "camo_2",
      "camo_3",
      "camo_4",
      "camo_5"
    };
    hiddenSelectionsTextures[]= {
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\signs_co.paa"
    };
    class TextureSources {
      class 12th_wyvern_tex_default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
    };
    AIR_SP_INFO(Wyvern,0,Infantry)
  };

  class 12th_wyvern_veh: O_T_VTOL_02_vehicle_dynamicLoadout_F {
    author="Kelp";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    vehicleClass = "Air";
    displayName = "[12th] AVD-99VT Wyvern";
    hiddenSelections[]={
      "camo_1",
      "camo_2",
      "camo_3",
      "camo_4",
      "camo_5"
    };
    hiddenSelectionsTextures[]= {
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
      "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\signs_co.paa"
    };
    class TextureSources {
      class 12th_wyvern_tex_default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_01_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_02_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_l_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\ext_03_r_co.paa",
          "\x\12thMEUAssets\addons\12th_aircraft\wyvern\default\signs_co.paa"
        };
      };
    };
    AIR_SP_INFO(Wyvern,1,Vehicle)
  };

  // 12th MEU Prime UAV
  class 12th_prime: B_UAV_06_F {
    side=1;
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] AL-6 Prime";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Drones";
    crew="B_UAV_AI_F";
    typicalCargo[]={"B_UAV_AI_F"};
    hiddenSelections[]= {"Camo", "Medical"};
    hiddenSelectionsTextures[] = {
      QP(prime\medical\main_co.paa),
      QP(prime\medical\main_co.paa)
    };
    class TextureSources {
      class 12th_prime_tex_default {
        displayname="Default";
        author="Gepard";
        factions[] = {"12th_MEU"};
        textures[]={
          QP(prime\medical\main_co.paa),
          QP(prime\medical\main_co.paa)
        };
      };
    };
    Camouflage=0;
    AIR_SP_INFO(Prime UAV,0,Base)
  };

  // 12th MEU Blackfish Variants
  class 12th_blackfish_inf: B_T_VTOL_01_infantry_F {
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] Blackfish (Infantry)";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,0,Troop Transport)
  };

  class 12th_blackfish_veh: B_T_VTOL_01_vehicle_F {
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] Blackfish (Vehicle)";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,1,Vehicle Transport)
  };

  class 12th_blackfish_armed: B_T_VTOL_01_armed_F {
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] Blackfish (Armed)";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Rotary";
    BLACKFISH_TEXTURESETS
    AIR_SP_INFO(Blackfish,2,Gunship)
  };

  // 12th MEU Nandao
  class 12th_nandao: MEU_F29_Nandao_VTOL {
    scope=2;
    scopeCurator=2;
    author="Weber";
    displayName="[12th] F-29 Nandao";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_FixedWing";
    AIR_SP_INFO(Nandao,0,Base)
  };
};
