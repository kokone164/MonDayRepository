#include "Game.h"
#include"Card.h"
#include"CPU.h"
#include"Player.h"
#include"Config.h"
#include<iostream>
using namespace std;

void Game::progGame()
{
	CPU cpu;
	Player player;
	Card card;

	card.createCard();

	cout << "21カードゲーム\n"
		"カードの合計点を21に近づける。22以上になったらアウト。\n"
		"\n===============================GAME START===============================\n";

	cout << "プレイヤーのカード:";
	while (count<2)
	{
		card.drawCard(player.card);
		cout << player.card << ",";
		player.AddScore(player.card);
		count++;
	}
	cout << "\n合計点:" << player.getPlyScpre() << endl;

	count = 0;

	cout << "CPUのカード:";
	while (count < 2)
	{
		card.drawCard(cpu.card);
		cout << cpu.card << ",";
		cpu.AddScore(cpu.card);
		count++;
	}
	cout << "\n合計点:" << cpu.getCpuScpre() << endl;

	while (true)
	{
		if (player.getPlyScpre() < TARGET_SCORE)
		{

		}


	}
}