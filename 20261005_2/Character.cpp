#include "Character.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Character::FirstCharaState(int& Hp, int& Hit, int& Defense, int& Evasion)
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//’lİ’è
	Hp = MAX_HP;
	Hit = rand() % MAX_HIT + 1;
	Defense = rand() % MAX_DEFENSE + 1;
	Evasion = rand() % MAX_EVASION + 1;
}

void Character::RandDamage()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//UŒ‚‚Ìƒ‰ƒ“ƒ_ƒ€‚È”š
	randDamage = rand() % MAX_RAND_HIT + 1;
}

void Character::TakeHit(int& Hit,int& Defense,int& Hp)
{
	damage = Hit + randDamage - Defense;

	Hp -= damage;

	if (Hp <= MIN_HP)
	{
		Hp = MIN_HP;
	}
}

void Character::RandRecovery()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//UŒ‚‚Ìƒ‰ƒ“ƒ_ƒ€‚È”š
	randHeal = rand() % MAX_RAND_RECOVERY + 1;
}
void Character::Recovery(int& Hp)
{
	Hp += randHeal;
	if (Hp >= MAX_HP)
	{
		Hp = MAX_HP;
	}
}

void Character::ShowState(int& Hp, int& Hit, int& Defense, int& Evasion)
{
	cout << "HP:" << Hp << endl;
	cout << "UŒ‚—Í:" << Hit << endl;
	cout << "–hŒä—Í:" << Defense << endl;
	cout << "‰ñ”ğ—Í:" << Evasion << endl;
}
