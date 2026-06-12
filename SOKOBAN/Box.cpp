#include "Box.h"

Box::Box(int InX = 0, int InY = 0)
{
	ID = ActorType::Box;
	Icon = "██";
	Pos = Vector2D(InX, InY);

}

Box::~Box()
{
	
}
