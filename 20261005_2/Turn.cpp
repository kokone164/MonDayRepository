#include "Turn.h"
#include"Config.h"
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include<iostream>
using namespace std;

Player player;
Enemy enemy;
Character character;

void Turn::PreparationTurn()
{
	//値設定
	character.FirstCharaState(plyHp, plyHit, plyDefense, plyEvasion);	//Player
	character.FirstCharaState(enmHp, enmHit, enmDefense, enmEvasion);	//Enemy
}

void Turn::PlayerTurn()
{
	//入力チェック
	player.InputCheck();
	//攻撃or回復
	if (player.choice == INPUT_HIT)
	{
		//攻撃時のランダム値
		character.RandDamage();
		//成功or失敗
		if (plyHit + character.randDamage > enmEvasion)
		{
			//攻撃する
			character.TakeHit(plyHit, enmDefense, enmHp);
			cout << "攻撃に成功しました。\n"
				"ENEMYに\n"
				">>>" << character.damage << "<<<\n"
				"のダメージが入ります。\n";
		}
		else
		{
			cout << "攻撃に失敗しました。HPの増減はありません。" << endl;
		}
	}
	else if (player.choice == INPUT_RECOVERY)
	{
		cout << "HPを回復します。\n";
		//回復量決定
		character.RandRecovery();
		cout << "回復量:" << character.randHeal << "\nHP:" << plyHp << "→";
		//回復する
		character.Recovery(plyHp);
		cout << plyHp << endl;
	}
}


void Turn::EnemyTurn()
{
	//入力チェック
	enemy.RandInput();
	//攻撃or回復
	if (enemy.choice == INPUT_HIT)
	{
		//攻撃時のランダム値
		character.RandDamage();
		//成功or失敗
		if (enmHit + character.randDamage > plyEvasion)
		{
			//攻撃する
			character.TakeHit(enmHit, plyDefense, plyHp);
			cout << "攻撃に成功しました。\n"
				"PLAYERに\n"
				">>>" << character.damage << "<<<\n"
				"のダメージが入ります。\n";
		}
		else
		{
			cout << "攻撃に失敗しました。HPの増減はありません。" << endl;
		}
	}
	else if (enemy.choice == INPUT_RECOVERY)
	{
		cout << "HPを回復します。\n";
		//回復量決定
		character.RandRecovery();
		cout << "回復量:" << character.randHeal << "\nHP:" << enmHp << "→";
		//回復する
		character.Recovery(enmHp);
		cout << enmHp << endl;
	}
}

void Turn::ShowStateTurn()
{
	//Player
	cout << "\nPLAYER:\n";
	character.ShowState(plyHp, plyHit, plyDefense, plyEvasion);
	//Enemy
	cout << "\nENEMY:\n";
	character.ShowState(enmHp, enmHit, enmDefense, enmEvasion);
}