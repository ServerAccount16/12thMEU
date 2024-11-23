#define P(PATH) \x\12thMEU\addons\12th_vehicles\##PATH
#define QP(PATH) #P(PATH)

// Default vehicle inventory
#define STDINV   \
class TransportMagazines {      \
    class _xx_OPTRE_32Rnd_762x51_Mag_Tracer { magazine = "OPTRE_32Rnd_762x51_Mag_Tracer"; count = 10; };    \
    class _xx_OPTRE_36Rnd_95x40_Mag_Tracer { magazine = "OPTRE_36Rnd_95x40_Mag_Tracer"; count = 6; };   \
};  \
class TransportWeapons {    \
    class _xx_twelfth_m96 { weapon = "twelfth_m96"; count = 1; };   \
};  \
class TransportItems{   \
    class _xx_ACE_IR_Strobe_Item { name = "ACE_IR_Strobe_Item"; count = 2; };   \
    class _xx_OPTRE_M9_Frag { name = "OPTRE_M9_Frag"; count = 4; }; \
    class _xx_OPTRE_M2_Smoke { name = "OPTRE_M2_Smoke"; count = 4; };   \
    class _xx_OPTRE_M2_Smoke_Blue { name = "OPTRE_M2_Smoke_Blue"; count = 1; }; \
    class _xx_ACE_M84 { name = "ACE_M84"; count = 4; }; \
    class _xx_kat_IFAK { name = "kat_IFAK"; count = 2; };   \
    class _xx_ACE_plasmaIV_500 { name = "ACE_plasmaIV_500"; count = 2; };   \
    class _xx_ACE_CableTie { name = "ACE_CableTie"; count = 10; };  \
    class _xx_ACE_WaterBottle { name = "ACE_WaterBottle"; count = 2; }; \
};  

// Medical inventory 
#define MEDINV   \
class TransportMagazines {      \
    class _xx_OPTRE_32Rnd_762x51_Mag_Tracer { magazine = "OPTRE_32Rnd_762x51_Mag_Tracer"; count = 4; };    \
    class _xx_OPTRE_36Rnd_95x40_Mag_Tracer { magazine = "OPTRE_36Rnd_95x40_Mag_Tracer"; count = 4; };   \
};  \
class TransportItems{   \
    class _xx_kat_IV_16 { name = "kat_IV_16"; count = 10; };        \
    class _xx_kat_AFAK { name = "kat_AFAK"; count = 4; };       \
    class _xx_kat_MFAK { name = "kat_MFAK"; count = 2; };       \
    class _xx_ACE_tourniquet { name = "ACE_tourniquet"; count = 8; };       \
    class _xx_kat_bloodIV_O_N_500 { name = "kat_bloodIV_O_N_500"; count = 10; };        \
    class _xx_ACE_splint { name = "ACE_splint"; count = 8; };       \
    class _xx_ACE_morphine { name = "ACE_morphine"; count = 10; };      \
    class _xx_ACE_adenosine { name = "ACE_adenosine"; count = 10; };        \
    class _xx_ACE_epinephrine { name = "ACE_epinephrine"; count = 10; };        \
    class _xx_ACE_salineIV { name = "ACE_salineIV"; count = 5; };       \
    class _xx_ACE_suture { name = "ACE_suture"; count = 40; };      \
};  \