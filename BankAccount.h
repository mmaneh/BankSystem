#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

class MyExcept : public std::exception{
	
public:
	const char* what() const noexcept override {
	
		return "The balance is invalid";
	}
};

class BankAccount{
    private:
        std::string accountHolder;
        int accountNumber;
        double balance;

    public:
        BankAccount();
        BankAccount(const std::string& name,int number,double Balance = 0.0);
        BankAccount(const BankAccount& src);
        BankAccount(std::string name,int number);
        ~BankAccount();

        void deposit(double ammount);
        void withdraw(double ammount);
        void display();
        int getAccountNumber() const;
        double getAccountBalance() const;

};
#endif
