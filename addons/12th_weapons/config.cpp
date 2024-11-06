#include "config_macros.hpp"
#include "config_ammo.hpp"
#include "config_magazines.hpp"
#include "config_weapons.hpp"

class CfgPatches
{
  class twelfth_weapons
  {
    units[] = {}; // No specific units are associated with this patch
    weapons[] = {"twelfth_M96", "twelfth_M96_LAW_Ready", "twelfth_M96_LAW_Used",
                 "twelfth_M6C", "twelfth_M7_Test", "twelfth_M7_Test_Folded", "twelfth_M90",
                 "twelfth_MA5A_BB", "twelfth_MA5A", "twelfth_MA5A_gl", "twelfth_MA5B",
                 "twelfth_br55", "twelfth_br55_gl", "twelfth_br55_HB", "twelfth_br55_HB_gl",
                 "twelfth_M392", "twelfth_MA37K", "twelfth_BR45", "twelfth_Commando",
                 "twelfth_MMG33_T", "twelfth_M33_t", "twelfth_M247", "twelfth_M319",
                 "twelfth_M319N, twelfth_MA5C, twelfth_MA5CGL"};                                                     // Please add your new weapons to this list
    ammo[] = {"twelfth_20g_bb", "twelfth_95x40_UW", "twelfth_5x23mm_UW", "twelfth_40mmG_HEAT"}; // Please add your new ammo types to this list
    magazines[] = {"twelfth_20g_mag", "twelfth_95x40_100rnd", "twelfth_762x51_200rnd",
                   "twelfth_762x51_200rnd_T", "twelfth_br_36Rnd_UW", "twelfth_m7_60rnd_UW",
                   "twelfth_m7_48rnd_UW", "twelfth_40mm_heat"}; // Please add your new magazines to this list
    requiredVersion = 0.1;
    requiredAddons[] = {"Dmns_Weapons", "OPTRE_Weapons", "Dmns_Weapons_F_MachineGuns",
                        "A3_Weapons_F", "A3_Weapons_F_Exp", "19_UNSC_Weapons"}; // **THIS NEEDS TO BE UPDATED**
  };
};

class CBA_DisposableLaunchers {
    twelfth_m96_READY[] = {"twelfth_m96", "twelfth_m96_USED"};
};