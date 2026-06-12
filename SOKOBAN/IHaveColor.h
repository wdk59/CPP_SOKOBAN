#pragma once
#include "ConsoleManager.h"

class IHaveColor
{
	virtual inline ConsoleManager::ColorType GetColor() const = 0;
};
