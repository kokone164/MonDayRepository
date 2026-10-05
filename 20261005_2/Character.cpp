#include "Character.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Character::HitTurn(int Damage)
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//UŒ‚‚Ìƒ‰ƒ“ƒ_ƒ€‚È”š
	damage = rand() % MAX_RAND_HIT + 1;

	Damage = 
}
void RecoveryTurn();
void ShowState(int Hp, int Hit, int Defense, int Evasion);