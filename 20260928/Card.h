#pragma once
#include"Config.h"
class Card
{
public:
	int cards[2][CARD_TOTAL] = {};

	void createCard();
	void drawCard(int card);
};

