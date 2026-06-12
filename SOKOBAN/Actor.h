#pragma once
#include <string>
#include "SokobanCommon.h"

class Actor
{
public:
	Actor(int InX = 0, int InY = 0);
	virtual ~Actor();

protected :
	enum class ActorType
	{
		DefaultActor,
		Player,
		Box,
		House,
		Wall,
		SIZE_OF_ACTOR_TYPE
	};

	ActorType ID = ActorType::DefaultActor;	// 액터 종류
	std::string Icon = "  ";	// default: 2byte
	Vector2D Pos;

public :
	inline ActorType GetID() const { return ID; };
	inline std::string GetIcon() const { return Icon; };
	inline Vector2D GetPos() const { return Pos; };
};
