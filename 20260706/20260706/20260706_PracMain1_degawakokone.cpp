#include<iostream>
#include"20260706_Header1_degawakokone.h"
using namespace std;

int main(void)
{
	int hp = 100;
	int num = 0;

	cout << "HPを回復しますか？\n現在のHP:" << hp << "\nYes：１No：２" << endl;
	
	num = InputCheck(MIN, MAX);

	if (num == 1)
	{
		Heal(hp);
		cout << "HPを回復しました。\n現在のHP:" << hp << endl;
	}
	else
	{
		cout << "HPの回復はありません。\n現在のHP:" << hp << endl;
	}
	return 0;
}