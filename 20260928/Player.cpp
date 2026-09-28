#include "Player.h"
#include"Config.h"
#include<iostream>
using namespace std;

Player::Player()
{
	plyScore = 0;
}

void Player::InputCheck()
{
	while (true)
	{
		cout << "カードを引きますか？" << endl;
		cin >> plyInput;

		if (plyInput != INPUT_YES || plyInput != INPUT_NO)
		{
			cout << "入力した値に誤りがあります。入力しなおしてください。" << endl;
			continue;
		}
		else
		{
			break;
		}
	}
}

void Player::AddScore(int card)
{
	plyScore += card;

	card = 0;
}

int Player::getPlyScpre()const
{
	return plyScore;
}