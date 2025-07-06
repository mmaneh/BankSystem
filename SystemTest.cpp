#include <gtest/gtest.h>
#include "BankSystem.h"

TEST(BankSystemTest, findAccount) {
	BankSystem Bank;
	Bank.addAccounts("Mane", 1, 100.0);
	BankAccount* acc = Bank.findAccount(1);
	EXPECT_EQ(acc->getAccountBalance(), 100.0);
}

TEST(BankSystemTest, tranferFunds) {
	BankSystem Bank;
	Bank.addAccounts("Mane", 1, 500.0);
	Bank.addAccounts("Meri", 2, 50.);

	Bank.transferFunds(1, 2, 200.0);
	EXPECT_EQ(Bank.findAccount(1)->getAccountBalance(), 300.0);
	EXPECT_EQ(Bank.findAccount(2)->getAccountBalance(), 250.0);
}

TEST(BankSystemTest, ThrowtranferFunds) {

	BankSystem Bank;
        Bank.addAccounts("Mane", 1, 300.0);
        Bank.addAccounts("Meri", 2, 50.);

	
	EXPECT_THROW(Bank.transferFunds(1, 2, 550.0), MyExcept);

}
