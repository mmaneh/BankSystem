#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

class BankAccount{
    private:
        std::string accountHolder;
        int accountNumber;
        double balance;

    public:
        BankAccount();
        BankAccount(const std::string& name,int number,double Balance = 0.0);
        BankAccount(const BankAccount& src);
        BankAccount(std::string name,int number,double Balance = 0.0);
        ~BankAccount();

        void deposit(double ammount);
        bool withdraw(double ammount);
        void display();

};
#endif
