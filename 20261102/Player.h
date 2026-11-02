#pragma once
#include"Character.h"
#include"PlayerAction.h"

class Player:public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// プレイヤーの行動を選択する
	/// </summary>
	/// <returns>プレイヤーの選択</returns>
	PlayerAction SelectAction()const;

	/// <summary>
	/// HPを回復する
	/// </summary>
	/// <param name="amount">回復値</param>
	void Heal(int amount);
};

