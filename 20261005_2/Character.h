#pragma once
class Character
{
protected:
	int hp = 0;		//HP
	int hit = 0;	//UŒ‚—Í
	int defense = 0;//–hŒä—Í
	int evasion = 0;//‰ñ”ğ—Í

public:
	int damage = 0;	//ƒ_ƒ[ƒW—Ê
	int heal = 0;	//‰ñ•œ—Ê
	int choice = 0;
	void HitTurn(int Damage);
	void RecoveryTurn();
	void ShowState(int Hp, int Hit, int Defense, int Evasion);
};

