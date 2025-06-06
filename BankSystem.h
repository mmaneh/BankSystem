#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H
#include <iostream>
#include <vector>
#include "BankAccount.h"

class BankSystem {
    private:
        std::vector<BankAccount> accounts; 
    public:
        void addAccounts(const std::string& name, int accountNumber, double initialBalance);
        void transferFunds(int senderAcc, int receiverAcc, double ammount);
        BankAccount* findAccount(int accountNumber);
        void displayAllAccounts();
};
#endif
