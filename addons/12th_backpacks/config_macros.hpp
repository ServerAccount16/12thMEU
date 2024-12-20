// Define the maximum load capacity and mass for the backpacks
#define BP_MAXLOAD 425
#define BP_MASS 60

// file pathing stuff
#define P(PATH) \x\12thMEU\addons\12th_backpacks\##PATH
#define QP(PATH) #P(PATH)
#define XTP(SFX) QP(xtd_icons\##SFX.paa)

// Macro to generate the texture path for a given camo type and file
#define BP_TEXPATH(CAMOTYPE,FILE) \x\12thMEU\addons\12th_backpacks\backpack\##CAMOTYPE\##FILE


// Macros to generate display names for different backpack types
#define BP_DISP(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack
#define BP_DISP_RTO(DISPLAY_TYPE) [12th][DISPLAY_TYPE][RTO] Backpack
#define BP_DISP_LIGHT(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Light] Backpack
#define BP_DISP_HEAVY(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Heavy] Backpack 
#define BP_DISP_MEDIC(DISPLAY_TYPE) [12th][DISPLAY_TYPE][Medic] Backpack 

#define BACKPACK_GI(CAMOTYPE,TYPE) \
class twelfth_backpack_##TYPE##_##CAMOTYPE {  \
  model = "twelfth_backpacks";  \
  camo = #CAMOTYPE; \
  type = #TYPE; \
};  \

#define ALL_GI(CAMO) \
BACKPACK_GI(CAMO,light) \
BACKPACK_GI(CAMO,na)      \
BACKPACK_GI(CAMO,heavy) \
BACKPACK_GI(CAMO,medic) \
BACKPACK_GI(CAMO,rto) \


// Macro to generate all backpack variants for a given camo type and display type
// NOTE: DONT GET RID OF THE \'s, THEY ARE NEEDED TO DEFINE A MULTILINE MACRO
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
