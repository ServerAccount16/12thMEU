#pragma hemtt suppress pw3_padded_arg config

class CfgPatches {
  class 12th_Weapons_Turrets {
    units[] = {
      "12th_Static_M41",
      "12th_Static_Gauss",
      "12th_Static_ATGM",
      "12th_Static_AA",
      "12th_Static_Base_Turret",
      "12th_Static_M41_Ins",
      "12th_Static_AA_Ins",
      "12th_Static_ATGM_Ins",
      "12th_Static_Gauss_CMA",
      "12th_Static_M41_CMA",
      "12th_Static_AA_CMA",
      "12th_Static_ATGM_CMA"
    };
    weapons[] = {};
    ammo[] = {};
    magazines[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "OPTRE_Weapons_Turrets",
      "A3_Weapons_F",
      "A3_Weapons_F_Exp"
    };
  };
};

// Base turret classes from OPTRE
class OPTRE_Static_M41;
class OPTRE_Static_Gauss;
class OPTRE_Static_ATGM;
class OPTRE_Static_AA;
class OPTRE_Static_Base_Turret;
class OPTRE_Static_M41_Ins;
class OPTRE_Static_AA_Ins;
class OPTRE_Static_ATGM_Ins;
class OPTRE_Static_Gauss_Ins;
class OPTRE_Static_Gauss_CMA;
class OPTRE_Static_M41_CMA;
class OPTRE_Static_AA_CMA;
class OPTRE_Static_ATGM_CMA;

// Macro for defining common turret attributes
#define DEFINE_TURRET(CLASSNAME, BASECLASS, DISPLAY, FACTION, CATEGORY, SUBCATEGORY) \
  class CLASSNAME : BASECLASS { \
    scope = 2; \
    scopeCurator = 2; \
    author = "Weber"; \
    displayName = DISPLAY; \
    faction = FACTION; \
    editorCategory = CATEGORY; \
    editorSubcategory = SUBCATEGORY; \
    armor = 200; \
  };

class CfgVehicles {
  // UNSC Turrets
  DEFINE_TURRET(12th_Static_M41, OPTRE_Static_M41, "[12th] M41 LAAG Turret", "12th_MEU", "12th_MEU", "12th_MEU_Turrets")
  DEFINE_TURRET(12th_Static_Gauss, OPTRE_Static_Gauss, "[12th] M41 Gauss Turret", "12th_MEU", "12th_MEU", "12th_MEU_Turrets")
  DEFINE_TURRET(12th_Static_ATGM, OPTRE_Static_ATGM, "[12th] M41 ATGM Turret", "12th_MEU", "12th_MEU", "12th_MEU_Turrets")
  DEFINE_TURRET(12th_Static_AA, OPTRE_Static_AA, "[12th] M41 AA Turret", "12th_MEU", "12th_MEU", "12th_MEU_Turrets")

  // Insurrectionist Turrets
  DEFINE_TURRET(12th_Static_M41_Ins, OPTRE_Static_M41_Ins, "[12th] M41 LAAG Turret (Insurrectionist)", "12th_MEU_Ins", "12th_MEU_Ins", "12th_MEU_INS_Turrets")
  DEFINE_TURRET(12th_Static_Gauss_Ins, OPTRE_Static_Gauss_Ins, "[12th] M41 Gauss Turret (Insurrectionist)", "12th_MEU_Ins", "12th_MEU_Ins", "12th_MEU_INS_Turrets")
  DEFINE_TURRET(12th_Static_ATGM_Ins, OPTRE_Static_ATGM_Ins, "[12th] M41 ATGM Turret (Insurrectionist)", "12th_MEU_Ins", "12th_MEU_Ins", "12th_MEU_INS_Turrets")
  DEFINE_TURRET(12th_Static_AA_Ins, OPTRE_Static_AA_Ins, "[12th] M41 AA Turret (Insurrectionist)", "12th_MEU_Ins", "12th_MEU_Ins", "12th_MEU_INS_Turrets")

  // CMA Turrets
  DEFINE_TURRET(12th_Static_M41_CMA, OPTRE_Static_M41_CMA, "[12th] M41 LAAG Turret (CMA)", "12th_MEU_CMA", "12th_MEU_CMA", "12th_MEU_CMA_Turrets")
  DEFINE_TURRET(12th_Static_Gauss_CMA, OPTRE_Static_Gauss_CMA, "[12th] M41 Gauss Turret (CMA)", "12th_MEU_CMA", "12th_MEU_CMA", "12th_MEU_CMA_Turrets")
  DEFINE_TURRET(12th_Static_ATGM_CMA, OPTRE_Static_ATGM_CMA, "[12th] M41 ATGM Turret (CMA)", "12th_MEU_CMA", "12th_MEU_CMA", "12th_MEU_CMA_Turrets")
  DEFINE_TURRET(12th_Static_AA_CMA, OPTRE_Static_AA_CMA, "[12th] M41 AA Turret (CMA)", "12th_MEU_CMA", "12th_MEU_CMA", "12th_MEU_CMA_Turrets")
};
