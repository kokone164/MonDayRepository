#pragma once
#include"Character.h"
class Player:public Character
{
public:
	/// <summary>
	/// 入力チェック
	/// </summary>
	/// <returns></returns>
	int InputCheck();
};

