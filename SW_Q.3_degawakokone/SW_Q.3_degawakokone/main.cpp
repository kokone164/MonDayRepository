/*
ジャックポット
概要：
・CPUとプレイヤーが交互に２つの六面サイコロを振り、1から9までのマスを陣取りするゲームです。

ゲームの流れ：
・プレイヤーは交互に六面サイコロを2個振る。
・出た目の数に合わせて、対応するマスを取ることができます。
　プレイヤーは以下のうち1つを選択できる:
　　①六面サイコロの目
　　②六面サイコロの目の合計
例：
　六面サイコロの目が、1と5の場合→1、5、6のどれかのマスを取る事が出来ます。
・取られているもしくは取っている場合は、取る事はできません。
・この一連の動作を交互に行ってください。
ゲームの終了：
・どちらかのプレイヤーがマスを取る事が出来なくなった時点でゲーム終了。
・もし全てのマスが取った場合、そのターンでマスを取ったプレイヤーが勝ちとなります。
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Header.h"
using namespace std;

int main(void)
{
	//変数宣言
	int dice1 = 0;
	int dice2 = 0;
	int add = 0;
	int player;
	int cpu;
	int plyP = 0;
	int cpuP = 0;
	int zero = 0;//残りのマス確認用

	bool judgeflag = false;

	int plyMap[9] = {};
	int cpuMap[9] = {};

	//乱数の初期化
	srand((unsigned int)time(NULL));
	//ゲーム説明
	cout << "陣取りゲーム\n"
		"1~9のマスを取り合います。プレイヤーは交互に六面サイコロを2個振る。\n"
		"出た目の数に合わせて、対応するマスを取ることができます。\n"
		"プレイヤーは以下のうち1つを選択できる :\n"
		"①六面サイコロの目\n"
		"②六面サイコロの目の合計\n"
		"\n====================GAME START====================\n";
	//ゲームループ
	while (true)
	{
		cout << "\n==========PLAYER TURN==========\n";
		cout << "残りのマス:";
		for (int i = 0; i < 9; i++)
		{
			if (plyMap[i] == 0)
			{
				cout << i + 1 << ",";
			}
		}
		
		DiceRoll(dice1);
		DiceRoll(dice2);
		add = dice1 + dice2;

		cout << "\nDICE NUMBER:" << dice1 << "," << dice2 << "," << add << endl;
		
		if (plyMap[dice1 - 1] == 0 || plyMap[dice2 - 1] == 0 || plyMap[add - 1] == 0)
		{
			player = InputCheck(dice1, dice2, add, plyMap, 9);
		}
		else
		{
			cout<< "マスを取れませんでした。\n";
		}
		
		//マス塗り
		plyMap[player - 1] = 1;
		//残りマスチェック
		Check(zero, plyMap, 9);
		if (zero == 0)
		{
			judgeflag = true;
			break;
		}
		//初期化
		add = 0;
		zero = 0;

		cout << "\n==========CPU TURN==========\n";
		cout << "残りのマス:";
		for (int i = 0; i < 9; i++)
		{
			if (cpuMap[i] == 0)
			{
				cout << i + 1 << ",";
			}
		}
		
		DiceRoll(dice1);
		DiceRoll(dice2);
		add = dice1 + dice2;
		
		cout << "\nDICE NUMBER:" << dice1 << "," << dice2 << "," << add << endl;
		Roll(cpuMap, 9, dice1, dice2, add);
		//残りマスチェック
		Check(zero, cpuMap, 9);
		if (zero == 0)
		{
			break;
		}
		//初期化
		add = 0;
		zero = 0;
	}
	
	//結果
	if (judgeflag == true)
	{
		cout << "PLAYER WIN!";
	}
	else
	{
		cout << "CPU WIN!";
	}

	return 0;
}
