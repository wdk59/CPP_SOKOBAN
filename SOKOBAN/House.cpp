#include "House.h"

House::House()
{
	ID = ActorType::House;
	bIsMovable = false;
	Icon = "░░";	// 2가지 타입 중 현재 사용 중인 아이콘 저장
	// Pos 설정 필요
	// Color 설정 필요: 빈 집 - 빨강, 상자 있는 집 - 초록
}

House::~House()
{

}
