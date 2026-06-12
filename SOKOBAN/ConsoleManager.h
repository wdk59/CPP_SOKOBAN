#pragma once
#include <string_view>

class ConsoleManager
{
/* Manager라서 함수랑 변수 전부 static으로 관리 */
public :
	enum class ColorType : int
	{
		BLACK,
		DARK_BLUE,
		DARK_GREEN,
		DARK_SKYBLUE,
		DARK_RED,
		DARK_PURPLE,
		DARK_YELLOW,
		GRAY,
		DARK_GRAY,
		BLUE,
		GREEN,
		SKYBLUE,
		RED,
		PURPLE,
		YELLOW,
		WHITE,
		NUM_OF_COLORS
	};

private :
	static constexpr int ScreenWidth = 30;
	static constexpr int ScreenHeight = 50;
	inline static const std::string_view Title = "SOKOBAN";

public :

	void SetConsole();
	void SetFontColor(ColorType InColor);
};
