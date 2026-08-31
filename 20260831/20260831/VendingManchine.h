#pragma once
class VendingManchine
{
private:
	int money;		//お金(自販機)
	int colaStock;	//在庫
public:
	VendingManchine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney()const;//const：定数として使う（そのオブジェクトの中は変更しない）・・・Get関数
	int getColaStock()const;
};
