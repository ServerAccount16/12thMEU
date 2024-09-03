#define HELMTEXPATH(SUFFIX) \x\12thMEUAssets\addons\12th_custom_helms\data\helms\Helm_co_##SUFFIX.paa
#define HELMVISORPATH(VISOR) \x\12thMEUAssets\addons\12th_custom_helms\data\visors\##VISOR.paa

#define P(PATH) \x\12thMEUAssets\addons\12th_custom_helms\##PATH
#define CH_PILOT_TEX(CAMOTYPE,FILENAME) P(data\pilots\##CAMOTYPE\##FILENAME)

#define GLUE(A,B) A##B
#define GLUE3(A,B,C) A##B##C

#define S_PREFIX [12th][Inf][S][Cstm]
#define W_PREFIX [12th][Inf][W][Cstm]

#define CUSTOM_HELM_S_AV(SUFFIX)                       \
class 12th_ch_std_##SUFFIX##: 12th_custom_helm_base {  \
    scope=2;                                           \
    author="Kelp";                                     \
    picture="";                                        \
    scopeArsenal=2;                                    \
    displayName=#GLUE3(S_PREFIX,[SV] ,SUFFIX);         \
    hiddenSelections[] = {"camo"};                     \
    hiddenSelectionsTextures[] = {                     \
      #HELMTEXPATH(SUFFIX),                            \
    };                                                 \
    class ItemInfo: HeadgearItem {                     \
      uniformModel="\halo_marine\halo_helm_01";        \
      mass=40;                                         \
      modelSides[]={6};                                \
      passThrough=0.1;                                 \
      class HitpointsProtectionInfo {                  \
        class Head {                                   \
          hitpointName="HitHead";                      \
          armor=20;                                    \
          passThrough=0.1;                             \
        };                                             \
      };                                               \
      hiddenSelections[]= {"camo"};                    \
      hiddenSelectionsTextures[]= {                    \
        #HELMTEXPATH(SUFFIX),                          \
      };                                               \
    };                                                 \
};                                                     \
class 12th_ch_std_##SUFFIX##_nv: 12th_custom_helm_base { \
    scope=2;                                           \
    author="Kelp";                                     \
    picture="";                                        \
    scopeArsenal=2;                                    \
    displayName=#GLUE3(S_PREFIX,[NV] ,SUFFIX);         \
    hiddenSelections[] = { "camo", "camo2" };          \
    hiddenSelectionsTextures[] = {                     \
      #HELMTEXPATH(SUFFIX),                            \
      ""                                               \
    };                                                 \
    class ItemInfo: HeadgearItem {                     \
      uniformModel="\halo_marine\halo_helm_01";        \
      mass=40;                                         \
      modelSides[]={6};                                \
      passThrough=0.1;                                 \
      class HitpointsProtectionInfo {                  \
        class Head {                                   \
          hitpointName="HitHead";                      \
          armor=20;                                    \
          passThrough=0.1;                             \
        };                                             \
      };                                               \
      hiddenSelections[]= { "camo", "camo2" };         \
      hiddenSelectionsTextures[]= {                    \
        #HELMTEXPATH(SUFFIX),                          \
        ""                                             \
      };                                               \
    };                                                 \
};

#define CH_HELM_S_GI(SFX) CH_HELM_AV_GI(SFX,std)

#define CH_HELM_AV_GI(SFX,CAMO)       \
class 12th_ch_##CAMO##_##SFX {        \
  model="12th_custom_helms";          \
  camo=#CAMO;                         \
  visor="Yes";                        \
  member=#SFX;                        \
};                                    \
class 12th_ch_##CAMO##_##SFX##_nv {   \
  model="12th_custom_helms";          \
  camo=#CAMO;                         \
  visor="No";                         \
  member=#SFX;                        \
};

/*
#define CUSTOM_HELM_CV(SUFFIX,DISPLAY,VISOR)      \
class 12th_ch_##SUFFIX##: 12th_custom_helm_base { \
    scope=2;                                      \
    author="Kelp";                                \
    picture="";                                   \
    scopeArsenal=2;                               \
    displayName=DISPLAY;                          \
    hiddenSelections[] = { "camo", "camo2" };     \
    hiddenSelectionsTextures[] = {                \
      #HELMTEXPATH(SUFFIX),                       \
      #HELMVISORPATH(VISOR)                       \
    };                                            \
    class ItemInfo: HeadgearItem {                \
      uniformModel="\halo_marine\halo_helm_01";   \
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
      hiddenSelections[]= { "camo", "camo2" };    \
      hiddenSelectionsTextures[]= {               \
        #HELMTEXPATH(SUFFIX),                     \
        #HELMVISORPATH(VISOR)                     \
      };                                          \
    };                                            \
};

#define CUSTOM_HELM_NV(SUFFIX,DISPLAY)            \
class 12th_ch_##SUFFIX##: 12th_custom_helm_base { \
    scope=2;                                      \
    author="Kelp";                                \
    picture="";                                   \
    scopeArsenal=2;                               \
    displayName=DISPLAY;                          \
    hiddenSelections[] = { "camo", "camo2" };     \
    hiddenSelectionsTextures[] = {                \
      #HELMTEXPATH(SUFFIX),                       \
      ""                                          \
    };                                            \
    class ItemInfo: HeadgearItem {                \
      uniformModel="\halo_marine\halo_helm_01";   \
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
      hiddenSelections[]= { "camo", "camo2" };    \
      hiddenSelectionsTextures[]= {               \
        #HELMTEXPATH(SUFFIX),                     \
        ""                                        \
      };                                          \
    };                                            \
};

#define CUSTOM_HELM_SV(SUFFIX,DISPLAY)            \
class 12th_ch_##SUFFIX##: 12th_custom_helm_base { \
    scope=2;                                      \
    author="Kelp";                                \
    picture="";                                   \
    scopeArsenal=2;                               \
    displayName=DISPLAY;                          \
    hiddenSelections[] = { "camo" };              \
    hiddenSelectionsTextures[] = {                \
      #HELMTEXPATH(SUFFIX)                        \
    };                                            \
    class ItemInfo: HeadgearItem {                \
      uniformModel="\halo_marine\halo_helm_01";   \
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
        #HELMTEXPATH(SUFFIX)                      \
      };                                          \
    };                                            \
};
*/
/*
  For those of you peeking around, sorry, couldn't
  have made this macro work cleanly without carrying
  a local copy of the base textures from UNSCF around here.
*/
#define CUSTOM_PILOT_HELM(SUFFIX,DISPLAY,C1,C2,C3,C4,C5)                  \
class 12th_pilot_ch_##SUFFIX : H_HelmetB {                                \
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
      #CH_PILOT_TEX(C1,Addons_co.paa),                                    \
      #CH_PILOT_TEX(C2,EXT_co.paa),                                       \
      #CH_PILOT_TEX(C3,INT_co.paa),                                       \
      #CH_PILOT_TEX(C4,MID_co.paa),                                       \
      #CH_PILOT_TEX(C5,Visor_co.paa)                                      \
  };                                                                      \
  class ItemInfo : HeadgearItem {                                         \
    mass = 25;                                                            \
    modelSides[]={6};                                                     \
    uniformModel="\DMNS\DMNS_Units\Armour\Pilot_Helm_01\Pilot_Helmet_01"; \
    hiddenSelections[]={"camo1", "camo2", "camo3", "camo4", "camo5"};     \
    hiddenSelectionsTextures[]={                                          \
      #CH_PILOT_TEX(C1,Addons_co.paa),                                    \
      #CH_PILOT_TEX(C2,EXT_co.paa),                                       \
      #CH_PILOT_TEX(C3,INT_co.paa),                                       \
      #CH_PILOT_TEX(C4,MID_co.paa),                                       \
      #CH_PILOT_TEX(C5,Visor_co.paa)                                      \
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
