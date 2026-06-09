#pragma once
#include "Actor.h"
#include "IMovable.h"

class Box : public Actor, public IMovable
{
public :
	Box();
	virtual ~Box();
};

