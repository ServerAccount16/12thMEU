/*
  ==============================================================================
  config_macros.hpp

  This file contains macro definitions used throughout the config for brevity.
  It helps avoid repetitive code. For instance, using `COMMON_SIGHTS` in multiple
  weapon configs ensures a consistent set of attachments.

  If you add new attachments, simply update the macros here.
  ==============================================================================
*/
// Start Attachment Macros
#define COMMON_SIGHTS {"optic_arco_ak_blk_f", "optic_dms", "optic_aco_grn", "optic_aco", "optic_arco_blk_f", "optic_holosight_blk_f", "optic_mrco", "optic_khs_blk", "optic_hamr", "optic_sos", "optic_lrps", "optic_nightstalker", "optic_erco_blk_f", "optic_ams", "optic_yorris", "optic_ico_01_black_f", "optic_aco_smg", "optic_aco_grn_smg", "optic_holosight_smg_blk_f", "optic_mrd_black", "optic_tws", "optic_nvs", "ace_optic_arco_2d", "ace_optic_arco_pip", "ace_optic_lrps_2d", "ace_optic_lrps_pip", "ace_optic_sos_2d", "ace_optic_sos_pip", "ace_optic_mrco_2d", "ace_optic_hamr_2d", "ace_optic_hamr_pip", "OPTRE_M7_Sight", "OPTRE_HMG38_CarryHandle", "OPTRE_M12_Optic", "OPTRE_M12_Optic_Red", "OPTRE_M12_Optic_Green", "OPTRE_M6C_Scope", "OPTRE_M6G_Scope", "Optre_Recon_Sight", "Optre_Recon_Sight_Red", "Optre_Recon_Sight_Green", "Optre_Recon_Sight_Desert", "Optre_Recon_Sight_UNSC", "Optre_Recon_Sight_Snow", "OPTRE_BR45_Scope", "OPTRE_BR55HB_Scope", "OPTRE_BR55HB_Scope_Grey", "OPTRE_BMR_Scope", "OPTRE_M392_Scope", "OPTRE_M393_Scope", "OPTRE_M393_ACOG", "OPTRE_M393_EOTECH", "OPTRE_SRM_Sight", "OPTRE_SRS99C_Scope", "OPTRE_SRS99_Scope", "OPTRE_M73_SmartLink", "OPTRE_MA5_SmartLink", "OPTRE_MA5C_SmartLink", "OPTRE_MA5_BUIS", "19_UNSC_br_scope", "19_UNSC_evosd", "19_UNSC_evo"}
#define COMMON_BR_SIGHTS {"OPTRE_M7_Sight", "OPTRE_M12_Optic", "OPTRE_M12_Optic_Red", "OPTRE_M12_Optic_Green", "Optre_Recon_Sight", "Optre_Recon_Sight_Red", "Optre_Recon_Sight_Green", "Optre_Recon_Sight_Desert", "Optre_Recon_Sight_UNSC", "Optre_Recon_Sight_Snow", "OPTRE_BR55HB_Scope", "19_UNSC_br_scope", "19_UNSC_evo"}
#define COMMON_RAIL_ATTACHMENTS {"OPTRE_BMR_Laser", "ACE_acc_pointer_red", "ace_acc_pointer_green", "ACE_acc_pointer_green_IR", "acc_pointer_ir", "OPTRE_M12_Laser"}
#define COMMON_LIGHT_BIPOD {"bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk"}
#define COMMON_MEDIUM_BIPOD {"bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "dzn_tripod_rifle"}
#define COMMON_HEAVY_BIPOD {"bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk", "12th_MG_Tripod"}
// Start Magazine Macros
// Start Rifle Macros
#define COMMON_MA5C_MAGAZINES {"OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer", "OPTRE_32Rnd_762x51_Mag_UW" }
#define COMMON_BR_MAGAZINES {"OPTRE_36Rnd_95x40_Mag", "OPTRE_36Rnd_95x40_Mag_Tracer", "twelfth_br_36Rnd_UW"}
#define COMMON_SMG_MAGAZINES {"twelfth_m7_60rnd_UW", "twelfth_m7_48rnd_UW", "OPTRE_60Rnd_5x23mm_Mag", "OPTRE_60Rnd_5x23mm_Mag_tracer", "OPTRE_48Rnd_5x23mm_Mag", "OPTRE_48Rnd_5x23mm_Mag_tracer"}
// Start Secondary Macros
#define COMMON_M6_MAGAZINES {"OPTRE_8Rnd_127x40_Mag", "OPTRE_8Rnd_127x40_Mag_Tracer", "OPTRE_16Rnd_127x40_Mag", "OPTRE_16Rnd_127x40_Mag_Tracer"}
// Start 40mm Macros
#define COMMON_GL_MAGS {"M319_HE_Grenade_Shell", "M319_HEDP_Grenade_Shell", "M319_HEAT_Grenade_Shell", "M319_Smoke", "M319_Smoke_Orange", "M319_Smoke_Green", "M319_Smoke_Red", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "3Rnd_UGL_FlareYellow_F", "3Rnd_UGL_FlareCIR_F", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "OPTRE_signalSmokeB", "OPTRE_signalSmokeG", "OPTRE_signalSmokeO", "OPTRE_signalSmokeP", "OPTRE_signalSmokeR", "OPTRE_signalSmokeY", "twelfth_40mm_heat"}
// Tripod/Deployed MG Macros for animations
#define DEPLOYED_GESTURE_GPMG \
	dzn_MG_Tripod_deployedGesture[] = {"dzn_MG_Tripod_GestureHoldType1","dzn_MG_Tripod_GestureHoldCrouchType1","dzn_MG_Tripod_GestureHoldProneType1"}

#define RELOAD_EH \
	class EventHandlers: EventHandlers \
	{ \
		class dzn_MG_Tripod \
		{ \
			reload = "_this call dzn_MG_Tripod_fnc_handleReloadEH"; \
			reloaded = "_this call dzn_MG_Tripod_fnc_handleReloadedEH"; \
		}; \
	}    