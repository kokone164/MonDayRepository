#include "Turn.h"
#include"Game.h"
#include"Card.h"
#include"CPU.h"
#include"Player.h"
#include"Config.h"
#include<iostream>
using namespace std;

Card card;
Player player;
CPU cpu;
Game game;

void FirstDrawTurn()
{
	cout << "プレイヤーのカード:";
	while (game.count < 2)
	{
		card.drawCard(player.card);
		cout << player.card << ",";
		player.AddScore(player.card);
		game.count++;
	}
	cout << "\n合計点:" << player.getPlyScpre() << endl;

	game.count = 0;

	cout << "CPUのカード:";
	while (game.count < 2)
	{
		card.drawCard(cpu.card);
		cout << cpu.card << ",";
		cpu.AddScore(cpu.card);
		game.count++;
	}
	cout << "\n合計点:" << cpu.getCpuScpre() << endl;

	game.count = 0;
}
void PlayerTurn()
{
	while (true)
	{

	}
}
void CpuTurn();