#include "Enemy.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

Enemy::Enemy()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//“G‚Ì’lİ’è
	hp = MAX_HP;
	hit = rand() % MAX_HIT + 1;
	defense = rand() % MAX_DEFENSE + 1;
	evasion = rand() % MAX_DEFENSE + 1;
}

void Enemy::RandInput()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));

	choice = rand() % ENEMY_RAND_CHOICE + 1;
}