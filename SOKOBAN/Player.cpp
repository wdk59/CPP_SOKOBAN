#include "Player.h"

Player::Player()
{
	ID = Actor::Player;
	bIsMovable = true;
	Icon = "🏃‍♂️";   // 오른쪽, 왼쪽 따라 2가지 아이콘 중 현재 아이콘
	// Pos 설정 필요
}

Player::~Player()
{

}
