// Define the mod's dependencies and version requirements.
class CfgPatches {
  class twelfth_faction_data {
    units[] = {};  // No units defined yet.
    weapons[] = {};  // No weapons defined yet.
    requiredVersion = 0.1;  // Minimum required game version.
    requiredAddons[] = {"A3_Characters_F_BLUFOR"};  // Dependencies.
  };
};

// Define faction classes for the 12th Marine Expeditionary Unit (MEU)
// including Marine, Insurrection, and CMA assets.
class CfgFactionClasses {
  class twelfth_MEU {
    displayName = "12th Marine Expeditionary Unit";
    icon="";  // TODO: Add faction icon.
    author="Weber";
    priority=99;  // High priority to ensure it appears at the top of the list.
    side=1;  // Blufor (friendly) side.
  };
  class twelfth_MEU_Ins {
    displayName="12th Insurrection Assets";
    icon="";  // TODO: Add faction icon.
    author="Weber";
    priority=99;
    side=2;  // Opfor (enemy) side.
  };
  class twelfth_MEU_CMA {
    displayName="12th CMA Assets";
    icon="";  // TODO: Add faction icon.
    author="Weber";
    priority=99;
    side=3;  // Independent side.
  };
};

// Define editor categories for the 12th MEU factions.
class CfgEditorCategories {
  class twelfth_MEU {
    displayName="12th Marine Expeditionary Unit";
    priority=99;  // High priority for easy access.
    side=1;  // Blufor (friendly) side.
  };
  class twelfth_MEU_Ins {
    displayName="12th Insurrection Assets";
    priority=99;
    side=2;  // Opfor (enemy) side.
  };
  class twelfth_MEU_CMA {
    displayName="12th CMA Assets";
    priority=99;
    side=3;  // Independent side.
  };
};

// Define editor subcategories for various asset types within each faction.
class CfgEditorSubcategories {
  // 12th MEU Marine Assets
  class twelfth_MEU_Rotary {
    displayName="Rotary Aircraft";  // Rotary-wing aircraft (helicopters).
  };
  class twelfth_MEU_Cars {
    displayName="Cars";  // Ground vehicles (cars, trucks).
  };
  class twelfth_MEU_Armor {
    displayName="Armor";  // Armored vehicles (tanks, APCs).
  };
  class twelfth_MEU_Drones {
    displayName="Drones";  // Unmanned aerial vehicles (UAVs).
  };
  class twelfth_MEU_Supplies {
    displayName="Supplies";  // Supply and logistics assets.
  };
  class twelfth_MEU_FixedWing {
    displayName="Fixed Wing Aircraft";  // Fixed-wing aircraft (jets, planes).
  };
  class twelfth_MEU_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };

  // 12th Insurrection Assets
  class twelfth_MEU_INS_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };

  // 12th CMA Assets
  class twelfth_MEU_CMA_Turrets {
    displayName="Turrets";  // Static defensive turrets.
  };
};
