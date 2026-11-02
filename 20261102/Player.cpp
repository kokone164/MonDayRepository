#include "Player.h"
#include"Config.h"

#include<iostream>
#include<limits>
using namespace std;

//コンストラクタ
Player::Player():Character(Config::INTIAL_HP){}

//プレイヤーの行動を選択する

PlayerAction Player::SelectAction()const
{
	//入力
	int playerinput;

	while (true)
	{
		cout << "========Select Action========" << endl;
		cout << Config::PLAYER_ATTACK_INPUT << ":攻撃" << endl;
		cout << Config::PLAYER_DEFENSE_INPUT << ":防御" << endl;
		cout << Config::PLAYER_HEAL_INPUT << ":回復" << endl;

		cin >> playerinput;

		if (playerinput == Config::PLAYER_ATTACK_INPUT)
		{
			return PlayerAction::Attack;
		}
		if (playerinput == Config::PLAYER_DEFENSE_INPUT)
		{
			return PlayerAction::Defence;
		}
		if (playerinput == Config::PLAYER_HEAL_INPUT)
		{
			return PlayerAction::Heal;
		}
		cout << "入力が正しくありません。再度入力してください。" << endl;
		cin.clear();
	}
}

void Player::Heal(int amount)
{
	RecoverHp(amount);
}