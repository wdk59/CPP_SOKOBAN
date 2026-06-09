#pragma once
#include "Actor.h"
#include "IMovable.h"

class Player : public Actor, public IMovable
{
public :
	Player();
	virtual ~Player();
};
