#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header2_degawakokone.h"

void Game()
{
	srand((unsigned int)time(NULL));
	int player = 0;
	int cpu = 0;

	int exp = 0;
	int lv = 0;

	std::cout << "じゃんけんゲーム\nグー:0 チョキ:1 パー:2\nレベルが5になったらゲームクリア\n"
		"====================GAME START====================" << std::endl;

	while (lv == ConNum::LEVEL)
	{
		std::cout << "==============================\nLv:"
			<< lv << "\nEXP:" << exp 
			<<"=============================="<< std::endl;

		std::cout << "出す手を決めてください\n";
		player = InputCheck(ConNum::PLAYER_MIN, ConNum::PLAYER_MAX);

		cpu = rand() % 3;

		//両者の手を表示
		std::cout << "PLAYER:";
		Hands(player);
		std::cout << "CPU:";
		Hands(cpu);

		if ()
		{

		}
	}
}

void Hands(int num)
{
	switch (num)
	{
	case Rock:
		std::cout << "グー\n";
		break;
	case Scissors:
		std::cout << "チョキ\n";
		break;
	case Paper:
		std::cout << "パー\n";
		break;
	default:
		break;
	}
}

int InputCheck(int min, int max)
{
	int number;
	while (true)
	{
		std::cin >> number;

		if (min > number || max < number)
		{
			std::cout << "範囲外の数字です。入力しなおしてください。\n";
		}
		else
		{
			break;
		}
		return number;
	}
}

void ExpAdd(int& expNum)
{
	srand((unsigned int)time(NULL));
	int randNum = rand() % 15 + 1;

	expNum += randNum;
}

void LevelUp(int& level)
{

}