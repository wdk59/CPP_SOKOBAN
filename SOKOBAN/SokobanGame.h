#pragma once

class SokobanGame
{
public:
	SokobanGame();
	virtual ~SokobanGame();

private :
	bool bIsRunning = false;

public :
	void GameRun();
	void GameReady();
	void GamePlay();
	void PrintScreen();
	
	void Restart();
	void DetermineGameResult();
	void PrintVictory();
	void PrintDefeat();
};

