#include"VendingManchine.h"
#include<iostream>
using namespace std;

VendingManchine::VendingManchine()	//コンストラクタ
{
	money = 0;
	colaStock = 15;
}
//お金を投入
void VendingManchine::insertMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}
}
//コカ・コーラを購入する
void VendingManchine::buyCola()
{
	const int price = 180;
	if (money >= price && colaStock > 0)
	{
		money -= price;
		colaStock--;
		cout << "コカ・コーラを購入しました。\n";
	}
	else
	{
		cout << "購入できませんでした。\n";
	}
}
//残りのお金を取得する
int VendingManchine::getMoney()const//自販機の中が見たいときにこのGet関数を使う
{
	return money;
}
//在庫を取得する
int VendingManchine::getColaStock()const
{
	return colaStock;
}