#pragma once
class SokobanGame
{
private :
	bool bIsRunning = false;

public :
	SokobanGame();
	virtual ~SokobanGame();

	void GameRun();
	void GameReady();
	void GamePlay();
	void PrintScreen();
	
	void Restart();
	void DetermineGameResult();
	void PrintVictory();
	void PrintDefeat();
};

