#include <gtest/gtest.h>

#include "fibonacci.h"

TEST(FactorialTest, Factorial) {
  EXPECT_EQ(fibonacci(0), 0);
  EXPECT_EQ(fibonacci(1), 1);
  EXPECT_EQ(fibonacci(2), 1);
}
