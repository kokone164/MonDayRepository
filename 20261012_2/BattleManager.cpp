#include "BattleManager.h"
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
#include<iostream>
#include<string>
using namespace std;

void BattleManager::StartBattle()
{
	string playername;
	string enemyname;
	string bossname;

	cout << "名前を入力してください。" << endl;
	cout << "勇者:";
	cin >> playername;
	cout << "敵:";
	cin >> enemyname;
	cout << "ボス:";
	cin >> bossname;

	cout << "===============================BATTLE START===============================";

	//コンストラクタ
	Boss boss(bossname);
	Enemy enemy(enemyname);
	Player player(playername);

	cout << "\n" << player.GetName() << endl;
	player.Attack();

	cout << "\n" << enemy.GetName() << endl;
	enemy.Attack();

	cout << "\n" << boss.GetName() << endl;
	boss.Attack();

}