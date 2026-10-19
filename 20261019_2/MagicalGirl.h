#pragma once
class MagicalGirl
{
public:

	/// <summary>
	///戦闘
	/// </summary>
	virtual void Fight() = 0;

	/// <summary>
	/// プロフィールを表示する
	/// </summary>
	virtual void ShowProfile();

	/// <summary>
	/// 魔法少女デストラクタ
	/// </summary>
	virtual ~MagicalGirl();
};

