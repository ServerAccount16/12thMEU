#pragma hemtt suppress pw3_padded_arg config
#include "spawn_info.hpp"
#include "config_macros.hpp"


class CfgPatches {
  class twelfth_vehicles {
    units[] = {
      "twelfth_warthog_fav",
      "twelfth_warthog_fav_apc",
      "twelfth_warthog_fav_medical",
      "twelfth_warthog_tt",
      "twelfth_warthog_mg",
      "twelfth_warthog_atgm",
      "twelfth_warthog_gauss",
      "twelfth_warthog_mlms",
      "twelfth_scorpion",
      "twelfth_scorpion_m",
      "twelfth_oryx",
      "twelfth_hemtt",
      "twelfth_hemtt_transport",
      "twelfth_hemtt_container",
      "twelfth_hemtt_repair",
      "twelfth_hemtt_ammo",
      "twelfth_hemtt_fuel",
      "twelfth_hemtt_medical",
      "twelfth_hemtt_covered",
      "twelfth_hemtt_flatbed",
      "twelfth_marshall",
      "twelfth_stomper",
      "twelfth_stomper_rcws",
      "twelfth_lynx",
      "twelfth_tempest_transport",
      "twelfth_tempest_transport_covered",
      "twelfth_tempest_repair",
      "twelfth_tempest_ammo",
      "twelfth_tempest_fuel",
      "twelfth_tempest_medical",
      "twelfth_tempest_device"
    };
    weapons[] = {};
    requiredVersion=0.1;
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

  // scorpion base classes
  class OPTRE_M808B_UNSC;
  class OPTRE_M808BM_UNSC;

  // oryx
  class OPTRE_M494;

  // hemtt base classes
  class B_Truck_01_mover_F;
  class B_Truck_01_transport_F;
  class B_Truck_01_box_F;
  class B_Truck_01_Repair_F;
  class B_Truck_01_ammo_F;
  class B_Truck_01_fuel_F;
  class B_Truck_01_medical_F;
  class B_Truck_01_covered_F;
  class B_Truck_01_flatbed_F;

  // marshall IFV base classes
  class Turrets;
  class MainTurret;
  class B_APC_Wheeled_01_cannon_F;

  // stomper UGV
  class B_UGV_01_F;
  class B_UGV_01_rcws_F;

  // Lynx
  class I_LT_01_cannon_F;

  //-WARTHOGS---------------------------------------------------------

  /*class twelfth_warthog_fav: OPTRE_M12_FAV {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Warthog FAV";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Cars";
    hiddenSelections[]= {"camo1", "camo2"};
    hiddenSelectionsTextures[]= {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1
      WARTHOG_TEX_STD_V2
      WARTHOG_TEX_STD_V3
      WARTHOG_TEX_FLAMES
      WARTHOG_TEX_POLICE
      WARTHOG_TEX_WINTER
      WARTHOG_TEX_WINTER_V2
      WARTHOG_TEX_WINTER_V3
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
      WARTHOG_TEX_STD_V2_APC
      WARTHOG_TEX_STD_V3_APC
      WARTHOG_TEX_FLAMES
      WARTHOG_TEX_WINTER_APC
      WARTHOG_TEX_WINTER_V2_APC
      WARTHOG_TEX_WINTER_V3_APC
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
      "\x\12thMEU\addons\12th_vehicles\warthog\medical\apc_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_MED
      WARTHOG_TEX_STD_V2_MED
      WARTHOG_TEX_STD_V3_MED
      WARTHOG_TEX_FLAMES
      WARTHOG_TEX_WINTER_MED
      WARTHOG_TEX_WINTER_V2_MED
      WARTHOG_TEX_WINTER_V3_MED
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
      WARTHOG_TEX_STD_V2_APC
      WARTHOG_TEX_STD_V3_APC
      WARTHOG_TEX_FLAMES
      WARTHOG_TEX_WINTER_APC
      WARTHOG_TEX_WINTER_V2_APC
      WARTHOG_TEX_WINTER_V3_APC
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
    hiddenSelections[]= {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M12
      WARTHOG_TEX_STD_V2_M12
      WARTHOG_TEX_STD_V3_M12
      WARTHOG_TEX_FLAMES_M12
      WARTHOG_TEX_POLICE_M12
      WARTHOG_TEX_WINTER
      WARTHOG_TEX_WINTER_V2
      WARTHOG_TEX_WINTER_V3
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
    hiddenSelections[]= {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M12
      WARTHOG_TEX_STD_V2_M12
      WARTHOG_TEX_STD_V3_M12
      WARTHOG_TEX_FLAMES_M12
      WARTHOG_TEX_POLICE_M12
      WARTHOG_TEX_WINTER
      WARTHOG_TEX_WINTER_V2
      WARTHOG_TEX_WINTER_V3
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
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M68
      WARTHOG_TEX_STD_V2_M68
      WARTHOG_TEX_STD_V3_M68
      WARTHOG_TEX_FLAMES_M68
      WARTHOG_TEX_POLICE_M68
      WARTHOG_TEX_WINTER_M68
      WARTHOG_TEX_WINTER_V2_M68
      WARTHOG_TEX_WINTER_V3_M68
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
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M79
      WARTHOG_TEX_STD_V2_M79
      WARTHOG_TEX_STD_V3_M79
      WARTHOG_TEX_FLAMES_M79
      WARTHOG_TEX_POLICE_M79
      WARTHOG_TEX_WINTER_M79
      WARTHOG_TEX_WINTER_V2_M79
      WARTHOG_TEX_WINTER_V3_M79
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
    hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
      "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa",
      "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa"
    };
    class TextureSources {
      WARTHOG_TEX_STD_V1_M79
      WARTHOG_TEX_STD_V2_M79
      WARTHOG_TEX_STD_V3_M79
      WARTHOG_TEX_FLAMES_M79
      WARTHOG_TEX_POLICE_M79
      WARTHOG_TEX_WINTER_M79
      WARTHOG_TEX_WINTER_V2_M79
      WARTHOG_TEX_WINTER_V3_M79
    };
    WARTHOG_SP_INFO(8,MLMS)
  };*/ //Waiting on textures

  //-SCORPIONS--------------------------------------------------------

  /*class twelfth_scorpion: OPTRE_M808B_UNSC {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] M808B Scorpion MBT";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Armor";
    hiddenSelections[]= {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7"
    };
    SCORPION_TEXTURESET
    SCORPION_SP_INFO(0,Base)
  };

  class twelfth_scorpion_m: OPTRE_M808BM_UNSC {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] M808BM Scorpion MBT";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Armor";
    hiddenSelections[]= {
      "camo1",
      "camo2",
      "camo3",
      "camo4",
      "camo5",
      "camo6",
      "camo7",
      "camo8"
    };
    SCORPION_TEXTURESET
    SCORPION_SP_INFO(1,MG)
  };*/ // Need replacing by foundries

  //-ORYX-------------------------------------------------------------

  /*class twelfth_oryx: OPTRE_M494 {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] M494 Oryx IFV";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Armor";
    ORYX_SP_INFO(0,Base)
    hiddenSelectionsTextures[]= {
      "\x\12thMEU\addons\12th_vehicles\oryx\default\armor_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\main_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\turret_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\mg_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\decal_co.paa",
      "\x\12thMEU\addons\12th_vehicles\oryx\default\det2_co.paa"
    };
    class TextureSources {
      class twelfth_oryx_tex_default {
        displayName="Default";
        author="Waylen";
        textures[]= {
          "\x\12thMEU\addons\12th_vehicles\oryx\default\armor_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\main_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\turret_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\mg_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\decal_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\det2_co.paa"
        };
      };
      class twelfth_oryx_tex_winter {
        displayName="Winter";
        author="Waylen";
        textures[]= {
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\armor_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\main_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\net_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\turret_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\winter\mg_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\decal_co.paa",
          "\x\12thMEU\addons\12th_vehicles\oryx\default\det2_co.paa"
        };
      };
    };
  };*/ // Waiting on textures

  //-HEMTT------------------------------------------------------------

  HEMTT_3(1,Base,twelfth_hemtt, B_Truck_01_mover_F,"[12th] HEMTT",mprimer_co.paa)
  HEMTT_3(2,Transport,twelfth_hemtt_transport,B_Truck_01_transport_F,"[12th] HEMTT Transport",cargo_co.paa)
  HEMTT_4(3,Container,twelfth_hemtt_container,B_Truck_01_box_F,"[12th] HEMTT Container",ammo_co.paa,containers_set_co.paa)
  HEMTT_4(4,Repair,twelfth_hemtt_repair,B_Truck_01_Repair_F,"[12th] HEMTT Repair", ammo_co.paa,containers_set_co.paa)
  HEMTT_3(5,Ammo,twelfth_hemtt_ammo,B_Truck_01_ammo_F,"[12th] HEMTT Ammo",ammo_co.paa)
  HEMTT_3(6,Fuel,twelfth_hemtt_fuel,B_Truck_01_fuel_F,"[12th] HEMTT Fuel",fuel_co.paa)
  HEMTT_4(7,Medical,twelfth_hemtt_medical,B_Truck_01_medical_F,"[12th] HEMTT Medical",cargo_co.paa,cover_co.paa)
  HEMTT_4(8,Covered,twelfth_hemtt_covered,B_Truck_01_covered_F,"[12th] HEMTT Covered",cargo_co.paa,cover_co.paa)
  HEMTT_4(9,Flatbed,twelfth_hemtt_flatbed,B_Truck_01_flatbed_F,"[12th] HEMTT Flatbed",ammo_co.paa,cargo_co.paa)

  //-MARSHALL---------------------------------------------------------

  /*class twelfth_marshall: B_APC_Wheeled_01_cannon_F {
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Marshall IFV";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Armor";
    crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
    typicalCargo[]= { "" };
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    hiddenSelections[]= {
      "camo1",
      "camo2",
      "camo3",
      "CamoNet",
      "CamoSlat"
    };
    hiddenSelectionsTextures[]={
      QP(marshall\default\base_co.paa),
      QP(marshall\default\adds_co.paa),
      QP(marshall\default\tows_co.paa),
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "a3\Armor_F\Data\cage_olive_CO.paa"
    };
    MARSHALL_SP_INFO(0,Base)
    class textureSources {
      class default {
        displayName="Default";
        author="Waylen";
        textures[] = {
          QP(marshall\default\base_co.paa),
          QP(marshall\default\adds_co.paa),
          QP(marshall\default\tows_co.paa),
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "a3\Armor_F\Data\cage_olive_CO.paa"
        };
      };
      class winter {
        displayName="Winter";
        author="Waylen";
        textures[] = {
          QP(marshall\winter\base_co.paa),
          QP(marshall\winter\adds_co.paa),
          QP(marshall\winter\tows_co.paa),
          QP(marshall\winter\camonet_co.paa),
          "a3\Armor_F\Data\cage_olive_CO.paa"
        };
      };
    };
  };

  //-STOMPER UGV------------------------------------------------------

  class twelfth_stomper: B_UGV_01_F {
    scope=2;
    scopeCurator=2;
    displayName="[12th] Stomper UGV";
    author="Waylen";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Drones";
    crew="B_UAV_AI";
    typicalCargo[]={""};
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    STOMPER_SP_INFO(0,Base)
    hiddenSelections[]={"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[]= {
      QP(stomper\default\ext_co.paa),
      QP(stomper\default\int_co.paa),
      QP(stomper\default\turret_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Waylen";
        textures[]= {
          QP(stomper\default\ext_co.paa),
          QP(stomper\default\int_co.paa),
          QP(stomper\default\turret_co.paa)
        };
      };
      Camouflage=0;
    };
  };

  class twelfth_stomper_rcws: B_UGV_01_rcws_F {
    scope=2;
    scopeCurator=2;
    displayName="[12th] Stomper RCWS";
    author="Waylen";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Drones";
    crew="B_UAV_AI";
    typicalCargo[]={""};
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    STOMPER_SP_INFO(1,RCWS)
    hiddenSelections[]={"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[]= {
      QP(stomper\default\ext_co.paa),
      QP(stomper\default\int_co.paa),
      QP(stomper\default\turret_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Waylen";
        textures[]= {
          QP(stomper\default\ext_co.paa),
          QP(stomper\default\int_co.paa),
          QP(stomper\default\turret_co.paa)
        };
      };
      Camouflage=0;
    };
  };

  // LYNX ------------------------------------------------------------
  class twelfth_lynx: I_LT_01_cannon_F {
    side=1;
    scope=2;
    scopeCurator=2;
    author="Waylen";
    displayName="[12th] Lynx";
    vehicleClass="OPTRE_UNSC_Vehicle_class";
    faction="twelfth_MEU";
    editorCategory="twelfth_MEU";
    editorSubcategory="twelfth_MEU_Armor";
    class TransportItems {};
    class TransportMagazines {};
    class TransportWeapons {};
    LYNX_SP_INFO(0,Base)
    hiddenSelections[]={"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {
      QP(lynx\default\main_co.paa),
      QP(lynx\default\cannon_co.paa)
    };
    class textureSources {
      class default {
        displayName="Default";
        author="Waylen";
        textures[] = {
          QP(lynx\default\main_co.paa),
          QP(lynx\default\cannon_co.paa)
        };
      };
    };
  };

  // TEMPEST ---------------------------------------------------------
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Truck_03_repair_F;
  class O_Truck_03_ammo_F;
  class O_Truck_03_fuel_F;
  class O_Truck_03_medical_F;
  class O_Truck_03_device_F;

  TEMPEST_3(1,Transport,twelfth_tempest_transport,O_Truck_03_transport_F,"[12th] Tempest Transport",cargo_co.paa)
  TEMPEST_4(2,Covered,twelfth_tempest_transport_covered,O_Truck_03_covered_F,"[12th] Tempest Covered",cargo_co.paa,cover_co.paa)
  TEMPEST_3(3,Repair,twelfth_tempest_repair,O_Truck_03_repair_F,"[12th] Tempest Repair",ammo_co.paa)
  TEMPEST_4(4,Ammo,twelfth_tempest_ammo,O_Truck_03_ammo_F,"[12th] Tempest Ammo",cargo_co.paa,ammo_co.paa)
  TEMPEST_3(5,Fuel,twelfth_tempest_fuel,O_Truck_03_fuel_F,"[12th] Tempest Fuel",fuel_co.paa)
  TEMPEST_4(6,Medical,twelfth_tempest_medical,O_Truck_03_medical_F,"[12th] Tempest Medical",cargo_co.paa,cover_co.paa)
  TEMPEST_5(7,Device,twelfth_tempest_device,O_Truck_03_device_F,"[12th] Tempest Device",cargo_co.paa,cover_co.paa,device03_co.paa)*/
}; //Waiting on textures
