#include "Player.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

Player::Player()
{
	hp = MAX_HP;
	hit = rand() % MAX_HIT + 1;	//UŒ‚—Í
	defense = rand() % MAX_DEFENSE + 1;//–hŒä—Í
	evasion = rand() % MAX_EVASION + 1;//‰ñ”ğ—Í
}

int Player::InputCheck()
{
	cout << "1:UŒ‚ 2:‰ñ•œ" << endl;
	while (true)
	{
		cin >> choice;
		if (choice < INPUT_HIT || choice > INPUT_RECOVERY)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·B“ü—Í‚µ‚È‚¨‚µ‚Ä‚­‚¾‚³‚¢B\n";
		}
		else
		{
			break;
		}
	}
	return choice;
}