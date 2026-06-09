#include "Wall.h"

Wall::Wall()
{
	ID = Actor::Wall;
	bIsMovable = false;
	Icon = "██";
	// Pos 설정 필요
	// Color 설정 필요: 회색
}

Wall::~Wall()
{
}
