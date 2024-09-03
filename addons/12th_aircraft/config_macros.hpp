#define BASE_PATH \x\12thMEUAssets\addons\12th_aircraft\
#define PATH(PATH) BASE_PATH##PATH
#define QUOTED_PATH(PATH) #PATH(PATH)

#define SET_AIR_SPAWN_INFO(VEHICLE, PRIORITY, TYPE) \
class VehicleSpawnerInfo {                          \
  class 12th_air_spawner {                          \
    priority = PRIORITY;                            \
    spawner = "12th Aircraft";                      \
    scope = 1;                                      \
    vehicle = #VEHICLE;                             \
    icon = "";                                      \
    type = #TYPE;                                   \
    cost = 0;                                       \
  };                                                \
};

//--------------------------------------------------------------------
// Pelican Texture Sets
//--------------------------------------------------------------------

#define DEFINE_PELICAN_TEXTURESETS                               \
hiddenSelections[] = {                                           \
  "camo1", "camo2", "camo3", "troop_bay", "doors", "hall_and_cockpit" \
};                                                               \
hiddenSelectionsTextures[] = {                                   \
  QUOTED_PATH(pelican/default/body_co.paa),                      \
  QUOTED_PATH(pelican/default/wings_and_gear_co.paa),            \
  QUOTED_PATH(pelican/default/weaponry_co.paa),                  \
  QUOTED_PATH(pelican/default/troop_bay_co.paa),                 \
  QUOTED_PATH(pelican/default/doors_co.paa),                     \
  QUOTED_PATH(pelican/default/hall_and_cockpit_co.paa)           \
};                                                               \
class textureSources {                                            \
  class Default {                                                \
    displayName = "Default";                                     \
    author = "Weber";                                           \
    textures[] = {                                               \
      QUOTED_PATH(pelican/default/body_co.paa),                  \
      QUOTED_PATH(pelican/default/wings_and_gear_co.paa),        \
      QUOTED_PATH(pelican/default/weaponry_co.paa),              \
      QUOTED_PATH(pelican/default/troop_bay_co.paa),             \
      QUOTED_PATH(pelican/default/doors_co.paa),                 \
      QUOTED_PATH(pelican/default/hall_and_cockpit_co.paa)       \
    };                                                           \
    factions[] = {"12th_MEU"};                                   \
  };                                                             \
  class Medical : Default {                                      \
    displayName = "Medical";                                     \
    textures[] = {                                               \
      QUOTED_PATH(pelican/medical/body_co.paa),                  \
      QUOTED_PATH(pelican/default/wings_and_gear_co.paa),        \
      QUOTED_PATH(pelican/default/weaponry_co.paa),              \
      QUOTED_PATH(pelican/default/troop_bay_co.paa),             \
      QUOTED_PATH(pelican/default/doors_co.paa),                 \
      QUOTED_PATH(pelican/default/hall_and_cockpit_co.paa)       \
    };                                                           \
  };                                                             \
  class Winter : Default {                                       \
    displayName = "Winter";                                      \
    textures[] = {                                               \
      QUOTED_PATH(pelican/winter/body_co.paa),                   \
      QUOTED_PATH(pelican/winter/wings_and_gear_co.paa),         \
      QUOTED_PATH(pelican/winter/weaponry_co.paa),               \
      QUOTED_PATH(pelican/winter/troop_bay_co.paa),              \
      QUOTED_PATH(pelican/winter/doors_co.paa),                  \
      QUOTED_PATH(pelican/winter/hall_and_cockpit_co.paa)        \
    };                                                           \
  };                                                             \
  class CustomWeber : Default {                                 \
    displayName = "Custom (Weber)";                             \
    textures[] = {                                               \
      QUOTED_PATH(pelican/Weber/body_co.paa),                   \
      QUOTED_PATH(pelican/default/wings_and_gear_co.paa),        \
      QUOTED_PATH(pelican/default/weaponry_co.paa),              \
      QUOTED_PATH(pelican/default/troop_bay_co.paa),             \
      QUOTED_PATH(pelican/default/doors_co.paa),                 \
      QUOTED_PATH(pelican/default/hall_and_cockpit_co.paa)       \
    };                                                           \
  };                                                             \
};

//--------------------------------------------------------------------
// Falcon Texture Sets
//--------------------------------------------------------------------

#define DEFINE_FALCON_TEXTURESETS                                 \
hiddenSelectionsTextures[] = {                                    \
  QUOTED_PATH(falcon/default/main_co.paa),                        \
  QUOTED_PATH(falcon/default/attachments_co.paa),                 \
  QUOTED_PATH(falcon/default/interior_co.paa)                     \
};                                                                \
class textureSources {                                             \
  class Default {                                                 \
    displayName = "Default";                                      \
    author = "Weber";                                            \
    textures[] = {                                                \
      QUOTED_PATH(falcon/default/main_co.paa),                    \
      QUOTED_PATH(falcon/default/attachments_co.paa),             \
      QUOTED_PATH(falcon/default/interior_co.paa)                 \
    };                                                            \
  };                                                              \
  class Medical : Default {                                       \
    displayName = "Medical";                                      \
    textures[] = {                                                \
      QUOTED_PATH(falcon/medical/main_co.paa),                    \
      QUOTED_PATH(falcon/default/attachments_co.paa),             \
      QUOTED_PATH(falcon/default/interior_co.paa)                 \
    };                                                            \
  };                                                              \
  class Winter : Default {                                        \
    displayName = "Winter";                                       \
    textures[] = {                                                \
      QUOTED_PATH(falcon/winter/main_co.paa),                     \
      QUOTED_PATH(falcon/winter/attachments_co.paa),              \
      QUOTED_PATH(falcon/winter/interior_co.paa)                  \
    };                                                            \
  };                                                              \
  class WinterMedical : Default {                                 \
    displayName = "Winter Medical";                               \
    textures[] = {                                                \
      QUOTED_PATH(falcon/winter_medical/main_co.paa),             \
      QUOTED_PATH(falcon/winter/attachments_co.paa),              \
      QUOTED_PATH(falcon/winter/interior_co.paa)                  \
    };                                                            \
  };                                                              \
  textureList[] = {                                               \
    "Default", 1,                                                 \
    "Medical", 1,                                                 \
    "Winter", 1,                                                  \
    "WinterMedical", 1                                            \
  };                                                              \
};

//--------------------------------------------------------------------
// Sparrowhawk Texture Sets
//--------------------------------------------------------------------

#define DEFINE_SPARROWHAWK_TEXTURESETS                              \
hiddenSelectionsTextures[] = {                                      \
  QUOTED_PATH(sparrowhawk/default/body_01_co.paa),                  \
  QUOTED_PATH(sparrowhawk/default/body_02_co.paa),                  \
  QUOTED_PATH(sparrowhawk/default/body_03_co.paa),                  \
  QUOTED_PATH(sparrowhawk/default/body_04_co.paa),                  \
  QUOTED_PATH(sparrowhawk/default/body_05_co.paa),                  \
  QUOTED_PATH(sparrowhawk/default/autocannon_co.paa),               \
  QUOTED_PATH(sparrowhawk/default/feed_autocannon_co.paa),          \
  QUOTED_PATH(sparrowhawk/default/decal_01_co.paa),                 \
  QUOTED_PATH(sparrowhawk/default/decal_01_co.paa)                  \
};                                                                  \
class textureSources {                                               \
  class Default {                                                   \
    displayName = "Default";                                        \
    author = "Weber";                                              \
    textures[] = {                                                  \
      QUOTED_PATH(sparrowhawk/default/body_01_co.paa),              \
      QUOTED_PATH(sparrowhawk/default/body_02_co.paa),              \
      QUOTED_PATH(sparrowhawk/default/body_03_co.paa),              \
      QUOTED_PATH(sparrowhawk/default/body_04_co.paa),              \
      QUOTED_PATH(sparrowhawk/default/body_05_co.paa),              \
      QUOTED_PATH(sparrowhawk/default/autocannon_co.paa),           \
      QUOTED_PATH(sparrowhawk/default/feed_autocannon_co.paa),      \
      QUOTED_PATH(sparrowhawk/default/decal_01_co.paa),             \
      QUOTED_PATH(sparrowhawk/default/decal_01_co.paa)              \
    };                                                              \
    factions[] = {"12th_MEU"};                                      \
  };                                                                \
  class Winter : Default {                                          \
    displayName = "Winter";                                         \
    textures[] = {                                                  \
      QUOTED_PATH(sparrowhawk/winter/body_01_co.paa),               \
      QUOTED_PATH(sparrowhawk/winter/body_02_co.paa),               \
      QUOTED_PATH(sparrowhawk/winter/body_03_co.paa),               \
      QUOTED_PATH(sparrowhawk/winter/body_04_co.paa),               \
      QUOTED_PATH(sparrowhawk/winter/body_05_co.paa),               \
      QUOTED_PATH(sparrowhawk/winter/autocannon_co.paa),            \
      QUOTED_PATH(sparrowhawk/winter/feed_autocannon_co.paa),       \
      QUOTED_PATH(sparrowhawk/default/decal_01_co.paa),             \
      QUOTED_PATH(sparrowhawk/default/decal_01_co.paa)              \
    };                                                              \
  };                                                                \
};                                                                  \
textureList[] = {                                                   \
  "Default", 1,                                                     \
  "Winter", 1                                                       \
};

//--------------------------------------------------------------------
// Blackfish Texture Sets
//--------------------------------------------------------------------

#define DEFINE_BLACKFISH_TEXTURESETS \
hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4", "Camo_5"}; \
hiddenSelectionsTextures[] = {                                           \
  QUOTED_PATH(blackfish/default/ext01_co.paa),                           \
  QUOTED_PATH(blackfish/default/ext02_co.paa),                           \
  QUOTED_PATH(blackfish/default/ext03_co.paa),                           \
  QUOTED_PATH(blackfish/default/ext04_co.paa),                           \
  QUOTED_PATH(blackfish/default/signs_ca.paa)                            \
};                                                                        \
class textureSources {                                                    \
  class Default {                                                         \
    displayName = "Default";                                              \
    author = "Weber";                                                    \
    textures[] = {                                                        \
      QUOTED_PATH(blackfish/default/ext01_co.paa),                        \
      QUOTED_PATH(blackfish/default/ext02_co.paa),                        \
      QUOTED_PATH(blackfish/default/ext03_co.paa),                        \
      QUOTED_PATH(blackfish/default/ext04_co.paa),                        \
      QUOTED_PATH(blackfish/default/signs_ca.paa)                         \
    };                                                                    \
  };                                                                      \
  class Winter : Default {                                                \
    displayName = "Winter";                                               \
    textures[] = {                                                        \
      QUOTED_PATH(blackfish/winter/ext01_co.paa),                         \
      QUOTED_PATH(blackfish/winter/ext02_co.paa),                         \
      QUOTED_PATH(blackfish/winter/ext03_co.paa),                         \
      QUOTED_PATH(blackfish/winter/ext04_co.paa),                         \
      QUOTED_PATH(blackfish/default/signs_ca.paa)                         \
    };                                                                    \
  };                                                                      \
};
