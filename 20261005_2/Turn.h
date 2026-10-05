#pragma once
class Turn
{
public:
	int plyHp = 0;
	int plyHit = 0;
	int plyDefense = 0;
	int plyEvasion = 0;

	int enmHp = 0;
	int enmHit = 0;
	int enmDefense = 0;
	int enmEvasion = 0;

	/// <summary>
	/// 最初にプレイヤーと敵の値を決定する
	/// </summary>
	void PreparationTurn();

	/// <summary>
	/// プレイヤーのターン
	/// </summary>
	void PlayerTurn();

	/// <summary>
	/// 敵のターン
	/// </summary>
	void EnemyTurn();

	/// <summary>
	/// 現在の値を表示
	/// </summary>
	void ShowStateTurn();
};