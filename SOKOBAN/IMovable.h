#pragma once
#include "SokobanCommon.h"

class IMovable
{
	virtual void Move(Vector2D InDir) = 0;
	virtual Vector2D GetForwardCoordinate(Vector2D InDir) = 0;
};
