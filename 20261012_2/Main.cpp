#include<iostream>
#include "BattleManager.h"
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
using namespace std;
int main(void)
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


	BattleManager battle;

	battle.StartBattle(&player,&enemy,&boss);

	return 0;
}