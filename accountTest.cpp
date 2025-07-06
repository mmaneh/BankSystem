#include <gtest/gtest.h>
#include "BankAccount.h"

TEST(CtorTest, InitializerList) {
	BankAccount acc;
	EXPECT_EQ(acc.getAccountNumber(), 0);
	EXPECT_EQ(acc.getAccountBalance(), 0);

}

TEST(CtorTest, CopyCtor) {
	BankAccount acc("Mane", 1, 100.0);
	EXPECT_EQ(acc.getAccountNumber(), 1);
        EXPECT_EQ(acc.getAccountBalance(), 100.0);

}

TEST(DepositTest, deposit) {
	BankAccount acc("Mane", 1, 100.0);
        acc.deposit(200.0);
	EXPECT_EQ(acc.getAccountBalance(), 300.0);
}

TEST(WithdrawTest, ThrowWithdraw) {
	BankAccount acc("Mane", 1, 100.0);
	EXPECT_THROW(acc.withdraw(200.0), MyExcept);
}

TEST(WithdrawTest, NormalWithdraw) {
	BankAccount acc("Mane", 1, 100.0);
	acc.withdraw(50.0);
	EXPECT_EQ(acc.getAccountBalance(), 50.0);	
}
