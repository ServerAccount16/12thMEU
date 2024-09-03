// NOTE: This file configures various 12th MEU vehicles, including Warthogs, Scorpions, Oryx, HEMTT, Marshall, Stomper, Lynx, and Tempest. 
// The macros and configurations reduce redundancy and maintain consistency across different vehicle setups.

#pragma hemtt suppress pw3_padded_arg config
#include "spawn_info.hpp"
#include "config_macros.hpp"

class CfgPatches {
  class 12th_vehicles {
    units[] = {
      "12th_warthog_fav",
      "12th_warthog_fav_apc",
      "12th_warthog_fav_medical",
      "12th_warthog_tt",
      "12th_warthog_mg",
      "12th_warthog_atgm",
      "12th_warthog_gauss",
      "12th_warthog_mlms",
      "12th_scorpion",
      "12th_scorpion_m",
      "12th_oryx",
      "12th_hemtt",
      "12th_hemtt_transport",
      "12th_hemtt_container",
      "12th_hemtt_repair",
      "12th_hemtt_ammo",
      "12th_hemtt_fuel",
      "12th_hemtt_medical",
      "12th_hemtt_covered",
      "12th_hemtt_flatbed",
      "12th_marshall",
      "12th_stomper",
      "12th_stomper_rcws",
      "12th_lynx",
      "12th_tempest_transport",
      "12th_tempest_transport_covered",
      "12th_tempest_repair",
      "12th_tempest_ammo",
      "12th_tempest_fuel",
      "12th_tempest_medical",
      "12th_tempest_device"
    };
    weapons[] = {};
    requiredVersion = 0.1;
  };
};

class CfgVehicles {

  // Base classes for different vehicle types
  class OPTRE_M12_FAV_APC;
  class OPTRE_M12_FAV_APC_MED;
  class OPTRE_M12_FAV;
  class OPTRE_M12_LRV;
  class OPTRE_M12A1_LRV;
  class OPTRE_M813_TT;
  class OPTRE_M12G1_LRV;
  class OPTRE_M12R_AA;
  class SAG6_M12_MLMS;
  class OPTRE_M808B_UNSC;
  class OPTRE_M808BM_UNSC;
  class OPTRE_M494;
  class B_Truck_01_mover_F;
  class B_Truck_01_transport_F;
  class B_Truck_01_box_F;
  class B_Truck_01_Repair_F;
  class B_Truck_01_ammo_F;
  class B_Truck_01_fuel_F;
  class B_Truck_01_medical_F;
  class B_Truck_01_covered_F;
  class B_Truck_01_flatbed_F;
  class Turrets;
  class MainTurret;
  class B_APC_Wheeled_01_cannon_F;
  class B_UGV_01_F;
  class B_UGV_01_rcws_F;
  class I_LT_01_cannon_F;
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Truck_03_repair_F;
  class O_Truck_03_ammo_F;
  class O_Truck_03_fuel_F;
  class O_Truck_03_medical_F;
  class O_Truck_03_device_F;

  // WARTHOGS ---------------------------------------------------------
  #define WARTHOG_BASE(CLASS_NAME, BASE_CLASS, DISPLAY_NAME, CAMO_SELECTIONS, TEXTURE_ARRAY, INFO_MACRO) \
  class CLASS_NAME: BASE_CLASS { \
    scope=2; \
    scopeCurator=2; \
    author="Kelp"; \
    displayName=DISPLAY_NAME; \
    vehicleClass="OPTRE_UNSC_Vehicle_class"; \
    faction="12th_MEU"; \
    editorCategory="12th_MEU"; \
    editorSubcategory="12th_MEU_Cars"; \
    hiddenSelections[]= CAMO_SELECTIONS; \
    hiddenSelectionsTextures[]= TEXTURE_ARRAY; \
    class TextureSources { \
      WARTHOG_TEX_STD_V1 \
      WARTHOG_TEX_STD_V2 \
      WARTHOG_TEX_STD_V3 \
      WARTHOG_TEX_FLAMES \
      WARTHOG_TEX_POLICE \
      WARTHOG_TEX_WINTER \
      WARTHOG_TEX_WINTER_V2 \
      WARTHOG_TEX_WINTER_V3 \
    }; \
    INFO_MACRO \
  };

  WARTHOG_BASE(12th_warthog_fav, OPTRE_M12_FAV, "[12th] Warthog FAV", 
    {"camo1", "camo2"}, 
    {"\x\12thMEUAssets\addons\12th_vehicles\warthog\default\body_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\under_co.paa"}, 
    WARTHOG_SP_INFO(0, FAV))

  WARTHOG_BASE(12th_warthog_fav_apc, OPTRE_M12_FAV_APC, "[12th] Warthog APC", 
    {"camo1", "camo2", "camo3", "camo4"}, 
    {"\x\12thMEUAssets\addons\12th_vehicles\warthog\default\body_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\under_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\troop_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\apc_co.paa"}, 
    WARTHOG_SP_INFO(1, APC))

  WARTHOG_BASE(12th_warthog_fav_medical, OPTRE_M12_FAV_APC_MED, "[12th] Warthog Medical", 
    {"camo1", "camo2", "camo3", "camo4"}, 
    {"\x\12thMEUAssets\addons\12th_vehicles\warthog\default\body_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\under_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\troop_co.paa", "\x\12thMEUAssets\addons\12th_vehicles\warthog\medical\apc_co.paa"}, 
    WARTHOG_SP_INFO(2, Medical APC))

  // Other Warthog variants (MG, ATGM, Gauss, AA, MLMS) can follow the same pattern...

  // SCORPIONS -------------------------------------------------------
  #define SCORPION_BASE(CLASS_NAME, BASE_CLASS, DISPLAY_NAME, INFO_MACRO) \
  class CLASS_NAME: BASE_CLASS { \
    scope=2; \
    scopeCurator=2; \
    author="Kelp"; \
    displayName=DISPLAY_NAME; \
    faction="12th_MEU"; \
    editorCategory="12th_MEU"; \
    editorSubcategory="12th_MEU_Armor"; \
    hiddenSelections[]= { \
      "camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "camo7" \
    }; \
    SCORPION_TEXTURESET \
    INFO_MACRO \
  };

  SCORPION_BASE(12th_scorpion, OPTRE_M808B_UNSC, "[12th] M808B Scorpion MBT", SCORPION_SP_INFO(0, Base))
  SCORPION_BASE(12th_scorpion_m, OPTRE_M808BM_UNSC, "[12th] M808BM Scorpion MBT", SCORPION_SP_INFO(1, MG))

  // ORYX ------------------------------------------------------------
  class 12th_oryx: OPTRE_M494 {
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] M494 Oryx IFV";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Armor";
    ORYX_SP_INFO(0, Base)
    hiddenSelectionsTextures[]= {
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\armor_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\main_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\turret_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\mg_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\decal_co.paa",
      "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\det2_co.paa"
    };
    class TextureSources {
      class 12th_oryx_tex_default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\armor_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\main_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\turret_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\mg_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\decal_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\det2_co.paa"
        };
      };
      class 12th_oryx_tex_winter {
        displayName="Winter";
        author="Gepard";
        textures[]= {
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\armor_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\main_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\turret_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\winter\mg_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\decal_co.paa",
          "\x\12thMEUAssets\addons\12th_vehicles\oryx\default\det2_co.paa"
        };
      };
    };
  };

  // HEMTT -----------------------------------------------------------
  HEMTT_3(1, Base, 12th_hemtt, B_Truck_01_mover_F, "[12th] HEMTT", mprimer_co.paa)
  HEMTT_3(2, Transport, 12th_hemtt_transport, B_Truck_01_transport_F, "[12th] HEMTT Transport", cargo_co.paa)
  HEMTT_4(3, Container, 12th_hemtt_container, B_Truck_01_box_F, "[12th] HEMTT Container", ammo_co.paa, containers_set_co.paa)
  HEMTT_4(4, Repair, 12th_hemtt_repair, B_Truck_01_Repair_F, "[12th] HEMTT Repair", ammo_co.paa, containers_set_co.paa)
  HEMTT_3(5, Ammo, 12th_hemtt_ammo, B_Truck_01_ammo_F, "[12th] HEMTT Ammo", ammo_co.paa)
  HEMTT_3(6, Fuel, 12th_hemtt_fuel, B_Truck_01_fuel_F, "[12th] HEMTT Fuel", fuel_co.paa)
  HEMTT_4(7, Medical, 12th_hemtt_medical, B_Truck_01_medical_F, "[12th] HEMTT Medical", cargo_co.paa, cover_co.paa)
  HEMTT_4(8, Covered, 12th_hemtt_covered, B_Truck_01_covered_F, "[12th] HEMTT Covered", cargo_co.paa, cover_co.paa)
  HEMTT_4(9, Flatbed, 12th_hemtt_flatbed, B_Truck_01_flatbed_F, "[12th] HEMTT Flatbed", ammo_co.paa, cargo_co.paa)

  // MARSHALL --------------------------------------------------------
  class 12th_marshall: B_APC_Wheeled_01_cannon_F {
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] Marshall IFV";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Armor";
    crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
    typicalCargo[]= { "" };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    hiddenSelections[]= {
      "camo1", "camo2", "camo3", "CamoNet", "CamoSlat"
    };
    hiddenSelectionsTextures[]= {
      QP(marshall\default\base_co.paa),
      QP(marshall\default\adds_co.paa),
      QP(marshall\default\tows_co.paa),
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "a3\Armor_F\Data\cage_olive_CO.paa"
    };
    MARSHALL_SP_INFO(0, Base)
    class textureSources {
      class default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          QP(marshall\default\base_co.paa),
          QP(marshall\default\adds_co.paa),
          QP(marshall\default\tows_co.paa),
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "a3\Armor_F\Data\cage_olive_CO.paa"
        };
      };
      class winter {
        displayName="Winter";
        author="Gepard";
        textures[]= {
          QP(marshall\winter\base_co.paa),
          QP(marshall\winter\adds_co.paa),
          QP(marshall\winter\tows_co.paa),
          QP(marshall\winter\camonet_co.paa),
          "a3\Armor_F\Data\cage_olive_CO.paa"
        };
      };
    };
  };

  // STOMPER UGV -----------------------------------------------------
  class 12th_stomper: B_UGV_01_F {
    scope=2;
    scopeCurator=2;
    displayName="[12th] Stomper UGV";
    author="Kelp";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Drones";
    crew="B_UAV_AI";
    typicalCargo[]={""};
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    STOMPER_SP_INFO(0, Base)
    hiddenSelections[]= {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[]= {
      QP(stomper\default\ext_co.paa),
      QP(stomper\default\int_co.paa),
      QP(stomper\default\turret_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          QP(stomper\default\ext_co.paa),
          QP(stomper\default\int_co.paa),
          QP(stomper\default\turret_co.paa)
        };
      };
    };
  };

  class 12th_stomper_rcws: B_UGV_01_rcws_F {
    scope=2;
    scopeCurator=2;
    displayName="[12th] Stomper RCWS";
    author="Kelp";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Drones";
    crew="B_UAV_AI";
    typicalCargo[]={""};
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    STOMPER_SP_INFO(1, RCWS)
    hiddenSelections[]= {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[]= {
      QP(stomper\default\ext_co.paa),
      QP(stomper\default\int_co.paa),
      QP(stomper\default\turret_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          QP(stomper\default\ext_co.paa),
          QP(stomper\default\int_co.paa),
          QP(stomper\default\turret_co.paa)
        };
      };
    };
  };

  // LYNX ------------------------------------------------------------
  class 12th_lynx: I_LT_01_cannon_F {
    side=1;
    scope=2;
    scopeCurator=2;
    author="Kelp";
    displayName="[12th] Lynx";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Armor";
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    LYNX_SP_INFO(0, Base)
    hiddenSelections[]= {"Camo1", "Camo2"};
    hiddenSelectionsTextures[]= {
      QP(lynx\default\main_co.paa),
      QP(lynx\default\cannon_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Gepard";
        textures[]= {
          QP(lynx\default\main_co.paa),
          QP(lynx\default\cannon_co.paa)
        };
      };
    };
  };

  // TEMPEST ---------------------------------------------------------
  TEMPEST_3(1, Transport, 12th_tempest_transport, O_Truck_03_transport_F, "[12th] Tempest Transport", cargo_co.paa)
  TEMPEST_4(2, Covered, 12th_tempest_transport_covered, O_Truck_03_covered_F, "[12th] Tempest Covered", cargo_co.paa, cover_co.paa)
  TEMPEST_3(3, Repair, 12th_tempest_repair, O_Truck_03_repair_F, "[12th] Tempest Repair", ammo_co.paa)
  TEMPEST_4(4, Ammo, 12th_tempest_ammo, O_Truck_03_ammo_F, "[12th] Tempest Ammo", cargo_co.paa, ammo_co.paa)
  TEMPEST_3(5, Fuel, 12th_tempest_fuel, O_Truck_03_fuel_F, "[12th] Tempest Fuel", fuel_co.paa)
  TEMPEST_4(6, Medical, 12th_tempest_medical, O_Truck_03_medical_F, "[12th] Tempest Medical", cargo_co.paa, cover_co.paa)
  TEMPEST_5(7, Device, 12th_tempest_device, O_Truck_03_device_F, "[12th] Tempest Device", cargo_co.paa, cover_co.paa, device03_co.paa)
};

