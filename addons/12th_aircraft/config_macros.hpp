#define P(PATH) \x\12thMEU\addons\12th_aircraft\##PATH
#define QP(PATH) #P(PATH)

// This is a macro that defines the aircraft portion of the spawner
#define Air_SP_Info(VEH,PRI,TYPE) \
class VehicleSpawnerInfo {        \
  class 12th_air_spawner {        \
    priority=PRI;                 \
    spawner = "12th Aircraft";    \
    scope = 1;                    \
    vehicle = #VEH;               \
    icon="";                      \
    type=#TYPE;                   \
    cost=0;                       \
  };                              \
};

// This is the macro that defines the Pelicans textures

#define Pelican_TextureSets                         \
hiddenSelections[] = {                              \
  "camo1",                                          \
  "camo2",                                          \
  "camo3",                                          \
  "troop_bay",                                      \
  "doors",                                          \
  "hall_and_cockpit"                                \
};                                                  \
hiddenSelectionsTextures[] = {                      \
  QP(pelican\default\body_co.paa),                  \
  QP(pelican\default\wings_and_gear_co.paa),        \
  QP(pelican\default\weaponry_co.paa),                 \
  QP(pelican\default\troop_bay_co.paa),             \
  QP(pelican\default\doors_co.paa),                 \
  QP(pelican\default\hall_and_cockpit_co.paa)       \
};                                                  \
class textureSources {                              \
  class 12th_D77TC_Tex_Woodland {                   \
    displayName = "Woodland";                       \
    author = "Weber";                               \
    textures[] = {                                  \
      QP(pelican\woodland\body_co.paa),             \
      QP(pelican\woodland\wings_and_gear_co.paa),   \
      QP(pelican\woodland\weaponry_co.paa),            \
      QP(pelican\default\troop_bay_co.paa),         \
      QP(pelican\default\doors_co.paa),             \
      QP(pelican\default\hall_and_cockpit_co.paa)   \
    };                                              \
    factions[] = {"12th_MEU"};                      \
  };                                                \
  class 12th_D77TC_Tex_Desert {                     \
    displayName = "Desert";                         \
    author = "Weber";                               \
    textures[] = {                                  \
      QP(pelican\desert\body_co.paa),               \
      QP(pelican\desert\wings_and_gear_co.paa),     \
      QP(pelican\desert\weaponry_co.paa),              \
      QP(pelican\default\troop_bay_co.paa),         \
      QP(pelican\default\doors_co.paa),             \
      QP(pelican\default\hall_and_cockpit_co.paa)   \
    };                                              \
    factions[] = {"12th_MEU"};                      \
  };                                                \
  class 12th_D77TC_Tex_Urban {                     \
    displayName = "Urban";                         \
    author = "Weber";                               \
    textures[] = {                                  \
      QP(pelican\urban\body_co.paa),               \
      QP(pelican\urban\wings_and_gear_co.paa),     \
      QP(pelican\urban\weaponry_co.paa),              \
      QP(pelican\default\troop_bay_co.paa),         \
      QP(pelican\default\doors_co.paa),             \
      QP(pelican\default\hall_and_cockpit_co.paa)   \
    };                                              \
    factions[] = {"12th_MEU"};                      \
  };                                                \
};

// This is the macro that defines the Falcon

#define Falcon_TextureSets                   \
hiddenSelectionsTextures[] = {               \
    QP(falcon\default\main_co.paa),          \
    QP(falcon\default\attachments_co.paa),   \
    QP(falcon\default\interior_co.paa),      \
};                                           \
class textureSources {                       \
  class 12th_falcon_tex_woodland {           \
    displayName = "Woodland";                \
    author = "Weber";                        \
    textures[] = {                           \
      QP(falcon\default\main_co.paa),        \
      QP(falcon\default\attachments_co.paa), \
      QP(falcon\default\interior_co.paa),    \
    };                                       \
  };                                         \
  class 12th_falcon_tex_woodland {           \
    displayName = "Woodland";                \
    author = "Weber";                        \
    textures[] = {                           \
      QP(falcon\default\main_co.paa),        \
      QP(falcon\default\attachments_co.paa), \
      QP(falcon\default\interior_co.paa),    \
    };                                       \
  };                                         \
};

// This is the Sparrowhawk macro. Updated to match the others

#define SPARROWHAWK_TEXTURESETS                  \
hiddenSelectionsTextures[] = {                   \
  QP(sparrowhawk\default\body_01_co.paa),        \
  QP(sparrowhawk\default\body_02_co.paa),        \
  QP(sparrowhawk\default\body_03_co.paa),        \
  QP(sparrowhawk\default\body_04_co.paa),        \
  QP(sparrowhawk\default\body_05_co.paa),        \
  QP(sparrowhawk\default\autocannon_co.paa),     \
  QP(sparrowhawk\default\feed_autocannon_co.paa),\
  QP(sparrowhawk\default\decal_01_co.paa),       \
  QP(sparrowhawk\default\decal_01_co.paa)        \
};                                               \
class textureSources {                           \
  class 12th_sph_tex_woodland {                   \
    displayName = "Woodland";                     \
    author = "Weber";                           \
    textures[] = {                               \
      QP(sparrowhawk\woodland\body_01_co.paa),    \
      QP(sparrowhawk\woodland\body_02_co.paa),    \
      QP(sparrowhawk\woodland\body_03_co.paa),    \
      QP(sparrowhawk\woodland\body_04_co.paa),    \
      QP(sparrowhawk\woodland\body_05_co.paa),    \
      QP(sparrowhawk\woodland\autocannon_co.paa), \
      QP(sparrowhawk\woodland\feed_autocannon_co.paa),\
      QP(sparrowhawk\woodland\decal_01_co.paa),   \
      QP(sparrowhawk\woodland\decal_01_co.paa)    \
    };                                           \
  };                                             \
};                                               \
textureList[] = {                                \
  "12th_sph_tex_default", 1                     \
};

// Start Blackfish macro

#define Blackfish_TextureSets \
hiddenSelections[]={"Camo_1", "Camo_2", "Camo_3", "Camo_4", "Camo_5"}; \
hiddenSelectionsTextures[]={ \
  QP(blackfish\default\ext01_co.paa), \
  QP(blackfish\default\ext02_co.paa), \
  QP(blackfish\default\ext03_co.paa), \
  QP(blackfish\default\ext04_co.paa), \
  QP(blackfish\default\signs_ca.paa) \
}; \
class textureSources { \
  class 12th_blackfish_tex_woodland { \
    displayName="Woodland"; \
    author="Weber"; \
    textures[]= { \
      QP(blackfish\woodland\ext01_co.paa), \
      QP(blackfish\woodland\ext02_co.paa), \
      QP(blackfish\woodland\ext03_co.paa), \
      QP(blackfish\woodland\ext04_co.paa), \
      QP(blackfish\woodland\signs_ca.paa) \
    }; \
  }; \
};
