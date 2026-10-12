#include<iostream>
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Boss boss("魔王");
	Enemy enemy("ゾンビ");
	Player player("勇者");

	cout << player.GetName() << endl;
	player.Attack();

	cout << "\n" << enemy.GetName() << endl;
	enemy.Attack();

	cout << "\n" << boss.GetName() << endl;
	boss.Attack();

	return 0;
}