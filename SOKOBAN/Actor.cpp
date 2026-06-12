#include "Actor.h"

Actor::Actor(int InX = 0, int InY = 0)
{
	Pos = Vector2D(0, 0);
	Icon = "  ";
	Pos = Vector2D(InX, InY);
}

Actor::~Actor()
{

}
