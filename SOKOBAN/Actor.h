#pragma once

#include "SokobanCommon.h"

class Actor
{
public :
	Actor();
	virtual ~Actor();

	Position Pos;
	char Icon = ' ';
};
