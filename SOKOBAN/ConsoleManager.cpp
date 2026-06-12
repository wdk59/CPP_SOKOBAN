#include "ConsoleManager.h"

#include <Windows.h>

void ConsoleManager::SetConsole()
{
	system("mode con:cols=ScreenWidth lines=ScreenHeight");
	SetFontColor(ColorType::WHITE);
}

void ConsoleManager::SetFontColor(ColorType InColor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (int)InColor);
}
