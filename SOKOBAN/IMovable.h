#pragma once
#include "SokobanCommon.h"

class IMovable
{
	virtual void Move(Vector2D InDir) = 0;
	virtual bool CheckWall() = 0;
};
