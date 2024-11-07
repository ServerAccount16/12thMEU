
// NOTE: this is a mess, caused by the warthog's variants and
// the structuring of it's hidden selections. The macros here
// are more meant to hide away all of the nasty bits so that the
// code in the main config takes up less space.

#define P(PATH) \x\12thMEU\addons\12th_vehicles\##PATH
#define QP(PATH) #P(PATH)

#define WARTHOG_TEX_STD_V1 \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V1_APC \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V1_MED \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa"   \
  }; \
};

#define WARTHOG_TEX_STD_V1_M12 \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V1_M68 \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};


#define WARTHOG_TEX_STD_V1_M79 \
class twelfth_warthog_tex_std_v1 { \
  author="Weber"; \
  displayName="Default"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define TEMPEST_TEXPATH(BASE, PATH) \x\12thMEU\addons\12th_vehicles\tempest\##BASE\##PATH

#define TEMPEST_3(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3) \
class CLASS: BASE_CLASS { \
  side=1; \
  scope=2; \
  scopeCurator=2; \
  author="Waylen"; \
  displayName=DISPLAY; \
  vehicleClass="OPTRE_UNSC_Vehicle_class"; \
  faction="twelfth_MEU"; \
  editorCategory="twelfth_MEU"; \
  editorSubcategory="twelfth_MEU_Cars"; \
  class TransportItems {}; \
  class TransportMagazines {}; \
  class TransportWeapons {}; \
  TEMPEST_SP_INFO(SP_PRI,SP_TYPE) \
  hiddenSelections[]= {"camo1", "camo2", "camo3"}; \
  hiddenSelectionsTextures[]= { \
    #TEMPEST_TEXPATH(default,ext01_co.paa), \
    #TEMPEST_TEXPATH(default,ext02_co.paa), \
    #TEMPEST_TEXPATH(default,CAMO3) \
  }; \
  class textureSources { \
    class twelfth_tempest_tex_default { \
      displayName="Default"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(default,ext01_co.paa), \
        #TEMPEST_TEXPATH(default,ext02_co.paa), \
        #TEMPEST_TEXPATH(default,CAMO3) \
      }; \
    }; \
  }; \
};

#define TEMPEST_4(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3,CAMO4) \
class CLASS: BASE_CLASS {                                              \
  side=1;                                                              \
  scope=2;                                                             \
  scopeCurator=2;                                                      \
  author="Waylen";                                                     \
  displayName=DISPLAY;                                                 \
  vehicleClass="OPTRE_UNSC_Vehicle_class";                             \
  faction="twelfth_MEU";                                               \
  editorCategory="twelfth_MEU";                                        \
  editorSubcategory="twelfth_MEU_Cars";                                \
  class TransportItems {};                                             \
  class TransportMagazines {};                                         \
  class TransportWeapons {};                                           \
  TEMPEST_SP_INFO(SP_PRI,SP_TYPE)                                      \
  hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};            \
  hiddenSelectionsTextures[]= {                                        \
    #TEMPEST_TEXPATH(default,ext01_co.paa),                            \
    #TEMPEST_TEXPATH(default,ext02_co.paa),                            \
    #TEMPEST_TEXPATH(default,CAMO3),                                   \
    #TEMPEST_TEXPATH(default,CAMO4)                                    \
  };                                                                   \
  class textureSources {                                               \
    class twelfth_tempest_tex_default {                                \
      displayName="Default";                                           \
      author="Weber";                                                  \
      textures[]= {                                                    \
        #TEMPEST_TEXPATH(default,ext01_co.paa),                         \
        #TEMPEST_TEXPATH(default,ext02_co.paa),                         \
        #TEMPEST_TEXPATH(default,CAMO3),                                \
        #TEMPEST_TEXPATH(default,CAMO4)                                 \
      };                                                                \
    };                                                                  \
  }; \
};

#define TEMPEST_5(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3,CAMO4,CAMO5) \
class CLASS: BASE_CLASS { \
  side=1; \
  scope=2; \
  scopeCurator=2; \
  author="Waylen"; \
  displayName=DISPLAY; \
  vehicleClass="OPTRE_UNSC_Vehicle_class"; \
  faction="twelfth_MEU"; \
  editorCategory="twelfth_MEU"; \
  editorSubcategory="twelfth_MEU_Cars"; \
  class TransportItems {}; \
  class TransportMagazines {}; \
  class TransportWeapons {}; \
  TEMPEST_SP_INFO(SP_PRI,SP_TYPE) \
  hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4", "camo5"}; \
  hiddenSelectionsTextures[]= { \
    #TEMPEST_TEXPATH(default,ext01_co.paa), \
    #TEMPEST_TEXPATH(default,ext02_co.paa), \
    #TEMPEST_TEXPATH(default,CAMO3), \
    #TEMPEST_TEXPATH(default,CAMO4), \
    #TEMPEST_TEXPATH(default,CAMO5) \
  }; \
  class textureSources { \
    class twelfth_tempest_tex_default { \
      displayName="Default"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(default,ext01_co.paa), \
        #TEMPEST_TEXPATH(default,ext02_co.paa), \
        #TEMPEST_TEXPATH(default,CAMO3), \
        #TEMPEST_TEXPATH(default,CAMO4), \
        #TEMPEST_TEXPATH(default,CAMO5) \
      };\
    }; \
  }; \
};

#define HEMTT_TEXPATH(BASE, CAMO3) \x\12thMEU\addons\12th_vehicles\hemtt\##BASE\##CAMO3

#define HEMTT_3(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3) \
class CLASS: BASE_CLASS { \
  scope=2; \
  scopeCurator=2; \
  author="Waylen"; \
  displayName=DISPLAY; \
  vehicleClass="OPTRE_UNSC_Vehicle_class"; \
  faction="twelfth_MEU"; \
  editorCategory="twelfth_MEU"; \
  editorSubcategory="twelfth_MEU_Cars"; \
  class TransportItems {}; \
  class TransportMagazines {}; \
  class TransportWeapons {}; \
  hiddenSelections[]= {"camo1", "camo2", "camo3"}; \
  HEMTT_SP_INFO(SP_PRI,SP_TYPE) \
  hiddenSelectionsTextures[]= { \
    #HEMTT_TEXPATH(default,ext_01_co.paa), \
    #HEMTT_TEXPATH(default,ext_02_co.paa), \
    #HEMTT_TEXPATH(default,CAMO3) \
  }; \
  class textureSources { \
    class twelfth_hemtt_tex_default { \
      displayName="Default"; \
      author="Weber"; \
      textures[]= { \
        #HEMTT_TEXPATH(default,ext_01_co.paa), \
        #HEMTT_TEXPATH(default,ext_02_co.paa), \
        #HEMTT_TEXPATH(default,CAMO3) \
      }; \
    }; \
  }; \
};

#define HEMTT_4(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3,CAMO4) \
class CLASS: BASE_CLASS { \
  scope=2; \
  scopeCurator=2; \
  author="Waylen"; \
  displayName=DISPLAY; \
  vehicleClass="OPTRE_UNSC_Vehicle_class"; \
  faction="twelfth_MEU"; \
  editorCategory="twelfth_MEU"; \
  editorSubcategory="twelfth_MEU_Cars"; \
  class TransportItems {}; \
  class TransportMagazines {}; \
  class TransportWeapons {}; \
  hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"}; \
  HEMTT_SP_INFO(SP_PRI,SP_TYPE) \
  hiddenSelectionsTextures[]= { \
    #HEMTT_TEXPATH(default,ext_01_co.paa), \
    #HEMTT_TEXPATH(default,ext_02_co.paa), \
    #HEMTT_TEXPATH(default,CAMO3), \
    #HEMTT_TEXPATH(default,CAMO4) \
  }; \
  class textureSources { \
    class twelfth_hemtt_tex_default { \
      displayName="Default"; \
      author="Weber"; \
      textures[]= { \
        #HEMTT_TEXPATH(default,ext_01_co.paa), \
        #HEMTT_TEXPATH(default,ext_02_co.paa), \
        #HEMTT_TEXPATH(default,CAMO3), \
        #HEMTT_TEXPATH(default,CAMO4) \
      }; \
    }; \
  }; \
};

#define SCORPION_TEXTURESET \
hiddenSelectionsTextures[] = {                \
  QP(scorpion\default\hull_co.paa),             \
  QP(scorpion\default\turret_co.paa),           \
  QP(scorpion\default\track_front_co.paa),      \
  QP(scorpion\default\track_rear_co.paa),      \
  QP(scorpion\default\commander_co.paa),      \
  QP(scorpion\default\ext_co.paa),            \
  QP(scorpion\default\ext2_co.paa),           \
  QP(scorpion\default\track_int_co.paa),      \
}; \
class TextureSources { \
  class twelfth_scorpion_tex_default { \
    author="Wolfe"; \
    displayName="Default"; \
    textures[]= { \
      QP(scorpion\default\hull_co.paa),             \
      QP(scorpion\default\turret_co.paa),           \
      QP(scorpion\default\track_front_co.paa),      \
      QP(scorpion\default\track_rear_co.paa),      \
      QP(scorpion\default\commander_co.paa),      \
      QP(scorpion\default\ext_co.paa),            \
      QP(scorpion\default\ext2_co.paa),           \
      QP(scorpion\default\track_int_co.paa),      \
    }; \
  }; \
  class twelfth_scorpion_tex_brown {    \
    author = "Wolfe"; \
    displayName = "Brown"; \
    textures[] = {  \
      QP(scorpion\brown\hull_co.paa),             \
      QP(scorpion\brown\turret_co.paa),           \
      QP(scorpion\brown\track_front_co.paa),      \
      QP(scorpion\brown\track_rear_co.paa),      \
      QP(scorpion\brown\commander_co.paa),      \
      QP(scorpion\brown\ext_co.paa),            \
      QP(scorpion\brown\ext2_co.paa),           \
      QP(scorpion\brown\track_int_co.paa),      \
    };  \
  };  \
};

