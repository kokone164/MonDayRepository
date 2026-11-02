#include<iostream>
using namespace std;

namespace player
{
	int hp = 100;

	void ShowStatus()
	{
		cout << "PLAYER HP : " << hp << endl;
	}
}

namespace enemy
{
	int hp = 100;

	void ShowStatus()
	{
		cout << "PLAYER HP : " << hp << endl;
	}
}

int main(void)
{
	int i = 0;
	int ply = 0;

	cout << "PLAYER VS ENEMY\n"
		"0 : UŒ‚ ,1 : –hŒä ,2 : ‰ñ•œ" << endl;

	player::ShowStatus();
	enemy::ShowStatus();
	while (true)
	{
		cout << "==============================================================\n"
			"ROUND : " << i + 1
			<< "\n==============================================================\n" << endl;

		while (true)
		{
			cout << "PLAYER CHOICE : ";
			cin >> ply;

			if (0 > ply || ply > 3)
			{
				cout << "”ÍˆÍŠO‚Ì”Žš‚Å‚·B“ü—Í‚µ‚È‚¨‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
			}
			else
			{
				break;
			}
		}

		if (ply == 0)
		{
			cout << "PLAYER : UŒ‚\nENEMY : –hŒä" << endl;
			cout << "PLAYER‚ÌUŒ‚‚ª–hŒä‚³‚ê‚½I" << endl;
			player::ShowStatus();
			enemy::ShowStatus();
		}
		else if (ply == 1)
		{
			cout << "PLAYER : –hŒä\nENEMY : UŒ‚" << endl;
			cout << "PLAYER‚É10‚Ìƒ_ƒ[ƒWI" << endl;
			player::hp -= 10;
			player::ShowStatus();
			enemy::ShowStatus();
		}
		else
		{
			cout << "PLAYER : ‰ñ•œ\nENEMY : UŒ‚" << endl;
			cout << "PLAYER‚Í‰ñ•œ‚ð‚µ‚½‚ªUŒ‚‚³‚ê‚½‚Ì‚Å•Ï“®‚È‚µ" << endl;
			player::ShowStatus();
			enemy::ShowStatus();
		}

		if (player::hp <= 0 || enemy::hp <= 0)
		{
			break;
		}

		i++;
	}

	if (player::hp <= 0)
	{
		cout << "ENEMY WINNER" << endl;
	}
	else if (enemy::hp <= 0)
	{
		cout << "PLAYER WINNER" << endl;
	}

	return 0;
}