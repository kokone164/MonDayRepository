#include "Character.h"
#include"Config.h"
#include<iostream>
using namespace std;

//コンストラクタ
Character::Character(int initialHp):hp(initialHp){}

//ステータス表示
void Character::ShowStatus(const string& name)const
{
	cout << name << "HP:" << hp << endl;
}

//ダメージを受ける
void Character::TakeDamage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

int Character::GetHp()const
{
	return hp;
}

void Character::RecoverHp(int amount)
{
	hp += amount;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
}

