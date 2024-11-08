#include "config_macros.hpp"

class CfgPatches {
  class 12th_ui {
    units[]= {};
    weapons[]= {};
    requiredVersion=0.1;
    requiredAddons[] = {
      "cba_main",
      "ace_main",
      "19th_Fleet_Armor"
    };
  };
};

class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 

class RscDisplayMPPlayers;

class RscTitles {
  class SplashNoise {
    class BackgroundNoise: RscPicture { text=""; };
  };
  class BrokenHUD: SplashNoise {
    duration=100000000;
    class BackgroundNoise: RscPicture { text=""; };
  };
};

class RscDisplayMain: RscStandardDisplay {
  class Controls {
    delete Spotlight1;
    delete Spotlight2;
    delete Spotlight3;
    delete BackgroundSpotlightRight;
    delete BackgroundSpotlightLeft;
    delete BackgroundSpotlight;

    // Add in a custom 12th logo, this is a hack, don't do this
    class 12thLogo: RscPicture {
      idc=-1;
      text="\x\12thMEU\addons\12th_ui\data\12th_a3_logo.paa";
      x = "0.46375 * safezoneW + safezoneX";
      y = "0.01 * safezoneH + safezoneY";
      w = "0.07 * safezoneW";
      h = "0.07 * safezoneH";
    };

    // Remove the default logo
    class Logo: RscPicture {
      idc=-1;
      text="";
    };
  };
  enableDisplay=0;
  delete Spotlight;
  class RscActiveText;
  class RscActivePicture: RscActiveText {
    style=48;
    color[]= {1, 1, 1, 0.500000};
    colorActive[]= {1, 1, 1, 1};
  };
  // TODO -
  // write this such that it can pick from n amount of random bg's
  class ControlsBackground {
    RSC_PIC(LoadingPic,data\main_menu_bg.jpg)
  };
};

class RscDisplayLoading {
  class Variants {
    class LoadingOne {
      idd = 250;
      class Controls {
        RSC_PIC(LoadingPic,data\loading_bg.jpg)
      };
    };
  };
};

class RscDisplayLoadMission : RscStandardDisplay {
  class ControlsBackground {
    RSC_PIC(LoadingPic,data\loading_bg.jpg)
  };
};

class RscDisplayStart: RscStandardDisplay {
  class Controls {
    RSC_PIC(LoadingPic,data\loading_bg.jpg)
  };
};

class RscDisplayClientWait : RscDisplayMPPlayers {
  RSC_PIC(LoadingPic,data\loading_bg.jpg)
};

class RscDisplayClient : RscStandardDisplay {
  class ControlsBackground {
    RSC_PIC(LoadingPic,data\loading_bg.jpg)
  };
};