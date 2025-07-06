#include "BankSystem.h"
#include <iostream>
#include <vector>
#include "BankAccount.h"


    void BankSystem::addAccounts(const std::string& name, int accountNumber, double initialBalance) {
        accounts.emplace_back(name, accountNumber, initialBalance);
    }
    BankAccount* BankSystem::findAccount(int accountNumber){
        for (int i = 0; i < accounts.size(); ++i) {
            if(accounts[i].getAccountNumber() == accountNumber){
                return &accounts[i];
            }
        }
        return nullptr;
    }
    void BankSystem::transferFunds(int senderAcc, int receiverAcc, double ammount){
        BankAccount* sender = findAccount(senderAcc);
        BankAccount* receiver = findAccount(receiverAcc);

        try {
	     sender->withdraw(ammount);
	}
        catch(std::exception& e){
		cerr << e.what() << "/n"; 	
	}

	receiver->deposit(ammount);
    }
   
    void BankSystem::displayAllAccounts() {
        for (int i = 0; i < accounts.size(); ++i) {
            accounts[i].display(); 
        }
    }
