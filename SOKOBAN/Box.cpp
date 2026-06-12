#include "Box.h"

Box::Box(int InX, int InY)
{
	ID = ActorType::Box;
	Icon = "██";
	Pos = Vector2D(InX, InY);

}

Box::~Box()
{
	
}
