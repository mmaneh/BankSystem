#include "BankAccount.h"

// default ctor
BankAccount::BankAccount() {
     accountHolder = "Unknown";
     accountNumber = 0;
     balance = 0.0;
}

// parameter ctor
BankAccount::BankAccount(const std::string& name, int number, double Balance) {
    accountHolder = name;
    accountNumber = number; 
    balance = Balance;
}

// copy ctor
BankAccount::BankAccount(const BankAccount& src) {
    accountHolder = src.accountHolder;
    accountNumber = src.accountNumber;
    balance = src.balance;
}

// initializer list ctor
BankAccount::BankAccount(std::string name, int number)
    : accountHolder(name), accountNumber(number) {}

// destructor
BankAccount::~BankAccount() {
     std::cout << "Your account is closed" << std::endl;
}

// method implementations
void BankAccount::deposit(double ammount) {
    if (ammount < 0) {
        std::cout << "Cannot deposit a negative ammount" << std::endl;
    } 

    balance += ammount;
}

bool BankAccount::withdraw(double ammount) {
    if (ammount > balance) {
        std::cout << "Invalid balance" << std::endl;
        return false;
    }
    balance -= ammount;
    return true;
}

void BankAccount::display() {
    std::cout << "Displaying the account details" << std::endl;
    std::cout << "Account holder name - " << accountHolder << std::endl;
    std::cout << "Account number - " << accountNumber << std::endl;
    std::cout << "Account balance - " << balance << std::endl;
}

int BankAccount::getAccountNumber() const{
    return accountNumber;
}

int BankAccount::getAccountBalance() const{
    return balance;
}

