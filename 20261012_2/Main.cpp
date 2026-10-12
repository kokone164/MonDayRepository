#include<iostream>
#include<string>
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
	cout << "\n敵:";
	cin >> enemyname;
	cout << "\nボス:";
	cin >> bossname;

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

	return 0;
}