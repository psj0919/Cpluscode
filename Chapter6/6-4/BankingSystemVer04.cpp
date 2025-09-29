#include <iostream>

class Account
{
private:
    int accID;
    int balance;
    char * cusName;
public:
    Account(int ID, int money, char * name) : accID(ID), balance(money)
    {
        cusName = new char[strlen(name)+1];
        strcpy(cusName, name);
    }
    Account (const Account & ref)
        : accID(ref.accID), balance(ref.balance)
    {
        cusName = new char[strlen(ref.cusName)+1];
        strcpy(cusName, ref.cusName);
    }
    int GetAccID() {return accID;}

    void Deposit(int money)
    {
        balance += money;
    }
    int Withdraw(int money)
    {
        if (balance < money)
            return 0;
        balance -= money;
        return money;
    }
    void ShowAccInfo()
    {
        std::cout << "Account ID: " << accID << std::endl;
        std::cout << "Name: " << cusName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
    ~Account()
    {
        delete []cusName;
    }
};

