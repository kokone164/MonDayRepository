#include "Enemy.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Enemy::RandInput()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));

	choice = rand() % ENEMY_RAND_CHOICE + 1;
}