#include <gtest/gtest.h>

#include "factorial.h"

TEST(FactorialTest, Factorial) {
  auto foo = factorial(0);
  EXPECT_EQ(factorial(0), 1);
  EXPECT_EQ(factorial(1), 1);
  EXPECT_EQ(factorial(2), 2);
}
