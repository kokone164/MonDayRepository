#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header2_degawakokone.h"

void Game()
{
	//乱数の初期化
	srand((unsigned int)time(NULL));
	
	//変数
	int player = 0;
	int cpu = 0;

	int exp = 0;
	int lv = 0;

	int sub = 0;

	int count = 0;

	std::cout << "じゃんけんゲーム\nグー:0 チョキ:1 パー:2\nレベルが5になったらゲームクリア\n"
		"====================GAME START====================" << std::endl;

	//ゲーム
	while (lv != ConNum::LEVEL)
	{
		count++;
		std::cout << "\n==============================\nROUND:"
			<<count
			<<"\nLv:"<< lv 
			<< "\nEXP:" << exp 
			<<"\n=============================="<< std::endl;

		std::cout << "出す手を決めてください\n";
		//入力チェック
		player = InputCheck(ConNum::PLAYER_MIN, ConNum::PLAYER_MAX);

		cpu = rand() % 3;

		//両者の手を表示
		std::cout << "PLAYER:";
		Hands(player);
		std::cout << "CPU:";
		Hands(cpu);

		sub = player - cpu;

		//勝敗
		if (player == cpu)
		{
			std::cout << "あいこ\n"
				"\n現在のEXP:" << exp << "\n";
		}
		else if (sub == -1||sub == 2)
		{
			ExpAdd(exp);
			std::cout << "プレイヤーの勝利\n"
				"\n現在のEXP:"<<exp<<"\n";
		}
		else
		{
			std::cout << "CPUの勝利\n"
				"\n現在のEXP:"<<exp<<"\n";
		}

		//レベルアップ
		if (exp >= ConNum::EXP_MAX)
		{
			LevelUp(lv, exp);
		}

	}

	std::cout << "GAME CLEAR\nLv:" << lv << "EXP:" << exp << std::endl;
}

//じゃんけんの手を表示する
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

//入力チェック
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
	}
	return number;
}

//exp加算
void ExpAdd(int& expNum)
{
	srand((unsigned int)time(NULL));
	int randNum = rand() % 15 + 1;

	expNum += randNum;
}

//レベルアップ
void LevelUp(int& level,int &expNum)
{
	level++;
	expNum -= ConNum::EXP_MAX;
}