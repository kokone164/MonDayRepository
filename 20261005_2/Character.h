#pragma once
class Character
{
public:
	int randDamage = 0;	//UŒ‚‚Ìƒ‰ƒ“ƒ_ƒ€’l
	int damage = 0;		//ƒ_ƒ[ƒW—Ê
	int randHeal = 0;	//‰ñ•œ—Ê
	int choice = 0;

	/// <summary>
	/// ’lİ’è
	/// </summary>
	/// <param name="Hp">HP</param>
	/// <param name="Hit">UŒ‚—Í</param>
	/// <param name="Defense">–hŒä—Í</param>
	/// <param name="Evasion">‰ñ”ğ—Í</param>
	void FirstCharaState(int& Hp, int& Hit, int& Defense, int& Evasion);

	/// <summary>
	/// UŒ‚‚Ìƒ‰ƒ“ƒ_ƒ€’l
	/// </summary>
	void RandDamage();

	/// <summary>
	/// UŒ‚‚·‚é
	/// </summary>
	/// <param name="Hit">©•ª‚ÌUŒ‚—Í</param>
	/// <param name="Defense">‘Šè‚Ì–hŒä—Í</param>
	/// <param name="Hp">‘Šè‚ÌHP</param>
	void TakeHit(int& Hit, int& Defense,int& Hp);

	/// <summary>
	/// ‰ñ•œ—Ê
	/// </summary>
	void RandRecovery();

	/// <summary>
	/// ‰ñ•œ‚·‚é
	/// </summary>
	void Recovery(int& Hp);

	/// <summary>
	/// Œ»İ‚Ì’l‚ğ•\¦
	/// </summary>
	/// <param name="Hp">HP</param>
	/// <param name="Hit">UŒ‚—Í</param>
	/// <param name="Defense">–hŒä—Í</param>
	/// <param name="Evasion">‰ñ”ğ—Í</param>
	void ShowState(int& Hp, int& Hit, int& Defense, int& Evasion);
};

