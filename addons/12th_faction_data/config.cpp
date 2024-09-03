// Define the mod's dependencies and version requirements.
class CfgPatches {
  class 12th_faction_data {
    units[] = {};  // No units defined yet.
    weapons[] = {};  // No weapons defined yet.
    requiredVersion = 0.1;  // Minimum required game version.
    requiredAddons[] = {"A3_Characters_F_BLUFOR"};  // Dependencies.
  };
};

// Define faction classes for the 12th Marine Expeditionary Unit (MEU)
// including Marine, Insurrection, and CMA assets.
class CfgFactionClasses {
  class 12th_MEU {
    displayName = "12th Marine Expeditionary Unit";
    icon="";  // TODO: Add faction icon.
    author="12th MEU S-4 Team";
    priority=99;  // High priority to ensure it appears at the top of the list.
    side=1;  // Blufor (friendly) side.
  };
  class 12th_MEU_Ins {
    displayName="12th Insurrection Assets";
    icon="";  // TODO: Add faction icon.
    author="12th MEU S-4 Team";
    priority=99;
    side=2;  // Opfor (enemy) side.
  };
  class 12th_MEU_CMA {
    displayName="12th CMA Assets";
    icon="";  // TODO: Add faction icon.
    author="12th MEU S-4 Team";
    priority=99;
    side=3;  // Independent side.
  };
};

// Define editor categories for the 12th MEU factions.
class CfgEditorCategories {
  class 12th_MEU {
    displayName="12th Marine Expeditionary Unit";
    priority=99;  // High priority for easy access.
    side=1;  // Blufor (friendly) side.
  };
  class 12th_MEU_Ins {
    displayName="12th Insurrection Assets";
    priority=99;
    side=2;  // Opfor (enemy) side.
  };
  class 12th_MEU_CMA {
    displayName="12th CMA Assets";
    priority=99;
    side=3;  // Independent side.
  };
};

// Define editor subcategories for various asset types within each faction.
class CfgEditorSubcategories {
  // 12th MEU Marine Assets
  class 12th_MEU_Rotary {
    displayName="Rotary Aircraft";  // Rotary-wing aircraft (helicopters).
  };
  class 12th_MEU_Cars {
    displayName="Cars";  // Ground vehicles (cars, trucks).
  };
  class 12th_MEU_Armor {
    displayName="Armor";  // Armored vehicles (tanks, APCs).
  };
  class 12th_MEU_Drones {
    displayName="Drones";  // Unmanned aerial vehicles (UAVs).
  };
  class 12th_MEU_Supplies {
    displayName="Supplies";  // Supply and logistics assets.
  };
  class 12th_MEU_FixedWing {
    displayName="Fixed Wing Aircraft";  // Fixed-wing aircraft (jets, planes).
  };
  class 12th_MEU_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };

  // 12th Insurrection Assets
  class 12th_MEU_INS_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };

  // 12th CMA Assets
  class 12th_MEU_CMA_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };
};
