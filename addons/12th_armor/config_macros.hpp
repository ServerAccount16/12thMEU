// Define the base path for textures and models
#define P(PATH) \x\12thMEU\addons\12th_armor\##PATH
#define QP(PATH) #P(PATH)
#define GLUE(A,B) A##B

// Define the path for pilot helmet textures
#define PILOT_H_TEX(CAMOTYPE,FILENAME) P(helmets\pilot\##CAMOTYPE\##FILENAME)

// Define class name for uniform weapons
#define UNIFORM_WEP_CLASSNAME(SUFFIX) 12th_uni_ng_##SUFFIX##_veh

// Define the path for old uniform vehicle textures and classes
#define UNIFORM_OLD_VEH_TEXPATH(SUFFIX) P(uniforms\armor_old\Uniform_co_##SUFFIX.paa)
#define UNIFORM_OLD_WEP_CLASSPATH(SUFFIX) 12th_uni_##SUFFIX##_veh

// Define the path for helmet and cap textures
#define HELM_TEX_PATH(SUFFIX) P(helmets\infantry\Helm_co_##SUFFIX.paa)
#define CAP_TEX_PATH(SUFFIX) P(helmets\cap_b\cap_co_##SUFFIX.paa)

// Define the extended path for background images in extended arsenal icons
#define XTP(SFX) QP(xtd_icons\##SFX.paa)

// Define a macro for creating uniform vehicle classes
#define UNIFORM_VEH(CSFX,ARMS,BASE,DISPLAY)             \
class 12th_uni_ng_##CSFX##_veh : 12th_uni_ng_base_veh { \
  author="Kelp";                                        \
  picture="";                                           \
  scope=1;                                              \
  scopeArsenal=2;                                       \
  displayName=DISPLAY;                                  \
  hiddenSelectionsTextures[]={                          \
    QP(uniforms\armor\bases\##BASE\chest_co.paa),       \
    QP(uniforms\armor\arms\arms_co_##ARMS.paa),         \
    QP(uniforms\armor\bases\##BASE\legs_co.paa),        \
    QP(uniforms\armor\bases\##BASE\bdu_co.paa),         \
    QP(uniforms\armor\bases\##BASE\misc_co.paa)         \
  };                                                    \
};

// Define a macro for creating uniform weapon classes
#define UNIFORM_WEP(SUFFIX,DISPLAY)                       \
class 12th_uni_ng_##SUFFIX##_wep : 12th_uni_ng_base_wep { \
  author="Kelp";                                          \
  picture="";                                             \
  scope=1;                                                \
  scopeArsenal=2;                                         \
  displayName=DISPLAY;                                    \
  ACE_GForceCoef=0.4;                                     \
  class ItemInfo: UniformItem {                           \
    uniformModel="-";                                     \
    uniformType="Neopren";                                \
    uniformClass = #UNIFORM_WEP_CLASSNAME(SUFFIX);        \
    containerClass="Supply100";                           \
    mass=1;                                               \
    allowedSlots[]={"701","801","901"};                   \
    armor=20;                                             \
  };                                                      \
};

// Define a macro for uniform gear info
#define UNIFORM_GI(CSFX,CAMO,EL,ROLE) \
class 12th_uni_ng_##CSFX##_wep {      \
  model="12th_base_uniforms";         \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="No";                         \
};

// Define a macro for creating no-visor helmets
#define HELM_NV(SUFFIX,DISPLAY)                 \
class 12th_helm_##SUFFIX##_nv: 12th_helm_base { \
  scope=2;                                      \
  author="Waylen";                              \
  picture="";                                   \
  scopeArsenal=2;                               \
  displayName=DISPLAY;                          \
  hiddenSelections[] = { "camo", "camo2" };     \
  hiddenSelectionsTextures[] = {                \
    #HELM_TEX_PATH(SUFFIX),                     \
    ""                                          \
  };                                            \
  class ItemInfo: HeadgearItem {                \
    uniformModel="\halo_marine\halo_helm_01";   \
    mass=40;                                    \
    picture="";                                 \
    modelSides[]={6};                           \
    passThrough=0.1;                            \
    class HitpointsProtectionInfo {             \
      class Head {                              \
        hitpointName="HitHead";                 \
        armor=20;                               \
        passThrough=0.1;                        \
      };                                        \
    };                                          \
    hiddenSelections[]= { "camo", "camo2" };    \
    hiddenSelectionsTextures[]= {               \
      #HELM_TEX_PATH(SUFFIX),                   \
      ""                                        \
    };                                          \
  };                                            \
};

// Define a macro for creating standard-visor helmets
#define HELM_SV(SUFFIX,DISPLAY)                 \
class 12th_helm_##SUFFIX##: 12th_helm_base {    \
  scope=2;                                      \
  author="Waylen";                              \
  picture="";                                   \
  scopeArsenal=2;                               \
  displayName=DISPLAY;                          \
  hiddenSelections[] = { "camo" };              \
  hiddenSelectionsTextures[] = {                \
    #HELM_TEX_PATH(SUFFIX)                      \
  };                                            \
  class ItemInfo: HeadgearItem {                \
    uniformModel="\halo_marine\halo_helm_01";   \
    picture="";                                 \
    mass=40;                                    \
    modelSides[]={6};                           \
    passThrough=0.1;                            \
    class HitpointsProtectionInfo {             \
      class Head {                              \
        hitpointName="HitHead";                 \
        armor=20;                               \
        passThrough=0.1;                        \
      };                                        \
    };                                          \
    hiddenSelections[]= { "camo" };             \
    hiddenSelectionsTextures[]= {               \
      #HELM_TEX_PATH(SUFFIX)                    \
    };                                          \
  };                                            \
};

// Define a macro for no-visor helmet gear info
#define HELM_NV_GI(CSFX,CAMO,EL,ROLE) \
class 12th_helm_##CSFX##_nv {         \
  model="12th_base_helms";            \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="No";                         \
};

// Define a macro for standard-visor helmet gear info
#define HELM_SV_GI(CSFX,CAMO,EL,ROLE) \
class 12th_helm_##CSFX## {            \
  model="12th_base_helms";            \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="Yes";                        \
};

// Define a macro for creating cap classes
#define CAP_B(SUFFIX,DISPLAY)                         \
class 12th_cap_##SUFFIX: H_Cap_oli {                  \
  picture="";                                         \
  scope=2;                                            \
  scopeArsenal=2;                                     \
  displayname=DISPLAY;                                \
  hiddenselectionstextures[]={#CAP_TEX_PATH(SUFFIX)}; \
};

// Define a macro for the IAHDS Pilot helmet
#define PILOT_HELM(SUFFIX,DISPLAY,C1,C2,C3,C4,C5)                         \
class 12th_pilot_h_##SUFFIX : H_HelmetB {                                 \
  author="Kelp";                                                          \
  scope=2;                                                                \
  scopeArsenal=2;                                                         \
  picture="";                                                             \
  ace_hearing_protection=1;                                               \
  ace_hearing_lowerVolume=0.30000001;                                     \
  optreVarietys[] = {"", "", "_broken"};                                  \
  optreHUDStyle = "ODST_1";                                               \
  displayName=DISPLAY;                                                    \
  hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};     \
  model="\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01";          \
  hiddenSelectionsTextures[]={                                            \
      #PILOT_H_TEX(C1,Addons_co.paa),                                     \
      #PILOT_H_TEX(C2,EXT_co.paa),                                        \
      #PILOT_H_TEX(C3,INT_co.paa),                                        \
      #PILOT_H_TEX(C4,MID_co.paa),                                        \
      #PILOT_H_TEX(C5,Visor_co.paa)                                       \
  };                                                                      \
  class ItemInfo : HeadgearItem {                                         \
    mass = 25;                                                            \
    modelSides[]={6};                                                     \
    uniformModel="\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01"; \
    hiddenSelections[]={"camo1", "camo2", "camo3", "camo4", "camo5"};     \
    hiddenSelectionsTextures[]={                                          \
      #PILOT_H_TEX(C1,Addons_co.paa),                                     \
      #PILOT_H_TEX(C2,EXT_co.paa),                                        \
      #PILOT_H_TEX(C3,INT_co.paa),                                        \
      #PILOT_H_TEX(C4,MID_co.paa),                                        \
      #PILOT_H_TEX(C5,Visor_co.paa)                                       \
    };                                                                    \
    class HitpointsProtectionInfo {                                       \
      class Head {                                                        \
        hitpointName = "HitHead";                                         \
        armor = 20;                                                       \
        passThrough = 0.2;                                                \
      };                                                                  \
      class Face {                                                        \
        hitpointName = "HitFace";                                         \
        armor = 8;                                                        \
        passThrough = 0.3;                                                \
      };                                                                  \
      class Neck {                                                        \
        hitpointName = "HitNeck";                                         \
        armor = 15;                                                       \
        passThrough = 0.1;                                                \
      };                                                                  \
    };                                                                    \
  };                                                                      \
};
