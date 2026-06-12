#include "Wall.h"

Wall::Wall(int InX = 0, int InY = 0)
{
	ID = ActorType::Wall;
	Icon = "██";
	Pos = Vector2D(InX, InY);
}

Wall::~Wall()
{

}
