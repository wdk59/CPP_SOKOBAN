#pragma once
// 맵: .txt로 저장
// - 파싱해와서 저장
// - 첫째 줄: 맵의 가로, 세로 크기
// - 둘째줄~끝줄: 맵 정보
//	 ㄴ 배치 정보는 액터의 ID로 표현
//		ActorType
//		  0: DefaultActor,
//		  1; Player,
//		  2: Box,
//		  3: House,
//		  4: Wall,
//		  5: SIZE_OF_ACTOR_TYPE

#include <string>
#include "SokobanCommon.h"

class Map
{
public :
	Map(std::string InPath);
	virtual ~Map();

private :
	std::string Path = "";
	int Width = 0;
	int Height = 0;
	int* MapInfo = nullptr;
	
	void ParseMap();

public :
	int* GetMapInfo();

	inline Vector2D GetMapSize() const { return Vector2D(Width, Height); };

};
