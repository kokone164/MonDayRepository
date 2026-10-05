#include "Game.h"
#include"Character.h"
#include"Turn.h"
#include"Config.h"
#include<iostream>
using namespace std;

Game::Game()
{
	round = 0;
}

void Game::Fight()
{
	Turn turn;

	cout << "ƒoƒgƒ‹ƒQ[ƒ€\n"
		"\n=========================GAME START=========================\n" << endl;
	turn.PreparationTurn();

	turn.ShowStateTurn();

	while (true)
	{
		cout << "\nROUND:" << round + 1 << endl;
		cout << "\n=========================PLAYER TURN=========================\n";

		turn.PlayerTurn();

		if (turn.plyHp == MIN_HP || turn.enmHp == MIN_HP)
		{
			break;
		}

		turn.ShowStateTurn();

		cout << "\n=========================ENEMY TURN=========================\n";

		turn.EnemyTurn();

		if (turn.plyHp == MIN_HP || turn.enmHp == MIN_HP)
		{
			break;
		}

		turn.ShowStateTurn();

		round++;
	}

	cout << "\n=========================RESULT=========================\n";

	turn.ShowStateTurn();

	if (turn.plyHp == MIN_HP)
	{
		cout << "\nENEMY WINNER" << endl;
	}
	else if (turn.enmHp == MIN_HP)
	{
		cout << "\nPLAYER WINNER" << endl;
	}
}