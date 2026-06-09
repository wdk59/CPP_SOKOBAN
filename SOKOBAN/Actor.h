#pragma once
#include <string>
#include "SokobanCommon.h"

class Actor
{
protected :
	enum ActorType
	{
		DefaultActor,
		Player,
		Box,
		House,
		Wall,
		SIZE_OF_ACTOR_TYPE
	};

	ActorType ID = DefaultActor;	// 액터 종류
	bool bIsMovable = false;
	std::string Icon = "  ";	// default: 2byte
	Vector2D Pos;

public :
	Actor();
	virtual ~Actor();

};
