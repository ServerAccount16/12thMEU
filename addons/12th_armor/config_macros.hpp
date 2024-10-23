
#define P(PATH) \x\12thMEU\addons\12th_armor\##PATH
#define QP(PATH) #P(PATH)
#define GLUE(A,B) A##B

#define PILOT_H_TEX(CAMOTYPE,FILENAME) P(helmets\pilot\##CAMOTYPE\##FILENAME)

#define UNIFORM_WEP_CLASSNAME(SUFFIX) twelfth_uni_ng_##SUFFIX##_veh

#define UNIFORM_OLD_VEH_TEXPATH(SUFFIX) P(uniforms\armor_old\Uniform_co_##SUFFIX.paa)
#define UNIFORM_OLD_WEP_CLASSPATH(SUFFIX) twelfth_uni_##SUFFIX##_veh

#define HELM_TEX_PATH(SUFFIX) P(helmets\infantry\Helm_co_##SUFFIX.paa)
#define CAP_TEX_PATH(SUFFIX) P(helmets\cap_b\cap_co_##SUFFIX.paa)

// stands for 'extended path', used to denote background image
// paths for extended arsenal icon backgrounds
#define XTP(SFX) QP(xtd_icons\##SFX.paa)

#define UNIFORM_VEH(CSFX,ARMS,BASE,DISPLAY)             \
class twelfth_uni_ng_##CSFX##_veh : twelfth_uni_ng_base_veh { \
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

#define UNIFORM_WEP(SUFFIX,DISPLAY)                       \
class twelfth_uni_ng_##SUFFIX##_wep : twelfth_uni_ng_base_wep { \
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

/* Stands for uniform gear info. */
#define UNIFORM_GI(CSFX,CAMO,EL,ROLE) \
class twelfth_uni_ng_##CSFX##_wep {      \
  model="twelfth_base_uniforms";         \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="No";                         \
};


/*
  Defines a no-visor helmet.
  Input:
  - SUFFIX:
    defines the texture name suffix in the `helmets/infantry` folder.
    I.e sets the texture path in this format:
    `twelfth_armor/helmets/infantry/Helm_co_[SUFFIX].paa`
  - DISPLAY:
    the string that gets displayed in the ACE arsenal.
    Provide in quotes.
*/
#define HELM_NV(SUFFIX,DISPLAY)                 \
class twelfth_helm_##SUFFIX##_nv: twelfth_helm_base { \
  scope=2;                                      \
  author="Kelp";                                \
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

/*
  Defines a standard-visor helmet.
  Input:
  - SUFFIX:
    defines the texture name suffix in the `helmets/infantry` folder.
    I.e sets the texture path in this format:
    `twelfth_armor/helmets/infantry/Helm_co_[SUFFIX].paa`
  - DISPLAY:
    the string that gets displayed in the ACE arsenal.
    Provide in quotes.
*/
#define HELM_SV(SUFFIX,DISPLAY)                 \
class twelfth_helm_##SUFFIX##: twelfth_helm_base {    \
  scope=2;                                      \
  author="Kelp";                                \
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

/* Stands for helm, no visor, gear info. */
#define HELM_NV_GI(CSFX,CAMO,EL,ROLE) \
class twelfth_helm_##CSFX##_nv {         \
  model="twelfth_base_helms";            \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="No";                         \
};

/* Stands for helm, no visor, gear info. */
#define HELM_SV_GI(CSFX,CAMO,EL,ROLE) \
class twelfth_helm_##CSFX## {            \
  model="twelfth_base_helms";            \
  camo=#CAMO;                         \
  element=#EL;                        \
  role=#ROLE;                         \
  visor="Yes";                         \
};

#define CAP_B(SUFFIX,DISPLAY)                         \
class twelfth_cap_##SUFFIX: H_Cap_oli {                  \
  picture="";                                         \
  scope=2;                                            \
  scopeArsenal=2;                                     \
  displayname=DISPLAY;                                \
  hiddenselectionstextures[]={#CAP_TEX_PATH(SUFFIX)}; \
};

/*
For those of you peeking around, sorry, couldn't
have made this macro work cleanly without carrying
a local copy of the base textures from UNSCF around here.
*/

/*
  A Macro for the IAHDS Pilot helmet.
  Input:
  * SUFFIX - A class name suffix, to avoid clashing.
  * DISPLAY - What gets displayed in the Arsenal, format "like this".
  * C1 through 5 - Arguments that define from which folder a specific
                   hidden selection is going to be pulling from.
*/
#define PILOT_HELM(SUFFIX,DISPLAY,C1,C2,C3,C4,C5)                         \
class twelfth_pilot_h_##SUFFIX : H_HelmetB {                                 \
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
