#pragma once
class Player
{
private:
	//プレイヤーの合計点
	int plyScore;

public:
	//引いたカード
	int card;
	//プレイヤーの入力
	int plyInput;

	Player();

	/// <summary>
	/// 入力チェック
	/// </summary>
	void InputCheck();

	/// <summary>
	/// カードの数字を合計する
	/// </summary>
	void AddScore(int card);

	/// <summary>
	/// 合計点を表示する
	/// </summary>
	/// <returns></returns>
	int getPlyScpre()const;
};

