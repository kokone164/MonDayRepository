#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Header.h"
using namespace std;
//サイコロを振る
void DiceRoll(int& Dice)
{
	Dice = rand() % 9 + 1;
}
//入力チェック
int InputCheck(int Dice1, int Dice2, int Add, int ary[], int size)
{
	int ply;
	while (true)
	{
		cout << "CHOICE:";
		cin >> ply;

		if (ply != Dice1 && ply != Dice2 && ply != Add)
		{
			cout << "誤った数字です。入力しなおしてください。\n";
		}
		else if (ply < 1 || ply > size)
		{
			cout << "範囲外の数字です。入力しなおしてください。\n";
		}
		else if (ary[ply - 1] == 1 || ary[ply - 1] == 2)
		{
			cout << "そのマスは陣取り済みです。選択しなおしてください。\n";
		}
		else if(ply == Dice1||ply == Dice2||ply == Add)
		{
			break;
		}
	}
	return ply;
}
//CPUのマス選択
void Roll(int ary[], int size, int Dice1, int Dice2, int Add)
{
	if (ary[Dice1 - 1] == 0)
	{
		cout << "CHOICE:" << Dice1 << endl;
		ary[Dice1 - 1] = 2;
	}
	else if (ary[Dice2 - 1] == 0)
	{
		cout << "CHOICE:" << Dice2 << endl;
		ary[Dice2 - 1] = 2;
	}
	else if (ary[Add - 1] == 0)
	{
		cout << "CHOICE:" << Add << endl;
		ary[Add - 1] = 2;
	}
	else
	{
		cout << "CPUはマスを取れませんでした。\n";
	}
}
//マスが残っているかどうかの確認
void Check(int& mapNum, int ary[], int size)
{
	for (int i = 0;i < 9;i++)
	{
		if (ary[i] == 0)
		{
			mapNum++;
		}
	}
}