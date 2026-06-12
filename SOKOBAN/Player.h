#pragma once
#include "MovableActor.h"

#include "Box.h"

class Player : public MovableActor
{
public:
	Player(int InX = 0, int InY = 0);
	virtual ~Player();

private :
	const std::string DirectionIcons[2] = {"🏃‍♂️", "🏃‍♂️‍➡️"};
	bool bIsFacingRight = false;

	Box* CurrentBox = nullptr;

public :
	// 필요 없을수도??
	virtual void Move(Vector2D InDir) override;

	// 왼쪽: 0(false), 오른쪽: 1(true)
	inline void Flip() { DirectionIcons[bIsFacingRight != bIsFacingRight]; };

private:
	// 필요 없을수도??
	void PushBox(Vector2D InDir);

};
