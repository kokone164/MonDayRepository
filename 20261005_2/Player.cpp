#include "Player.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

Player::Player()
{
	//乱数の初期化
	srand((unsigned int)time(NULL));
	//プレイヤーの値設定
	hp = MAX_HP;
	hit = rand() % MAX_HIT + 1;
	defense = rand() % MAX_DEFENSE + 1;
	evasion = rand() % MAX_EVASION + 1;
}

int Player::InputCheck()
{
	cout << "1:攻撃 2:回復" << endl;
	while (true)
	{
		cin >> choice;
		if (choice < INPUT_HIT || choice > INPUT_RECOVERY)
		{
			cout << "入力に誤りがあります。入力しなおしてください。\n";
		}
		else
		{
			break;
		}
	}
	return choice;
}