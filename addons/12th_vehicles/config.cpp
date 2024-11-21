#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"


class CfgPatches {
  class twelfth_vehicles {
    units[] = {
      "twelfth_stomper",
      "twelfth_stomper_rcws",
    };
    weapons[] = {};
    requiredVersion=0.1;
  };
};

class CfgVehicles {

  // stomper UGV
  class B_UGV_01_F;
  class B_UGV_01_rcws_F;

  //-STOMPER UGV------------------------------------------------------
/*
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
  */

}; 