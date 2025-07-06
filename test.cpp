#include <gtest/gtest.h>
#include "BankAccount.h"

TEST(DepositTest, ValidBalance) {
	EXPECT_EQ(Cannot deposit a negative ammount; deposit(-5));
}

TEST(WithdrawTest, ValidBalance) {
	EXPECT_THROW(withdraw(500), MyExcept);
}

TEST(WithrawTest)
