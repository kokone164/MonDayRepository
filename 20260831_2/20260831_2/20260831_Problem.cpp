#include <iostream>
#include <string>
#include"20260831_Prac1_degawakokone.h"
using namespace std;

int main() 
{
    BankAccount account("Alice", 5000.0);
    //口座名義人の名前と現在の残高を表示
    account.displayAccountInfo();

    account.deposit(1000.0);//口座にお金を入金
    account.withdraw(2000.0);//口座からお金を出す
    account.withdraw(5000.0); // 残高不足で失敗
    //口座名義人の名前と現在の残高を表示
    account.displayAccountInfo();

    return 0;
}