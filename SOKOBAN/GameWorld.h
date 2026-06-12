#pragma once
#include <vector>
#include "Map.h"
#include "Actor.h"

class GameWorld
{
public:
	GameWorld();
	virtual ~GameWorld();

private :
	std::vector<Map> Maps;	// 각 스테이지의 맵 정보 저장

	unsigned int Stage = 0;	// 현재 스테이지
	Actor* World;			// 맵 정보대로 액터를 배치할 공간
};
