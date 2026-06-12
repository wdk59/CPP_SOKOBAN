#pragma once
#include "Actor.h"
#include "IMovable.h"

class MovableActor : public Actor, public IMovable
{
public :
	// Player.h의 Move 없애면 virtual 빼는 게 좋을지도??
	virtual inline void Move(Vector2D InDir) { Pos += InDir; };
	inline Vector2D GetForwardCoordinate(Vector2D InDir) const { return Pos + InDir; };
};

