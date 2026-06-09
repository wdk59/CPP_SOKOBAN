#pragma once
#include "SokobanCommon.h"

class Actor
{
public :
	Actor();
	virtual ~Actor();

	Vector2D Pos;
	char Icon = ' ';
};
