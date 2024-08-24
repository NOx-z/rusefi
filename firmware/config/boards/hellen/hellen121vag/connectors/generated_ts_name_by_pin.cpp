//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/hellen121vag/connectors/main.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A6: return "86 - CAM1";
		case Gpio::A7: return "87 - CAM2";
		case Gpio::A9: return "104 Wastegate";
		case Gpio::B1: return "82 - VR";
		case Gpio::C1: return "101 - MAP2";
		case Gpio::C6: return "117 ETB_OUT+";
		case Gpio::C7: return "118 ETB_OUT-";
		case Gpio::C8: return "120 - VVT2 B2";
		case Gpio::C9: return "18 - VVT2 B1";
		case Gpio::D10: return "88 - INJ_4";
		case Gpio::D11: return "97 - INJ_3";
		case Gpio::D13: return "37 - TACH";
		case Gpio::D14: return "105 - IDLE rev A,B";
		case Gpio::D15: return "OUT_FUEL_CONSUMPTION";
		case Gpio::D9: return "113 INJ 5";
		case Gpio::E12: return "In D1";
		case Gpio::E13: return "In D2";
		case Gpio::E14: return "In D3";
		case Gpio::E15: return "In D4";
		case Gpio::E2: return "103 - IGN_5";
		case Gpio::E3: return "94 - IGN_4";
		case Gpio::E4: return "111 - IGN_3";
		case Gpio::E5: return "7 - IGN_2";
		case Gpio::F10: return "39 - IN RES2";
		case Gpio::F11: return "54 - VSS";
		case Gpio::F12: return "112 INJ 6";
		case Gpio::F13: return "19 - INJ 7";
		case Gpio::F14: return "24 - INJ 8";
		case Gpio::F8: return "auxP3 switch";
		case Gpio::F9: return "48 - IN RES1";
		case Gpio::G3: return "115 - VVT1_2";
		case Gpio::G4: return "47 - CEL";
		case Gpio::G5: return "105 - IDLE rev C+";
		case Gpio::G7: return "96 - INJ_1";
		case Gpio::G8: return "89 - INJ_2";
		case Gpio::H14: return "65 - Fuel Pump";
		case Gpio::I0: return "22 - VVT1 1";
		case Gpio::I2: return "Main Relay";
		case Gpio::I5: return "110 - IGN_6";
		case Gpio::I6: return "8 - IGN_7";
		case Gpio::I7: return "95 - IGN_8";
		case Gpio::I8: return "102 - IGN_1";
		default: return nullptr;
	}
	return nullptr;
}
