/*
  ==============================================================================
  config_macros.hpp

  This file contains:
    - Basic macros for backpack capacity (BP_MAXLOAD) and mass (BP_MASS).
    - Path macros (BP_TEXPATH, P, QP).
    - Display name macros (BP_DISP_*).
    - The main macros to generate backpack classes (BACKPACK_ALLTYPES, etc.).
    - XtdGear integration macros (ALL_GI, BACKPACK_GI).

  By using these macros, you can quickly add a new camouflage type by 
  just calling BACKPACK_ALLTYPES(<newCamo>, <DisplayName>) in config.cpp. 
  This drastically reduces repetitive code.
  ==============================================================================
*/

// Set the backpack capacity and weight
#define BP_MAXLOAD 425
#define BP_MASS 60

// Simple path building macros
#define P(PATH) \x\12thMEU\addons\12th_backpacks\##PATH
#define QP(PATH) #P(PATH)

// For extended gear images referencing "xtd_icons\<SFX>.paa"
#define XTP(SFX) QP(xtd_icons\##SFX.paa)

// Macro for texture paths: e.g., \x\12thMEU\addons\12th_backpacks\backpack\<CAMOTYPE>\<FILE>.paa
#define BP_TEXPATH(CAMOTYPE,FILE) \x\12thMEU\addons\12th_backpacks\backpack\##CAMOTYPE\##FILE

// Macros for display names
#define BP_DISP(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack
#define BP_DISP_RTO(DISPLAY_TYPE) [12th][DISPLAY_TYPE][RTO] Backpack
#define BP_DISP_LIGHT(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Light] Backpack
#define BP_DISP_HEAVY(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Heavy] Backpack
#define BP_DISP_MEDIC(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Medic] Backpack

// -----------------------------------------------------------------------------
//  XtdGear Macros
// -----------------------------------------------------------------------------
#define BACKPACK_GI(CAMOTYPE,TYPE) \
class twelfth_backpack_##TYPE##_##CAMOTYPE {  \
  model = "twelfth_backpacks";  \
  camo = #CAMOTYPE; \
  type = #TYPE; \
};  \

// Creates references for each of the 5 types under a given camo
#define ALL_GI(CAMO) \
BACKPACK_GI(CAMO,light) \
BACKPACK_GI(CAMO,na)      \
BACKPACK_GI(CAMO,heavy) \
BACKPACK_GI(CAMO,medic) \
BACKPACK_GI(CAMO,rto) \


// -----------------------------------------------------------------------------
//  Creation of actual backpack classes
// -----------------------------------------------------------------------------
/*
  BACKPACK_ALLTYPES(CAMOTYPE, DISPLAY_TYPE)
  Creates 5 classes:
    1) twelfth_backpack_na_<CAMOTYPE>     -> [12th][DISPLAY_TYPE] Backpack
       (no extra pouches)

    2) twelfth_backpack_light_<CAMOTYPE>  -> [12th][DISPLAY_TYPE][Light] Backpack
       (no pouches, no roll)

    3) twelfth_backpack_heavy_<CAMOTYPE>  -> [12th][DISPLAY_TYPE][Heavy] Backpack
       (pouches + roll)

    4) twelfth_backpack_rto_<CAMOTYPE>    -> [12th][DISPLAY_TYPE][RTO] Backpack
       (radio attached)

    5) twelfth_backpack_medic_<CAMOTYPE>  -> [12th][DISPLAY_TYPE][Medic] Backpack
       (uses medic_ca.paa for the texture)

  Each backpack inherits from twelfth_backpack_base and sets hiddenSelectionsTextures
  accordingly to show/hide certain pouches or rolls.
*/
#define BACKPACK_ALLTYPES(CAMOTYPE, DISPLAY_TYPE)                          \
class twelfth_backpack_na_##CAMOTYPE : twelfth_backpack_base {                \
  scope=2;                                                                 \
  scopeArsenal=2;                                                          \
  displayName=#BP_DISP(DISPLAY_TYPE);                                      \
  hiddenSelectionsTextures[]={                                             \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    "",                                                                    \
    ""                                                                     \
  };                                                                       \
};                                                                         \
class twelfth_backpack_light_##CAMOTYPE : twelfth_backpack_base {          \
  scope=2;                                                                 \
  scopeArsenal=2;                                                          \
  displayName=#BP_DISP_LIGHT(DISPLAY_TYPE);                                \
  hiddenSelectionsTextures[]={                                             \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    "",                                                                    \
    "",                                                                    \
    ""                                                                     \
  };                                                                       \
};                                                                         \
class twelfth_backpack_heavy_##CAMOTYPE : twelfth_backpack_base {          \
  scope=2;                                                                 \
  scopeArsenal=2;                                                          \
  displayName=#BP_DISP_HEAVY(DISPLAY_TYPE);                                \
  hiddenSelectionsTextures[]={                                             \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    ""                                                                     \
  };                                                                       \
};                                                                         \
class twelfth_backpack_rto_##CAMOTYPE : twelfth_backpack_base {            \
  scope=2;                                                                 \
  scopeArsenal=2;                                                          \
  displayName=#BP_DISP_RTO(DISPLAY_TYPE);                                  \
  hiddenSelectionsTextures[]={                                             \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                                     \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa)                                      \
  };                                                                       \
};                                                                         \
class twelfth_backpack_medic_##CAMOTYPE : twelfth_backpack_base {          \
  scope=2;                                                                 \
  scopeArsenal=2;                                                          \
  displayName=#BP_DISP_MEDIC(DISPLAY_TYPE);                                \
  hiddenSelectionsTextures[]={                                             \
    #BP_TEXPATH(CAMOTYPE,medic_ca.paa),                                    \
    #BP_TEXPATH(CAMOTYPE,medic_ca.paa),                                    \
    #BP_TEXPATH(CAMOTYPE,medic_ca.paa),                                    \
    ""                                                                     \
  };                                                                       \
};                                                                         \
