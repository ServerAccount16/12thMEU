// Define the texture classes explicitly without using macros

class 12th_warthog_tex_std_v1 {
  author = "Gepard";
  displayName = "Default";
  textures[] = {
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\body_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\under_co.paa"
  };
};

class 12th_warthog_tex_std_v1_apc {
  author = "Gepard";
  displayName = "Default APC";
  textures[] = {
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\body_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\under_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\troop_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\warthog\default\apc_co.paa"
  };
};

// Repeat for other Warthog textures (MED, M12, M68, M79, etc.)

class Tempest_Camo_3: Base_Tempest {
  side = 1;
  scope = 2;
  scopeCurator = 2;
  author = "Kelp";
  displayName = "Tempest 3 Camo";
  vehicleClass = "OPTRE_UNSC_Vehicle_class";
  faction = "12th_MEU";
  editorCategory = "12th_MEU";
  editorSubcategory = "12th_MEU_Cars";
  class TransportItems {};
  class TransportMagazines {};
  class TransportWeapons {};
  hiddenSelections[] = {"camo1", "camo2", "camo3"};
  hiddenSelectionsTextures[] = {
    "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext01_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext02_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext03_co.paa"
  };
  class textureSources {
    class 12th_tempest_tex_default {
      displayName = "Default";
      author = "Gepard";
      textures[] = {
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext01_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext02_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\default\ext03_co.paa"
      };
    };
    class 12th_tempest_tex_winter {
      displayName = "Winter";
      author = "Gepard";
      textures[] = {
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\winter\ext01_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\winter\ext02_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\tempest\winter\ext03_co.paa"
      };
    };
  };
};

// Repeat for other Tempest configurations

class HEMTT_Camo_3: Base_HEMTT {
  scope = 2;
  scopeCurator = 2;
  author = "Kelp";
  displayName = "HEMTT 3 Camo";
  vehicleClass = "OPTRE_UNSC_Vehicle_class";
  faction = "12th_MEU";
  editorCategory = "12th_MEU";
  editorSubcategory = "12th_MEU_Cars";
  class TransportItems {};
  class TransportMagazines {};
  class TransportWeapons {};
  hiddenSelections[] = {"camo1", "camo2", "camo3"};
  hiddenSelectionsTextures[] = {
    "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_01_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_02_co.paa",
    "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_03_co.paa"
  };
  class textureSources {
    class 12th_hemtt_tex_default {
      displayName = "Default";
      author = "Gepard";
      textures[] = {
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_01_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_02_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\default\ext_03_co.paa"
      };
    };
    class 12th_hemtt_tex_winter {
      displayName = "Winter";
      author = "Gepard";
      textures[] = {
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\winter\ext_01_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\winter\ext_02_co.paa",
        "\x\12thMEUAssets\addons\12th_vehicles\hemtt\winter\ext_03_co.paa"
      };
    };
  };
};

// Repeat for other HEMTT configurations

// Define Scorpion tank textures explicitly
class Scorpion_Default {
  hiddenSelectionsTextures[] = {
    QP(scorpion\default\lopo_co.paa),
    QP(scorpion\default\tur_wood_co.paa),
    QP(scorpion\default\det_3_co.paa),
    QP(scorpion\default\decals_co.paa),
    QP(scorpion\default\net_wood_co.paa),
    QP(scorpion\default\mine_roller_co.paa),
    QP(scorpion\default\mg_co.paa)
  };
  class TextureSources {
    class 12th_scorpion_tex_default {
      author = "Gepard";
      displayName = "Default";
      textures[] = {
        QP(scorpion\default\lopo_co.paa),
        QP(scorpion\default\tur_wood_co.paa),
        QP(scorpion\default\det_3_co.paa),
        QP(scorpion\default\decals_co.paa),
        QP(scorpion\default\net_wood_co.paa),
        QP(scorpion\default\mine_roller_co.paa),
        QP(scorpion\default\mg_co.paa)
      };
    };
    // Define other Scorpion textures similarly (Winter, Custom, etc.)
  };
};
