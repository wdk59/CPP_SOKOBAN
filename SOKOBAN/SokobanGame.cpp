#include "SokobanGame.h"

#include <iostream>
#include "Windows.h"

SokobanGame::SokobanGame()
{
	bIsRunning = false;
}

SokobanGame::~SokobanGame()
{

}

void SokobanGame::GameRun()
{
	GameReady();
	GamePlay();
}

void SokobanGame::GameReady()
{
	bIsRunning = true;
}

void SokobanGame::GamePlay()
{
	printf("😊██ ■██ □ ▣ ░░ ▓▓\n");
	printf("😀──██😊🕺🏃‍♂️🏃🏃‍♂️‍➡️🏃‍➡️\n");
	PrintScreen();
}

void SokobanGame::PrintScreen()
{
	printf("┌──────────────────────────────────────────┐\n");
	printf("│              ＳＯＫＯＢＡＮ              │\n");
	printf("├──────────────────────────────────────────┤\n");
	printf("│Stage: %2d  │  Moving: %3d  │  Box: %2d / %2d│\n", 0, 0, 0, 0);
	printf("├──────────────────────────────────────────┤\n");
	printf("│                                          │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│  ██████████████████████████████████████  │\n");
	printf("│                                          │\n");
	printf("├──────────────────────────────────────────┤\n");
	printf("│Move\t │ ↑ ↓ ← →                         │\n");
	printf("│Restart │ R                               │\n");
	printf("│Exit\t │ Esc                             │\n");
	printf("└──────────────────────────────────────────┘\n");

}

void SokobanGame::Restart()
{
}

void SokobanGame::DetermineGameResult()
{
}

void SokobanGame::PrintVictory()
{
}

void SokobanGame::PrintDefeat()
{
}
