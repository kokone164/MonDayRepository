#include "BattleManager.h"
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
#include<iostream>
#include<string>
using namespace std;

void BattleManager::StartBattle(Character*player, Character* enemy, Character* boss)
{
	
	cout << "\n" << player->GetName() << endl;
	player->Attack();

	cout << "\n" << enemy->GetName() << endl;
	enemy->Attack();

	cout << "\n" << boss->GetName() << endl;
	boss->Attack();

}