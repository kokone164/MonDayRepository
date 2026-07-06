#pragma once

namespace ConNum
{
	const int LEVEL = 5;
	const int EXP_MAX = 20;
	const int PLAYER_MAX = 2;
	const int PLAYER_MIN = 0;

}

enum Hand
{
	Rock,
	Scissors,
	Paper
};


void Hands(int num);

int InputCheck(int min, int max);