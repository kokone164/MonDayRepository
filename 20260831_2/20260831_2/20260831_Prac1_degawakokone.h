#pragma once
#include<string>
using namespace std;

class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:

    BankAccount(const string& holder, double initialBalance);

    double getBalance() const;

    void deposit(double amount);

    void withdraw(double amount);

    void displayAccountInfo() const;
};

