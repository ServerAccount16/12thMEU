#pragma hemtt suppress pw3_padded_arg config
#include "config_macros.hpp"

class CfgPatches {
    class twelfth_tagging {
        units[] = {""};
        weapons[] = {
            "twelfth_spray_hq"
        };
        requiredAddons[] = {
            "ace_interaction",
            "ace_tagging"
        };
        requiredVersion = 0.1;
        version = 0.1;
    };
};

class CfgVehicles {};

// Define custom spray can items for each platoon and miscellaneous sprays
class CfgWeapons {
    class ACE_SpraypaintBlack; // Base class for spray can items
    class CBA_MiscItem_ItemInfo; // Base class for item information

    // Define spray cans for each platoon
    class twelfth_spray_hq: ACE_SpraypaintBlack {
        displayName = "HQ Spray";
        descriptionShort = "HQ Spray";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class twelfth_spray_1stplt: ACE_SpraypaintBlack {
        displayName = "1st Platoon Spray";
        descriptionShort = "1st Platoon Spray";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class twelfth_spray_2ndplt: ACE_SpraypaintBlack {
        displayName = "2nd Platoon Spray";
        descriptionShort = "2nd Platoon Spray";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class twelfth_spray_misc: ACE_SpraypaintBlack {
        displayName = "Miscellaneous Spray";
        descriptionShort = "Miscellaneous Spray";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
};

// Define the tags that can be applied using the spray cans
class ACE_Tags {
    // Define tags for HQ, 1st Platoon, and 2nd Platoon
    class hq {
        displayName = "HQ";
        texture = "path\to\hq\texture.paa";
        weapon = "twelfth_spray_hq";
    };

    class 1stplt {
        displayName = "1st Platoon";
        texture = "path\to\1stplt\texture.paa";
        weapon = "twelfth_spray_1stplt";
    };

    class 2ndplt {
        displayName = "2nd Platoon";
        texture = "path\to\2ndplt\texture.paa";
        weapon = "twelfth_spray_2ndplt";
    };

    // Define miscellaneous tags that can be used with the misc spray can
    class misc_lb {
        displayName = "12th Logo (Black)";
        texture = "path\to\misc\12thLogoBlack.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_lw {
        displayName = "12th Logo (White)";
        texture = "path\to\misc\12thLogoWhite.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_bs {
        displayName = "Blank Square";
        texture = "path\to\misc\BlankSquare.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_au {
        displayName = "Arrow Up";
        texture = "path\to\misc\ArrowUp.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_ar {
        displayName = "Arrow Right";
        texture = "path\to\misc\ArrowRight.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_ad {
        displayName = "Arrow Down";
        texture = "path\to\misc\ArrowDown.paa";
        weapon = "twelfth_spray_misc";
    };

    class misc_al {
        displayName = "Arrow Left";
        texture = "path\to\misc\ArrowLeft.paa";
        weapon = "twelfth_spray_misc";
    };
};
