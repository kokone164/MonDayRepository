#include<iostream>
#include"20260706_Header1_degawakokone.h"
using namespace std;

//20回復
void Heal(int& hpNum)
{
	hpNum += HEALNUM;
}

//入力チェック
int InputCheck(int min, int max)
{
	int number;
	while(true)
	{
		cin >> number;
		if (min > number || max < number)
		{
			cout << "範囲外の数字です。入力しなおしてください。" << endl;
		}
		else
		{
			break;
		}
	}
	return number;
}