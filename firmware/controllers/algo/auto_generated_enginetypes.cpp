#include "global.h"
#include "engine_types.h"
// was generated automatically by rusEFI tool  from engine_types.h // by enum_to_string.jar tool on Wed Aug 14 01:02:08 UTC 2024
// see also gen_config_and_enums.bat



const char *getBench_mode_e(bench_mode_e value){
switch(value) {
case BENCH_AC_COMPRESSOR_RELAY:
  return "BENCH_AC_COMPRESSOR_RELAY";
case BENCH_AUXOUT0:
  return "BENCH_AUXOUT0";
case BENCH_AUXOUT1:
  return "BENCH_AUXOUT1";
case BENCH_AUXOUT2:
  return "BENCH_AUXOUT2";
case BENCH_AUXOUT3:
  return "BENCH_AUXOUT3";
case BENCH_AUXOUT4:
  return "BENCH_AUXOUT4";
case BENCH_AUXOUT5:
  return "BENCH_AUXOUT5";
case BENCH_AUXOUT6:
  return "BENCH_AUXOUT6";
case BENCH_AUXOUT7:
  return "BENCH_AUXOUT7";
case BENCH_CANCEL:
  return "BENCH_CANCEL";
case BENCH_CHECK_ENGINE_LIGHT:
  return "BENCH_CHECK_ENGINE_LIGHT";
case BENCH_FAN_RELAY:
  return "BENCH_FAN_RELAY";
case BENCH_FAN_RELAY_2:
  return "BENCH_FAN_RELAY_2";
case BENCH_FUEL_PUMP:
  return "BENCH_FUEL_PUMP";
case BENCH_GPPWM1_VALVE:
  return "BENCH_GPPWM1_VALVE";
case BENCH_GPPWM2_VALVE:
  return "BENCH_GPPWM2_VALVE";
case BENCH_GPPWM3_VALVE:
  return "BENCH_GPPWM3_VALVE";
case BENCH_GPPWM4_VALVE:
  return "BENCH_GPPWM4_VALVE";
case BENCH_HPFP_VALVE:
  return "BENCH_HPFP_VALVE";
case BENCH_IDLE_VALVE:
  return "BENCH_IDLE_VALVE";
case BENCH_MAIN_RELAY:
  return "BENCH_MAIN_RELAY";
case BENCH_SECOND_IDLE_VALVE:
  return "BENCH_SECOND_IDLE_VALVE";
case BENCH_STARTER_DISABLE_RELAY:
  return "BENCH_STARTER_DISABLE_RELAY";
case BENCH_STARTER_ENABLE_RELAY:
  return "BENCH_STARTER_ENABLE_RELAY";
case BENCH_VVT0_VALVE:
  return "BENCH_VVT0_VALVE";
case BENCH_VVT1_VALVE:
  return "BENCH_VVT1_VALVE";
case BENCH_VVT2_VALVE:
  return "BENCH_VVT2_VALVE";
case BENCH_VVT3_VALVE:
  return "BENCH_VVT3_VALVE";
case HD_ACR:
  return "HD_ACR";
case HD_ACR2:
  return "HD_ACR2";
  }
 return NULL;
}
const char *getDebug_mode_e(debug_mode_e value){
switch(value) {
case DBG_0:
  return "DBG_0";
case DBG_1:
  return "DBG_1";
case DBG_10:
  return "DBG_10";
case DBG_11:
  return "DBG_11";
case DBG_12:
  return "DBG_12";
case DBG_13:
  return "DBG_13";
case DBG_16:
  return "DBG_16";
case DBG_19:
  return "DBG_19";
case DBG_2:
  return "DBG_2";
case DBG_20:
  return "DBG_20";
case DBG_21:
  return "DBG_21";
case DBG_22:
  return "DBG_22";
case DBG_24:
  return "DBG_24";
case DBG_25:
  return "DBG_25";
case DBG_26:
  return "DBG_26";
case DBG_27:
  return "DBG_27";
case DBG_29:
  return "DBG_29";
case DBG_32:
  return "DBG_32";
case DBG_34:
  return "DBG_34";
case DBG_35:
  return "DBG_35";
case DBG_36:
  return "DBG_36";
case DBG_37:
  return "DBG_37";
case DBG_38:
  return "DBG_38";
case DBG_43:
  return "DBG_43";
case DBG_46:
  return "DBG_46";
case DBG_5:
  return "DBG_5";
case DBG_6:
  return "DBG_6";
case DBG_7:
  return "DBG_7";
case DBG_8:
  return "DBG_8";
case DBG_9:
  return "DBG_9";
case DBG_COMPOSITE_LOG:
  return "DBG_COMPOSITE_LOG";
case DBG_DWELL_METRIC:
  return "DBG_DWELL_METRIC";
case DBG_DYNO_VIEW:
  return "DBG_DYNO_VIEW";
case DBG_ELECTRONIC_THROTTLE_PID:
  return "DBG_ELECTRONIC_THROTTLE_PID";
case DBG_EL_ACCEL:
  return "DBG_EL_ACCEL";
case DBG_ETB_AUTOTUNE:
  return "DBG_ETB_AUTOTUNE";
case DBG_EXECUTOR:
  return "DBG_EXECUTOR";
case DBG_ION:
  return "DBG_ION";
case DBG_KNOCK:
  return "DBG_KNOCK";
case DBG_LOGIC_ANALYZER:
  return "DBG_LOGIC_ANALYZER";
case DBG_LUA:
  return "DBG_LUA";
case DBG_METRICS:
  return "DBG_METRICS";
case DBG_SR5_PROTOCOL:
  return "DBG_SR5_PROTOCOL";
case DBG_STEPPER_IDLE_CONTROL:
  return "DBG_STEPPER_IDLE_CONTROL";
case DBG_TCU:
  return "DBG_TCU";
case DBG_TLE8888:
  return "DBG_TLE8888";
case DBG_UNUSED41:
  return "DBG_UNUSED41";
case DBG_UNUSED_42:
  return "DBG_UNUSED_42";
case UNUSED23:
  return "UNUSED23";
  }
 return NULL;
}
const char *getEngine_type_e(engine_type_e value){
switch(value) {
case engine_type_e::BMW_M52:
  return "BMW_M52";
case engine_type_e::BMW_M73_MRE:
  return "BMW_M73_MRE";
case engine_type_e::BMW_M73_MRE_SLAVE:
  return "BMW_M73_MRE_SLAVE";
case engine_type_e::DEFAULT_FRANKENSO:
  return "DEFAULT_FRANKENSO";
case engine_type_e::DISCOVERY_PDM:
  return "DISCOVERY_PDM";
case engine_type_e::DODGE_NEON_1995:
  return "DODGE_NEON_1995";
case engine_type_e::DODGE_NEON_2003_CRANK:
  return "DODGE_NEON_2003_CRANK";
case engine_type_e::DODGE_RAM:
  return "DODGE_RAM";
case engine_type_e::EEPROM_BENCH_ENGINE:
  return "EEPROM_BENCH_ENGINE";
case engine_type_e::ETB_BENCH_ENGINE:
  return "ETB_BENCH_ENGINE";
case engine_type_e::ET_BOSCH_QUICK_START:
  return "ET_BOSCH_QUICK_START";
case engine_type_e::ET_TEST_WITH_BOSCH_QUICK_START:
  return "ET_TEST_WITH_BOSCH_QUICK_START";
case engine_type_e::ET_UNUSED_55:
  return "ET_UNUSED_55";
case engine_type_e::FERRARI_F136:
  return "FERRARI_F136";
case engine_type_e::FORD_ASPIRE_1996:
  return "FORD_ASPIRE_1996";
case engine_type_e::FORD_COYOTE:
  return "FORD_COYOTE";
case engine_type_e::FORD_ESCORT_GT:
  return "FORD_ESCORT_GT";
case engine_type_e::FORD_INLINE_6_1995:
  return "FORD_INLINE_6_1995";
case engine_type_e::FRANKENSO_BMW_M73_F:
  return "FRANKENSO_BMW_M73_F";
case engine_type_e::FRANKENSO_MIATA_NA6_MAP:
  return "FRANKENSO_MIATA_NA6_MAP";
case engine_type_e::FRANKENSO_QA_ENGINE:
  return "FRANKENSO_QA_ENGINE";
case engine_type_e::FRANKENSO_TEST_33810:
  return "FRANKENSO_TEST_33810";
case engine_type_e::FRANKENSO_TEST_TLE9104:
  return "FRANKENSO_TEST_TLE9104";
case engine_type_e::FUEL_BENCH:
  return "FUEL_BENCH";
case engine_type_e::GM_SBC:
  return "GM_SBC";
case engine_type_e::GY6_139QMB:
  return "GY6_139QMB";
case engine_type_e::HARLEY:
  return "HARLEY";
case engine_type_e::HELLEN_121_NISSAN_4_CYL:
  return "HELLEN_121_NISSAN_4_CYL";
case engine_type_e::HELLEN_121_NISSAN_6_CYL:
  return "HELLEN_121_NISSAN_6_CYL";
case engine_type_e::HELLEN_121_NISSAN_8_CYL:
  return "HELLEN_121_NISSAN_8_CYL";
case engine_type_e::HELLEN_121_NISSAN_ALMERA_N16:
  return "HELLEN_121_NISSAN_ALMERA_N16";
case engine_type_e::HELLEN_121_VAG_4_CYL:
  return "HELLEN_121_VAG_4_CYL";
case engine_type_e::HELLEN_121_VAG_5_CYL:
  return "HELLEN_121_VAG_5_CYL";
case engine_type_e::HELLEN_121_VAG_8_CYL:
  return "HELLEN_121_VAG_8_CYL";
case engine_type_e::HELLEN_121_VAG_V6_CYL:
  return "HELLEN_121_VAG_V6_CYL";
case engine_type_e::HELLEN_121_VAG_VR6_CYL:
  return "HELLEN_121_VAG_VR6_CYL";
case engine_type_e::HELLEN_128_MERCEDES_4_CYL:
  return "HELLEN_128_MERCEDES_4_CYL";
case engine_type_e::HELLEN_128_MERCEDES_6_CYL:
  return "HELLEN_128_MERCEDES_6_CYL";
case engine_type_e::HELLEN_128_MERCEDES_8_CYL:
  return "HELLEN_128_MERCEDES_8_CYL";
case engine_type_e::HELLEN_154_HYUNDAI_COUPE_BK1:
  return "HELLEN_154_HYUNDAI_COUPE_BK1";
case engine_type_e::HELLEN_154_HYUNDAI_COUPE_BK2:
  return "HELLEN_154_HYUNDAI_COUPE_BK2";
case engine_type_e::HELLEN_154_VAG:
  return "HELLEN_154_VAG";
case engine_type_e::HELLEN_2CHAN_STIM_QC:
  return "HELLEN_2CHAN_STIM_QC";
case engine_type_e::HELLEN_4CHAN_STIM_QC:
  return "HELLEN_4CHAN_STIM_QC";
case engine_type_e::HELLEN_HONDA_BCM:
  return "HELLEN_HONDA_BCM";
case engine_type_e::HONDA_600:
  return "HONDA_600";
case engine_type_e::HONDA_K:
  return "HONDA_K";
case engine_type_e::HONDA_OBD1:
  return "HONDA_OBD1";
case engine_type_e::HONDA_OBD2A:
  return "HONDA_OBD2A";
case engine_type_e::HYUNDAI_PB:
  return "HYUNDAI_PB";
case engine_type_e::L9779_BENCH_ENGINE:
  return "L9779_BENCH_ENGINE";
case engine_type_e::MAVERICK_X3:
  return "MAVERICK_X3";
case engine_type_e::MAZDA_MIATA_NA6:
  return "MAZDA_MIATA_NA6";
case engine_type_e::MAZDA_MIATA_NA94:
  return "MAZDA_MIATA_NA94";
case engine_type_e::MAZDA_MIATA_NA96:
  return "MAZDA_MIATA_NA96";
case engine_type_e::MAZDA_MIATA_NB1:
  return "MAZDA_MIATA_NB1";
case engine_type_e::MAZDA_MIATA_NB2:
  return "MAZDA_MIATA_NB2";
case engine_type_e::MAZDA_MIATA_NB2_36:
  return "MAZDA_MIATA_NB2_36";
case engine_type_e::MAZDA_MIATA_NC:
  return "MAZDA_MIATA_NC";
case engine_type_e::ME17_9_MISC:
  return "ME17_9_MISC";
case engine_type_e::MERCEDES_M111:
  return "MERCEDES_M111";
case engine_type_e::MIATA_PROTEUS_TCU:
  return "MIATA_PROTEUS_TCU";
case engine_type_e::MINIMAL_PINS:
  return "MINIMAL_PINS";
case engine_type_e::MITSUBISHI_3A92:
  return "MITSUBISHI_3A92";
case engine_type_e::MITSUBISHI_4G93:
  return "MITSUBISHI_4G93";
case engine_type_e::MRE_BOARD_NEW_TEST:
  return "MRE_BOARD_NEW_TEST";
case engine_type_e::MRE_BODY_CONTROL:
  return "MRE_BODY_CONTROL";
case engine_type_e::MRE_SECONDARY_CAN:
  return "MRE_SECONDARY_CAN";
case engine_type_e::MRE_SUBARU_EJ18:
  return "MRE_SUBARU_EJ18";
case engine_type_e::MRE_VW_B6:
  return "MRE_VW_B6";
case engine_type_e::NISSAN_PRIMERA:
  return "NISSAN_PRIMERA";
case engine_type_e::POLARIS:
  return "POLARIS";
case engine_type_e::POLARIS_RZR:
  return "POLARIS_RZR";
case engine_type_e::PROTEUS_ANALOG_PWM_TEST:
  return "PROTEUS_ANALOG_PWM_TEST";
case engine_type_e::PROTEUS_BMW_M73:
  return "PROTEUS_BMW_M73";
case engine_type_e::PROTEUS_GM_LS_4:
  return "PROTEUS_GM_LS_4";
case engine_type_e::PROTEUS_LUA_DEMO:
  return "PROTEUS_LUA_DEMO";
case engine_type_e::PROTEUS_NISSAN_VQ35:
  return "PROTEUS_NISSAN_VQ35";
case engine_type_e::PROTEUS_QC_TEST_BOARD:
  return "PROTEUS_QC_TEST_BOARD";
case engine_type_e::PROTEUS_STIM_QC:
  return "PROTEUS_STIM_QC";
case engine_type_e::PROTEUS_VW_B6:
  return "PROTEUS_VW_B6";
case engine_type_e::SACHS:
  return "SACHS";
case engine_type_e::SIMULATOR_CONFIG:
  return "SIMULATOR_CONFIG";
case engine_type_e::SUBARU_EG33:
  return "SUBARU_EG33";
case engine_type_e::TCU_4R70W:
  return "TCU_4R70W";
case engine_type_e::TEST_100:
  return "TEST_100";
case engine_type_e::TEST_101:
  return "TEST_101";
case engine_type_e::TEST_33816:
  return "TEST_33816";
case engine_type_e::TEST_CRANK_ENGINE:
  return "TEST_CRANK_ENGINE";
case engine_type_e::TEST_DC_WASTEGATE_DISCOVERY:
  return "TEST_DC_WASTEGATE_DISCOVERY";
case engine_type_e::TEST_ENGINE:
  return "TEST_ENGINE";
case engine_type_e::TEST_ENGINE_VVT:
  return "TEST_ENGINE_VVT";
case engine_type_e::TEST_ISSUE_366_BOTH:
  return "TEST_ISSUE_366_BOTH";
case engine_type_e::TEST_ISSUE_366_RISE:
  return "TEST_ISSUE_366_RISE";
case engine_type_e::TEST_ISSUE_6451:
  return "TEST_ISSUE_6451";
case engine_type_e::TEST_ROTARY:
  return "TEST_ROTARY";
case engine_type_e::TOYOTA_1NZ_FE:
  return "TOYOTA_1NZ_FE";
case engine_type_e::TOYOTA_2JZ_GTE_VVTi:
  return "TOYOTA_2JZ_GTE_VVTi";
case engine_type_e::UNUSED102:
  return "UNUSED102";
case engine_type_e::UNUSED47:
  return "UNUSED47";
case engine_type_e::UNUSED67:
  return "UNUSED67";
case engine_type_e::UNUSED94:
  return "UNUSED94";
case engine_type_e::UNUSED_65:
  return "UNUSED_65";
case engine_type_e::UNUSED_97:
  return "UNUSED_97";
case engine_type_e::VW_ABA:
  return "VW_ABA";
case engine_type_e::WASTEGATE_PROTEUS_TEST:
  return "WASTEGATE_PROTEUS_TEST";
  }
 return NULL;
}
const char *getTrigger_type_e(trigger_type_e value){
switch(value) {
case trigger_type_e::TT_12_TOOTH_CRANK:
  return "TT_12_TOOTH_CRANK";
case trigger_type_e::TT_2JZ_3_34_SIMULATION_ONLY:
  return "TT_2JZ_3_34_SIMULATION_ONLY";
case trigger_type_e::TT_36_2_1:
  return "TT_36_2_1";
case trigger_type_e::TT_36_2_1_1:
  return "TT_36_2_1_1";
case trigger_type_e::TT_36_2_2_2:
  return "TT_36_2_2_2";
case trigger_type_e::TT_3_1_CAM:
  return "TT_3_1_CAM";
case trigger_type_e::TT_3_TOOTH_CRANK:
  return "TT_3_TOOTH_CRANK";
case trigger_type_e::TT_60DEG_TOOTH:
  return "TT_60DEG_TOOTH";
case trigger_type_e::TT_60_2_2_F3R:
  return "TT_60_2_2_F3R";
case trigger_type_e::TT_60_2_WRONG_POLARITY:
  return "TT_60_2_WRONG_POLARITY";
case trigger_type_e::TT_6_TOOTH_CRANK:
  return "TT_6_TOOTH_CRANK";
case trigger_type_e::TT_ARCTIC_CAT:
  return "TT_ARCTIC_CAT";
case trigger_type_e::TT_BENELLI_TRE:
  return "TT_BENELLI_TRE";
case trigger_type_e::TT_CHRYSLER_NGC_36_2_2:
  return "TT_CHRYSLER_NGC_36_2_2";
case trigger_type_e::TT_DAIHATSU_3_CYL:
  return "TT_DAIHATSU_3_CYL";
case trigger_type_e::TT_DAIHATSU_4_CYL:
  return "TT_DAIHATSU_4_CYL";
case trigger_type_e::TT_DEV:
  return "TT_DEV";
case trigger_type_e::TT_DODGE_NEON_1995:
  return "TT_DODGE_NEON_1995";
case trigger_type_e::TT_DODGE_NEON_1995_ONLY_CRANK:
  return "TT_DODGE_NEON_1995_ONLY_CRANK";
case trigger_type_e::TT_DODGE_NEON_2003_CAM:
  return "TT_DODGE_NEON_2003_CAM";
case trigger_type_e::TT_DODGE_NEON_2003_CRANK:
  return "TT_DODGE_NEON_2003_CRANK";
case trigger_type_e::TT_DODGE_RAM:
  return "TT_DODGE_RAM";
case trigger_type_e::TT_DODGE_STRATUS:
  return "TT_DODGE_STRATUS";
case trigger_type_e::TT_FIAT_IAW_P8:
  return "TT_FIAT_IAW_P8";
case trigger_type_e::TT_FORD_ASPIRE:
  return "TT_FORD_ASPIRE";
case trigger_type_e::TT_FORD_ST170:
  return "TT_FORD_ST170";
case trigger_type_e::TT_FORD_TFI_PIP:
  return "TT_FORD_TFI_PIP";
case trigger_type_e::TT_GM_24x_3:
  return "TT_GM_24x_3";
case trigger_type_e::TT_GM_24x_5:
  return "TT_GM_24x_5";
case trigger_type_e::TT_GM_60_2_2_2:
  return "TT_GM_60_2_2_2";
case trigger_type_e::TT_GM_7X:
  return "TT_GM_7X";
case trigger_type_e::TT_HALF_MOON:
  return "TT_HALF_MOON";
case trigger_type_e::TT_HONDA_CBR_600:
  return "TT_HONDA_CBR_600";
case trigger_type_e::TT_HONDA_K_CAM_4_1:
  return "TT_HONDA_K_CAM_4_1";
case trigger_type_e::TT_HONDA_K_CRANK_12_1:
  return "TT_HONDA_K_CRANK_12_1";
case trigger_type_e::TT_JEEP_18_2_2_2:
  return "TT_JEEP_18_2_2_2";
case trigger_type_e::TT_JEEP_4_CYL:
  return "TT_JEEP_4_CYL";
case trigger_type_e::TT_KAWA_KX450F:
  return "TT_KAWA_KX450F";
case trigger_type_e::TT_MAZDA_DOHC_1_4:
  return "TT_MAZDA_DOHC_1_4";
case trigger_type_e::TT_MAZDA_MIATA_NA:
  return "TT_MAZDA_MIATA_NA";
case trigger_type_e::TT_MAZDA_MIATA_VVT_TEST:
  return "TT_MAZDA_MIATA_VVT_TEST";
case trigger_type_e::TT_MAZDA_SOHC_4:
  return "TT_MAZDA_SOHC_4";
case trigger_type_e::TT_MERCEDES_2_SEGMENT:
  return "TT_MERCEDES_2_SEGMENT";
case trigger_type_e::TT_MIATA_VVT:
  return "TT_MIATA_VVT";
case trigger_type_e::TT_MITSU_4G63_CAM:
  return "TT_MITSU_4G63_CAM";
case trigger_type_e::TT_MITSU_4G63_CRANK:
  return "TT_MITSU_4G63_CRANK";
case trigger_type_e::TT_MITSU_4G9x_CAM:
  return "TT_MITSU_4G9x_CAM";
case trigger_type_e::TT_NARROW_SINGLE_TOOTH:
  return "TT_NARROW_SINGLE_TOOTH";
case trigger_type_e::TT_NISSAN_HR:
  return "TT_NISSAN_HR";
case trigger_type_e::TT_NISSAN_MR18_CAM_VVT:
  return "TT_NISSAN_MR18_CAM_VVT";
case trigger_type_e::TT_NISSAN_MR18_CRANK:
  return "TT_NISSAN_MR18_CRANK";
case trigger_type_e::TT_NISSAN_QR25:
  return "TT_NISSAN_QR25";
case trigger_type_e::TT_NISSAN_SR20VE:
  return "TT_NISSAN_SR20VE";
case trigger_type_e::TT_NISSAN_VQ30:
  return "TT_NISSAN_VQ30";
case trigger_type_e::TT_NISSAN_VQ35:
  return "TT_NISSAN_VQ35";
case trigger_type_e::TT_ONE_PLUS_ONE:
  return "TT_ONE_PLUS_ONE";
case trigger_type_e::TT_RENIX_44_2_2:
  return "TT_RENIX_44_2_2";
case trigger_type_e::TT_RENIX_66_2_2_2:
  return "TT_RENIX_66_2_2_2";
case trigger_type_e::TT_ROVER_K:
  return "TT_ROVER_K";
case trigger_type_e::TT_SKODA_FAVORIT:
  return "TT_SKODA_FAVORIT";
case trigger_type_e::TT_SUBARU_7_6:
  return "TT_SUBARU_7_6";
case trigger_type_e::TT_SUBARU_7_WITHOUT_6:
  return "TT_SUBARU_7_WITHOUT_6";
case trigger_type_e::TT_SUBARU_EZ30:
  return "TT_SUBARU_EZ30";
case trigger_type_e::TT_SUBARU_SVX:
  return "TT_SUBARU_SVX";
case trigger_type_e::TT_SUBARU_SVX_CAM_VVT:
  return "TT_SUBARU_SVX_CAM_VVT";
case trigger_type_e::TT_SUBARU_SVX_CRANK_1:
  return "TT_SUBARU_SVX_CRANK_1";
case trigger_type_e::TT_SUZUKI_G13B:
  return "TT_SUZUKI_G13B";
case trigger_type_e::TT_SUZUKI_K6A:
  return "TT_SUZUKI_K6A";
case trigger_type_e::TT_TOOTHED_WHEEL:
  return "TT_TOOTHED_WHEEL";
case trigger_type_e::TT_TOOTHED_WHEEL_32_2:
  return "TT_TOOTHED_WHEEL_32_2";
case trigger_type_e::TT_TOOTHED_WHEEL_36_1:
  return "TT_TOOTHED_WHEEL_36_1";
case trigger_type_e::TT_TOOTHED_WHEEL_36_2:
  return "TT_TOOTHED_WHEEL_36_2";
case trigger_type_e::TT_TOOTHED_WHEEL_60_2:
  return "TT_TOOTHED_WHEEL_60_2";
case trigger_type_e::TT_TRI_TACH:
  return "TT_TRI_TACH";
case trigger_type_e::TT_UNUSED:
  return "TT_UNUSED";
case trigger_type_e::TT_VVT_BARRA_3_PLUS_1:
  return "TT_VVT_BARRA_3_PLUS_1";
case trigger_type_e::TT_VVT_BOSCH_QUICK_START:
  return "TT_VVT_BOSCH_QUICK_START";
case trigger_type_e::TT_VVT_FORD_COYOTE:
  return "TT_VVT_FORD_COYOTE";
case trigger_type_e::TT_VVT_MAZDA_L:
  return "TT_VVT_MAZDA_L";
case trigger_type_e::TT_VVT_MAZDA_SKYACTIV:
  return "TT_VVT_MAZDA_SKYACTIV";
case trigger_type_e::TT_VVT_MIATA_NB:
  return "TT_VVT_MIATA_NB";
case trigger_type_e::TT_VVT_MITSUBISHI_3A92:
  return "TT_VVT_MITSUBISHI_3A92";
case trigger_type_e::TT_VVT_MITSUBISHI_4G69:
  return "TT_VVT_MITSUBISHI_4G69";
case trigger_type_e::TT_VVT_MITSU_6G72:
  return "TT_VVT_MITSU_6G72";
case trigger_type_e::TT_VVT_NISSAN_VQ35:
  return "TT_VVT_NISSAN_VQ35";
case trigger_type_e::TT_VVT_TOYOTA_3_TOOTH:
  return "TT_VVT_TOYOTA_3_TOOTH";
case trigger_type_e::TT_VVT_TOYOTA_4_1:
  return "TT_VVT_TOYOTA_4_1";
  }
 return NULL;
}
const char *getTs_14_command(ts_14_command value){
switch(value) {
case COMMAND_X14_UNUSED_0:
  return "COMMAND_X14_UNUSED_0";
case COMMAND_X14_UNUSED_1:
  return "COMMAND_X14_UNUSED_1";
case COMMAND_X14_UNUSED_2:
  return "COMMAND_X14_UNUSED_2";
case COMMAND_X14_UNUSED_3:
  return "COMMAND_X14_UNUSED_3";
case COMMAND_X14_UNUSED_4:
  return "COMMAND_X14_UNUSED_4";
case COMMAND_X14_UNUSED_5:
  return "COMMAND_X14_UNUSED_5";
case COMMAND_X14_UNUSED_9:
  return "COMMAND_X14_UNUSED_9";
case TS_BURN_WITHOUT_FLASH:
  return "TS_BURN_WITHOUT_FLASH";
case TS_ETB_AUTOCAL_0:
  return "TS_ETB_AUTOCAL_0";
case TS_ETB_AUTOCAL_1:
  return "TS_ETB_AUTOCAL_1";
case TS_ETB_RESET:
  return "TS_ETB_RESET";
case TS_ETB_START_AUTOTUNE:
  return "TS_ETB_START_AUTOTUNE";
case TS_ETB_STOP_AUTOTUNE:
  return "TS_ETB_STOP_AUTOTUNE";
case TS_EXTERNAL_TRIGGER_STIMULATOR_ENABLE:
  return "TS_EXTERNAL_TRIGGER_STIMULATOR_ENABLE";
case TS_GRAB_PEDAL_UP:
  return "TS_GRAB_PEDAL_UP";
case TS_GRAB_PEDAL_WOT:
  return "TS_GRAB_PEDAL_WOT";
case TS_RESET_MC33810:
  return "TS_RESET_MC33810";
case TS_RESET_TLE8888:
  return "TS_RESET_TLE8888";
case TS_TRIGGER_STIMULATOR_DISABLE:
  return "TS_TRIGGER_STIMULATOR_DISABLE";
case TS_TRIGGER_STIMULATOR_ENABLE:
  return "TS_TRIGGER_STIMULATOR_ENABLE";
case TS_WIDEBAND_UPDATE:
  return "TS_WIDEBAND_UPDATE";
case TS_WRITE_FLASH:
  return "TS_WRITE_FLASH";
  }
 return NULL;
}
const char *getTs_command_e(ts_command_e value){
switch(value) {
case TS_BENCH_CATEGORY:
  return "TS_BENCH_CATEGORY";
case TS_CLEAR_WARNINGS:
  return "TS_CLEAR_WARNINGS";
case TS_COMMAND_1:
  return "TS_COMMAND_1";
case TS_COMMAND_10:
  return "TS_COMMAND_10";
case TS_COMMAND_11:
  return "TS_COMMAND_11";
case TS_COMMAND_12:
  return "TS_COMMAND_12";
case TS_COMMAND_13:
  return "TS_COMMAND_13";
case TS_COMMAND_14:
  return "TS_COMMAND_14";
case TS_COMMAND_15:
  return "TS_COMMAND_15";
case TS_COMMAND_16:
  return "TS_COMMAND_16";
case TS_COMMAND_2:
  return "TS_COMMAND_2";
case TS_COMMAND_3:
  return "TS_COMMAND_3";
case TS_COMMAND_4:
  return "TS_COMMAND_4";
case TS_COMMAND_5:
  return "TS_COMMAND_5";
case TS_COMMAND_6:
  return "TS_COMMAND_6";
case TS_COMMAND_7:
  return "TS_COMMAND_7";
case TS_COMMAND_8:
  return "TS_COMMAND_8";
case TS_COMMAND_9:
  return "TS_COMMAND_9";
case TS_DEBUG_MODE:
  return "TS_DEBUG_MODE";
case TS_IGNITION_CATEGORY:
  return "TS_IGNITION_CATEGORY";
case TS_INJECTOR_CATEGORY:
  return "TS_INJECTOR_CATEGORY";
case TS_LUA_OUTPUT_CATEGORY:
  return "TS_LUA_OUTPUT_CATEGORY";
case TS_SET_DEFAULT_ENGINE:
  return "TS_SET_DEFAULT_ENGINE";
case TS_SET_ENGINE_TYPE:
  return "TS_SET_ENGINE_TYPE";
case TS_SOLENOID_CATEGORY:
  return "TS_SOLENOID_CATEGORY";
case TS_UNUSED_23:
  return "TS_UNUSED_23";
case TS_UNUSED_24:
  return "TS_UNUSED_24";
case TS_UNUSED_26:
  return "TS_UNUSED_26";
case TS_UNUSED_27:
  return "TS_UNUSED_27";
case TS_UNUSED_28:
  return "TS_UNUSED_28";
case TS_UNUSED_29:
  return "TS_UNUSED_29";
case TS_WIDEBAND:
  return "TS_WIDEBAND";
case TS_X14:
  return "TS_X14";
  }
 return NULL;
}
