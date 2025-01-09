/*
  ==============================================================================
  config_macros.hpp

  This file contains macros that handle:
    1. File path building: P() and QP().
    2. Default inventories: STDINV and MEDINV (for medical vehicles).
    3. Any custom macros for vehicle definitions, textures, or properties.

  Notably, `STOMPER_SP_INFO(...)` is alluded to in config.cpp but not defined here;
  you'd add it if you want to apply special side/faction/spawn properties consistently.
  ==============================================================================
*/
#define P(PATH) \x\12thMEU\addons\12th_vehicles\##PATH
    // Concatenates the internal path for your 12th_vehicles addon, e.g.:
    // P(mySubfolder\something.paa) => \x\12thMEU\addons\12th_vehicles\mySubfolder\something.paa
#define QP(PATH) #P(PATH)
    // Wraps the path in quotes to produce a string.

// -----------------------------------------------------------------------------
//  Macro: STDINV
//  This macro sets a “Standard” default inventory for a vehicle’s cargo.
//  Typically includes common magazines, grenades, and some medical items.
// -----------------------------------------------------------------------------
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

// -----------------------------------------------------------------------------
//  Macro: MEDINV
//  This macro sets a “Medical” oriented default inventory for a vehicle’s cargo.
//  Typically used by dedicated medical vehicles or logistic vehicles that
//  specialize in treatment items.
// -----------------------------------------------------------------------------
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