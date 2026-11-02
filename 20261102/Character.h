#pragma once
#include<string>
class Character
{
private:
	int hp;

protected:
	/// <summary>
	/// HP回復メソッド
	/// </summary>
	/// <param name="amount">回復数値</param>
	void RecoverHp(int amount);

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="initalHp">HP初期値</param>
	Character(int initalHp);

	/// <summary>
	/// ステータス表示
	/// </summary>
	/// <param name="name">表示するキャラクター名</param>
	void ShowStatus(const std::string& name)const;

	/// <summary>
	/// ダメージを受ける
	/// </summary>
	/// <param name="damage">ダメージ数値</param>
	void TakeDamage(int damage);

	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp()const;
};

