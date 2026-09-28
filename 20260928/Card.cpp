#include "Card.h"
#include"Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Card::createCard()
{
	int num = 0;
	for (int i = 0; i < CARD_MAX; i++)
	{
		for (int j = 0; j < CARD_DUPLICATE_COUNT; j++)
		{
			cards[0][num] = i + 1;
			num++;
		}
	}
}

void Card::drawCard(int card)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));
	//カードを選ぶ
	int num = 0;
	while (true)
	{
		num = rand() % CARD_TOTAL;

		if (cards[2][num] = 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	
	//カードを渡す
	card = cards[1][num];
	//使えなくする
	cards[2][num] = 1;
}