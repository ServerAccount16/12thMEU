class CfgAmmo
{
  class BulletBase;            // Base class for all bullet-type ammunition. However, this is only used for BB ammo right now
  class OPTRE_B_95x40_Ball;    // Base class for 9.5x40mm Ball ammo
  class OPTRE_B_5x23_Caseless; // Base class for 5x23mm Caseless ammo
  class M319_HEAT;             // Base class for 40mm HEAT grenades
  class M_NLAW_AT_F;

  // Training ammunition configuration
  class twelfth_20g_bb : BulletBase
  {
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
    cartridge = "";
    hit = 0; // Non-lethal training rounds. I will probably change this later so it bruises
    indirectHit = 0;
    indirectHitRange = 0;
    cost = 100;
    typicalSpeed = 380; // Speed in meters per second
    airFriction = -0.0016;
    caliber = 1.2;
    deflecting = -1;
    airLock = 1;
    tracerScale = 0.75;
    tracerBeginTime = 0.01;
    tracerEndTime = 20;
    nvgOnly = 0;
    audibleFire = 30;
    aiAmmoUsageFlags = 64;
    dangerRadiusBulletClose = 4;
    dangerRadiusHit = 8;
    suppressionRadiusBulletClose = 2;
    suppressionRadiusHit = 4; // Who says you can't suppress someone with BB's?
  };

  // Underwater rifle ammunition configuration
  class twelfth_95x40_UW : OPTRE_B_95x40_Ball
  {
    typicalSpeed = 700;
    waterFriction = -0.00096;
    timeToLive = 0.12;
    effectFly = "AmmoUnderwater";
  };

  class twelfth_5x23mm_UW : OPTRE_B_5x23_Caseless
  {
    typicalSpeed = 700;
    waterFriction = -0.00096;
    timeToLive = 0.12;
    effectFly = "AmmoUnderwater";
  };

  // High-Explosive Anti-Tank (HEAT) grenade configuration
  class twelfth_40mmG_HEAT : M319_HEAT
  {
    ace_frag_metal = 2000; // Amount of metal fragments generated
    indirectHitRange = 0.1;
    hit = 470; // Damage caused by the explosion
  };

  class 12th_m96_rocket_heat: M_NLAW_AT_F {
        model = "DMNS\Weapons\Launchers\M96_rocket.p3d";
        hit = 600;
        indirectHit = 20;
        indirectHitRange = 2;
        explosive = 0.8;
        cost = 500;
        airFriction = 0;
        sideairFriction = 0;
        coefGravity = 0;
        maxSpeed = 450;
        typicalSpeed = 250;
        initTime = 0.2;
        thrustTime = 0.8;
        thrust = 100;
        fuseDistance = 20;
        simulationStep = 0.02;
        timeToLive = 30;
        effectsMissile = "missile3";
        whistleDist = 20;
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        submunitionAmmo = "ammo_Penetrator_Titan_AT";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = { 0, 0, -0.2 };
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        flightProfiles[] = { "Direct" };
        class Direct {};
    };
};