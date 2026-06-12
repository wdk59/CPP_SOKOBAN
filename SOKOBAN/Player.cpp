#include "Player.h"

Player::Player(int InX, int InY)
{
	ID = ActorType::Player;
	Icon = DirectionIcons[0];   // 오른쪽, 왼쪽 따라 2가지 아이콘 중 현재 아이콘
	Pos = Vector2D(InX, InY);

	bIsFacingRight = false;
	CurrentBox = nullptr;
}

Player::~Player()
{

}

// 필요 없을수도??
void Player::Move(Vector2D InDir)
{
	PushBox(InDir);
	Pos += InDir;
}

// 필요 없을수도??
void Player::PushBox(Vector2D InDir)
{
	// TODO: CurrentBox 벽 체크도 해줘야 함
	if (CurrentBox != nullptr)
	{
		CurrentBox->Move(InDir);
	}
}
