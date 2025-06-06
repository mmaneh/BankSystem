#include "BankSystem.h"
int main() {
    BankSystem bank;

    // Adding accounts
    bank.addAccounts("Alice Smith", 1001, 500.0);
    bank.addAccounts("John Doe", 1002, 1000.0);

    // Display all accounts
    bank.displayAllAccounts();

    // Depositing and withdrawing money
    bank.findAccount(1001)->deposit(200);
    bank.findAccount(1002)->withdraw(150);

    // Transferring funds
    bank.transferFunds(1002, 1001, 300);

    // Display accounts after transactions
    bank.displayAllAccounts();

    return 0;
} 

