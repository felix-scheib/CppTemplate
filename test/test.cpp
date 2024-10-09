#include <factorial.h>
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(FactorialTest, Factorial) {
  auto foo = factorial(0);
  // EXPECT_EQ(factorial(0), 0);
  // EXPECT_EQ(factorial(1), 1);
  // EXPECT_EQ(factorial(2), 3);
}
