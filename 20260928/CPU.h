#pragma once
class CPU
{
private:
	int cpuScore;

public:
	int card;

	CPU();

	/// <summary>
	/// カードの数字を合計する
	/// </summary>
	void AddScore(int card);

	/// <summary>
	/// 合計点を表示する
	/// </summary>
	/// <returns></returns>
	int getCpuScpre()const;
};

