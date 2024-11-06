
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
    "\x\12thMEU\addons\12th_vehicles\warthog\medical\apc_co.paa" \
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

#define WARTHOG_TEX_STD_V2 \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V2_APC \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V2_MED \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\medical\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V2_M12 \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V2_M68 \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V2_M79 \
class twelfth_warthog_tex_std_v2 { \
  author="Weber"; \
  displayName="Default V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3 \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3_APC \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3_MED \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\medical\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3_M12 \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3_M68 \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_STD_V3_M79 \
class twelfth_warthog_tex_std_v3 { \
  author="Weber"; \
  displayName="Default V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default_v2\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_FLAMES \
class twelfth_warthog_tex_flames { \
  author="Weber"; \
  displayName="Flames"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\flames\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa" \
  }; \
};

#define WARTHOG_TEX_FLAMES_M12 \
class twelfth_warthog_tex_flames { \
  author="Weber"; \
  displayName="Flames"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\flames\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_FLAMES_M68 \
class twelfth_warthog_tex_flames { \
  author="Weber"; \
  displayName="Flames"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\flames\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_FLAMES_M79 \
class twelfth_warthog_tex_flames { \
  author="Weber"; \
  displayName="Flames"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\flames\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_POLICE \
class twelfth_warthog_tex_police { \
  author="Weber"; \
  displayName="Police"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\police\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa" \
  }; \
};

#define WARTHOG_TEX_POLICE_M12 \
class twelfth_warthog_tex_police { \
  author="Weber"; \
  displayName="Police"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\police\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_POLICE_M68 \
class twelfth_warthog_tex_police { \
  author="Weber"; \
  displayName="Police"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\police\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_POLICE_M79 \
class twelfth_warthog_tex_police { \
  author="Weber"; \
  displayName="Police"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\police\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\default\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER \
class twelfth_warthog_tex_winter_v1 { \
  author="Weber"; \
  displayName="Winter V1"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_APC \
class twelfth_warthog_tex_winter_v1 { \
  author="Weber"; \
  displayName="Winter V1"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_MED \
class twelfth_warthog_tex_winter_v1 { \
  author="Weber"; \
  displayName="Winter V1"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_medical\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_M68 \
class twelfth_warthog_tex_winter_v1 { \
  author="Weber"; \
  displayName="Winter V1"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_M79 \
class twelfth_warthog_tex_winter_v1 { \
  author="Weber"; \
  displayName="Winter V1"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V2 \
class twelfth_warthog_tex_winter_v2 { \
  author="Weber"; \
  displayName="Winter V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V2_APC \
class twelfth_warthog_tex_winter_v2 { \
  author="Weber"; \
  displayName="Winter V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V2_MED \
class twelfth_warthog_tex_winter_v2 { \
  author="Weber"; \
  displayName="Winter V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_medical\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V2_M68 \
class twelfth_warthog_tex_winter_v2 { \
  author="Weber"; \
  displayName="Winter V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V2_M79 \
class twelfth_warthog_tex_winter_v2 { \
  author="Weber"; \
  displayName="Winter V2"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V3 \
class twelfth_warthog_tex_winter_v3 { \
  author="Weber"; \
  displayName="Winter V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V3_APC \
class twelfth_warthog_tex_winter_v3 { \
  author="Weber"; \
  displayName="Winter V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V3_MED \
class twelfth_warthog_tex_winter_v3 { \
  author="Weber"; \
  displayName="Winter V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\troop_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_medical\apc_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V3_M68 \
class twelfth_warthog_tex_winter_v3 { \
  author="Weber"; \
  displayName="Winter V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m68_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\m12_co.paa" \
  }; \
};

#define WARTHOG_TEX_WINTER_V3_M79 \
class twelfth_warthog_tex_winter_v3 { \
  author="Weber"; \
  displayName="Winter V3"; \
  textures[]= { \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v3\body_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\under_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter\m79_co.paa", \
    "\x\12thMEU\addons\12th_vehicles\warthog\winter_v2\m12_co.paa" \
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
    class twelfth_tempest_tex_winter { \
      displayName="Winter"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(winter,ext01_co.paa), \
        #TEMPEST_TEXPATH(winter,ext02_co.paa), \
        #TEMPEST_TEXPATH(winter,CAMO3) \
      }; \
    }; \
  }; \
};

#define TEMPEST_4(SP_PRI,SP_TYPE,CLASS,BASE_CLASS,DISPLAY,CAMO3,CAMO4) \
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
  hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"}; \
  hiddenSelectionsTextures[]= { \
    #TEMPEST_TEXPATH(default,ext01_co.paa), \
    #TEMPEST_TEXPATH(default,ext02_co.paa), \
    #TEMPEST_TEXPATH(default,CAMO3), \
    #TEMPEST_TEXPATH(default,CAMO4) \
  }; \
  class textureSources { \
    class twelfth_tempest_tex_default { \
      displayName="Default"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(default,ext01_co.paa), \
        #TEMPEST_TEXPATH(default,ext02_co.paa), \
        #TEMPEST_TEXPATH(default,CAMO3), \
        #TEMPEST_TEXPATH(default,CAMO4) \
      };\
    }; \
    class twelfth_tempest_tex_winter { \
      displayName="Winter"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(winter,ext01_co.paa), \
        #TEMPEST_TEXPATH(winter,ext02_co.paa), \
        #TEMPEST_TEXPATH(winter,CAMO3), \
        #TEMPEST_TEXPATH(winter,CAMO4) \
      };\
    }; \
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
    class twelfth_tempest_tex_winter { \
      displayName="Winter"; \
      author="Weber"; \
      textures[]= { \
        #TEMPEST_TEXPATH(winter,ext01_co.paa), \
        #TEMPEST_TEXPATH(winter,ext02_co.paa), \
        #TEMPEST_TEXPATH(winter,CAMO3), \
        #TEMPEST_TEXPATH(winter,CAMO4), \
        #TEMPEST_TEXPATH(winter,CAMO5) \
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
    class twelfth_hemtt_tex_winter { \
      displayName="Winter"; \
      author="Weber"; \
      textures[] = { \
        #HEMTT_TEXPATH(winter,ext_01_co.paa), \
        #HEMTT_TEXPATH(winter,ext_02_co.paa), \
        #HEMTT_TEXPATH(winter,CAMO3) \
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
    class twelfth_hemtt_tex_winter { \
      displayName="Winter"; \
      author="Weber"; \
      textures[] = { \
        #HEMTT_TEXPATH(winter,ext_01_co.paa), \
        #HEMTT_TEXPATH(winter,ext_02_co.paa), \
        #HEMTT_TEXPATH(winter,CAMO3), \
        #HEMTT_TEXPATH(default,CAMO4) \
      }; \
    }; \
  }; \
};

#define SCORPION_TEXTURESET \
hiddenSelectionsTextures[] = { \
    QP(scorpion\default\lopo_co.paa), \
    QP(scorpion\default\tur_wood_co.paa), \
    QP(scorpion\default\det_3_co.paa), \
    QP(scorpion\default\decals_co.paa), \
    QP(scorpion\default\net_wood_co.paa), \
    QP(scorpion\default\net_wood_co.paa), \
    QP(scorpion\default\mine_roller_co.paa), \
    QP(scorpion\default\mg_co.paa) \
}; \
class TextureSources { \
  class twelfth_scorpion_tex_default { \
    author="Weber"; \
    displayName="Default"; \
    textures[]= { \
      QP(scorpion\default\lopo_co.paa), \
      QP(scorpion\default\tur_wood_co.paa), \
      QP(scorpion\default\det_3_co.paa), \
      QP(scorpion\default\decals_co.paa), \
      QP(scorpion\default\net_wood_co.paa), \
      QP(scorpion\default\net_wood_co.paa), \
      QP(scorpion\default\mine_roller_co.paa), \
      QP(scorpion\default\mg_co.paa) \
    }; \
  }; \
  class twelfth_scorpion_tex_winter { \
    author="Weber"; \
    displayName="Winter"; \
    textures[]= { \
      QP(scorpion\winter\lopo_co.paa), \
      QP(scorpion\winter\tur_wood_co.paa), \
      QP(scorpion\default\det_3_co.paa), \
      QP(scorpion\default\decals_co.paa), \
      QP(scorpion\winter\net_wood_co.paa), \
      QP(scorpion\winter\net_wood_co.paa), \
      QP(scorpion\winter\mine_roller_co.paa), \
      QP(scorpion\default\mg_co.paa) \
    }; \
  }; \
  class twelfth_scorpion_tex_cstm_dom { \
    author="Weber"; \
    displayName="Custom (Dom)"; \
    textures[]= { \
      QP(scorpion\dom\lopo_co.paa), \
      QP(scorpion\dom\tur_wood_co.paa), \
      QP(scorpion\default\det_3_co.paa), \
      QP(scorpion\default\decals_co.paa), \
      QP(scorpion\default\net_wood_co.paa), \
      QP(scorpion\default\net_wood_co.paa), \
      QP(scorpion\default\mine_roller_co.paa), \
      QP(scorpion\default\mg_co.paa) \
    }; \
  }; \
};

