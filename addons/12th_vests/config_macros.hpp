// Macros for defining paths, stringifying input, and concatenating tokens.
#define P(PATH) \x\12thMEU\addons\12th_vests\##PATH   // P is used to prepend a path to the given file or directory name.
#define Q(INPUT) #INPUT                              // Q is used to stringify the input.
#define GLUE(A,B) A##B                               // GLUE concatenates two tokens, A and B.

// Definitions for vest mass and maximum load capacity.
#define VEST_MASS 80
#define VEST_MAXLOAD 200

// Macro defining the hitpoint protection information for a vest.
#define VEST_HITPOINT_INFO        \
class HitpointsProtectionInfo {   \
  class Neck {                    \
    hitpointName="HitNeck";       \
    armor=20;                     \
    passThrough=0.30000001;       \
  };                              \
  class Arms {                    \
    hitpointName="HitArms";       \
    armor=10;                     \
    passThrough=0.60000002;       \
  };                              \
  class Chest {                   \
    hitpointName="HitChest";      \
    armor=20;                     \
    passThrough=0.30000001;       \
  };                              \
  class Diaphragm {               \
    hitpointName="HitDiaphragm";  \
    armor=20;                     \
    passThrough=0.30000001;       \
  };                              \
  class Abdomen {                 \
    hitpointName="HitAbdomen";    \
    armor=20;                     \
    passThrough=0.30000001;       \
  };                              \
  class Body {                    \
    hitpointName="HitBody";       \
    passThrough=0.30000001;       \
    armor=20;                     \
  };                              \
  class Legs {                    \
    hitpointName="HitLegs";       \
    armor=10;                     \
    passThrough=0.60000002;       \
  };                              \
};

// Macro for invisible vest item information.
#define INVIS_VEST_ITEM_INFO              \
class ItemInfo: VestItem {                \
  vestType="Rebreather";                  \
  uniformModel = "\halo_marine\null.p3d"; \
  containerClass="12th_vest_supply";      \
  mass=VEST_MASS;                         \
  VEST_HITPOINT_INFO                      \
};

// Macro for generating the path to UNSC Foundries textures.
#define UNSCF_TEXPATH(CAMO,FILE) P(data\unscf_vest\##CAMO\##FILE)

// Macro for defining item info for UNSC Foundries vests.
#define UNSCF_VEST_ITEM_INFO(SEL_SET,CAMO)                           \
class ItemInfo: VestItem {                                           \
  vestType="Rebreather";                                             \
  uniformModel="\19th_H2A_armor\19th_H2A_marines_vests.p3d";         \
  containerClass="12th_vest_supply";                                 \
  mass=VEST_MASS;                                                    \
  hiddenSelections[] = { SEL_SET };                                  \
  hiddenSelectionsTextures[] = {Q(UNSCF_TEXPATH(CAMO,misc_co.paa))}; \
  VEST_HITPOINT_INFO                                                 \
};

// Macro to define a single UNSC Foundries vest.
#define UNSCF_VEST(CNAME,CAMO,SEL_SET,DISPLAY)                      \
class CNAME : 12th_unscf_vest_base {                                \
  scope=2;                                                          \
  scopeArsenal=2;                                                   \
  displayName=DISPLAY;                                              \
  hiddenSelections[]={                                              \
    SEL_SET                                                         \
  };                                                                \
  hiddenSelectionsTextures[]={Q(UNSCF_TEXPATH(CAMO,misc_co.paa))};  \
  UNSCF_VEST_ITEM_INFO(SEL_SET,CAMO)                                \
};

/* Include file containing definitions for selection sets of UNSC Foundries vests. */
#include "unscf_vest_sel.hpp"

/*
Macro to define all possible variants for the UNSC Foundries vests.
This generates multiple classes for each vest variant.
Input:
  * BC - Base class name prefix. All variant class names will start with this value.
  * CAMO - Camo type, corresponding to a folder with textures.
  * BD - Base display name, shown in the arsenal.
*/
#define UNSCF_VEST_ALL_VARIANTS(BC,CAMO,BD)                                                                                           \
UNSCF_VEST(GLUE(BC,_rf)      ,CAMO,RIFLEMAN_BASE_SEL,              Q(GLUE(BD, Rifleman Vest)))                                        \
UNSCF_VEST(GLUE(BC,_rf_l)    ,CAMO,RIFLEMAN_LEG_SEL,               Q(GLUE(BD, Rifleman Vest (Leg Pouches))))                          \
UNSCF_VEST(GLUE(BC,_rf_h)    ,CAMO,RIFLEMAN_HEAVY_SEL,             Q(GLUE(BD, Rifleman Vest (Heavy))))                                \
UNSCF_VEST(GLUE(BC,_rf_hl)   ,CAMO,RIFLEMAN_HEAVY_LEG_SEL,         Q(GLUE(BD, Rifleman Vest (Heavy & Leg Pouches))))                  \
UNSCF_VEST(GLUE(BC,_rf_c)    ,CAMO,RIFLEMAN_CHEST_SEL,             Q(GLUE(BD, Rifleman Vest (Chest Pouches))))                        \
UNSCF_VEST(GLUE(BC,_rf_cl)   ,CAMO,RIFLEMAN_CHEST_LEG_SEL,         Q(GLUE(BD, Rifleman Vest (Chest & Leg Pouches))))                  \
UNSCF_VEST(GLUE(BC,_rf_ch)   ,CAMO,RIFLEMAN_CHEST_HEAVY_SEL,       Q(GLUE(BD, Rifleman Vest (Heavy & Chest Pouches))))                \
UNSCF_VEST(GLUE(BC,_rf_chl)  ,CAMO,RIFLEMAN_CHEST_HEAVY_LEG_SEL,   Q(GLUE(BD, Rifleman Vest (Heavy & Chest & Leg Pouches))))          \
UNSCF_VEST(GLUE(BC,_rf_c2)   ,CAMO,RIFLEMAN_CHEST2_SEL,            Q(GLUE(BD, Rifleman Vest (Partial Chest Pouches))))                \
UNSCF_VEST(GLUE(BC,_rf_c2l)  ,CAMO,RIFLEMAN_CHEST2_LEG_SEL,        Q(GLUE(BD, Rifleman Vest (Partial Chest & Leg Pouches))))          \
UNSCF_VEST(GLUE(BC,_rf_c2h)  ,CAMO,RIFLEMAN_CHEST2_HEAVY_SEL,      Q(GLUE(BD, Rifleman Vest (Heavy & Partial Chest Pouches))))        \
UNSCF_VEST(GLUE(BC,_rf_c2hl) ,CAMO,RIFLEMAN_CHEST2_HEAVY_LEG_SEL,  Q(GLUE(BD, Rifleman Vest (Heavy & Partial Chest & Leg Pouches))))  \
UNSCF_VEST(GLUE(BC,_br)      ,CAMO,BREACHER_BASE_SEL,              Q(GLUE(BD, Breacher Vest)))                                        \
UNSCF_VEST(GLUE(BC,_br_l)    ,CAMO,BREACHER_LEG_SEL,               Q(GLUE(BD, Breacher Vest (Leg Pouches))))                          \
UNSCF_VEST(GLUE(BC,_br_h)    ,CAMO,BREACHER_HEAVY_SEL,             Q(GLUE(BD, Breacher Vest (Heavy))))                                \
UNSCF_VEST(GLUE(BC,_br_hl)   ,CAMO,BREACHER_HEAVY_LEG_SEL,         Q(GLUE(BD, Breacher Vest (Heavy & Leg Pouches))))                  \
UNSCF_VEST(GLUE(BC,_br_c)    ,CAMO,BREACHER_CHEST_SEL,             Q(GLUE(BD, Breacher Vest (Chest Pouches))))                        \
UNSCF_VEST(GLUE(BC,_br_cl)   ,CAMO,BREACHER_CHEST_LEG_SEL,         Q(GLUE(BD, Breacher Vest (Chest & Leg Pouches))))                  \
UNSCF_VEST(GLUE(BC,_br_ch)   ,CAMO,BREACHER_CHEST_HEAVY_SEL,       Q(GLUE(BD, Breacher Vest (Heavy & Chest Pouches))))                \
UNSCF_VEST(GLUE(BC,_br_chl)  ,CAMO,BREACHER_CHEST_HEAVY_LEG_SEL,   Q(GLUE(BD, Breacher Vest (Heavy & Chest & Leg Pouches))))          \
UNSCF_VEST(GLUE(BC,_br_c2)   ,CAMO,BREACHER_CHEST2_SEL,            Q(GLUE(BD, Breacher Vest (Partial Chest Pouches))))                \
UNSCF_VEST(GLUE(BC,_br_c2l)  ,CAMO,BREACHER_CHEST2_LEG_SEL,        Q(GLUE(BD, Breacher Vest (Partial Chest & Leg Pouches))))          \
UNSCF_VEST(GLUE(BC,_br_c2h)  ,CAMO,BREACHER_CHEST2_HEAVY_SEL,      Q(GLUE(BD, Breacher Vest (Heavy & Partial Chest Pouches))))        \
UNSCF_VEST(GLUE(BC,_br_c2hl) ,CAMO,BREACHER_CHEST2_HEAVY_LEG_SEL,  Q(GLUE(BD, Breacher Vest (Heavy & Partial Chest & Leg Pouches))))  \
UNSCF_VEST(GLUE(BC,_gr)      ,CAMO,GRENADIER_BASE_SEL,             Q(GLUE(BD, Grenadier Vest)))                                       \
UNSCF_VEST(GLUE(BC,_gr_l)    ,CAMO,GRENADIER_LEG_SEL,              Q(GLUE(BD, Grenadier Vest (Leg Pouches))))                         \
UNSCF_VEST(GLUE(BC,_gr_h)    ,CAMO,GRENADIER_HEAVY_SEL,            Q(GLUE(BD, Grenadier Vest (Heavy))))                               \
UNSCF_VEST(GLUE(BC,_gr_hl)   ,CAMO,GRENADIER_HEAVY_LEG_SEL,        Q(GLUE(BD, Grenadier Vest (Heavy & Leg Pouches))))                 \
UNSCF_VEST(GLUE(BC,_gr_c)    ,CAMO,GRENADIER_CHEST_SEL,            Q(GLUE(BD, Grenadier Vest (Chest Pouches))))                       \
UNSCF_VEST(GLUE(BC,_gr_cl)   ,CAMO,GRENADIER_CHEST_LEG_SEL,        Q(GLUE(BD, Grenadier Vest (Chest & Leg Pouches))))                 \
UNSCF_VEST(GLUE(BC,_gr_ch)   ,CAMO,GRENADIER_CHEST_HEAVY_SEL,      Q(GLUE(BD, Grenadier Vest (Heavy & Chest Pouches))))               \
UNSCF_VEST(GLUE(BC,_gr_chl)  ,CAMO,GRENADIER_CHEST_HEAVY_LEG_SEL,  Q(GLUE(BD, Grenadier Vest (Heavy & Chest & Leg Pouches))))         \
UNSCF_VEST(GLUE(BC,_gr_c2)   ,CAMO,GRENADIER_CHEST2_SEL,           Q(GLUE(BD, Grenadier Vest (Partial Chest Pouches))))               \
UNSCF_VEST(GLUE(BC,_gr_c2l)  ,CAMO,GRENADIER_CHEST2_LEG_SEL,       Q(GLUE(BD, Grenadier Vest (Partial Chest & Leg Pouches))))         \
UNSCF_VEST(GLUE(BC,_gr_c2h)  ,CAMO,GRENADIER_CHEST2_HEAVY_SEL,     Q(GLUE(BD, Grenadier Vest (Heavy & Partial Chest Pouches))))       \
UNSCF_VEST(GLUE(BC,_gr_c2hl) ,CAMO,GRENADIER_CHEST2_HEAVY_LEG_SEL, Q(GLUE(BD, Grenadier Vest (Heavy & Partial Chest & Leg Pouches)))) \

// Yet again, thank you Kelp for a baseline!