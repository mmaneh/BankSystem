#include "BankSystem.h"
#include <iostream>
#include <vector>
#include "BankAccount.h"


    void BankSystem::addAccounts(const std::string& name, int accountNumber, double initialBalance) {
        accounts.emplace_back(name, accountNumber, initialBalance);
    }
    BankAccount* BankSystem::findAccount(int accountNumber){
        for (size_t i = 0; i < accounts.size(); ++i) {
            if(accounts[i].getAccountNumber() == accountNumber){
                return &accounts[i];
            }
        }
        return nullptr;
    }
    void BankSystem::transferFunds(int senderAcc, int receiverAcc, double ammount){
        BankAccount* sender = findAccount(senderAcc);
        BankAccount* receiver = findAccount(receiverAcc);

       if(!sender || !receiver) {
       		throw MyExcept{};
       }
       
	sender->withdraw(ammount);
	receiver->deposit(ammount);
    }
   
    void BankSystem::displayAllAccounts() {
        for (size_t i = 0; i < accounts.size(); ++i) {
            accounts[i].display(); 
        }
    }
