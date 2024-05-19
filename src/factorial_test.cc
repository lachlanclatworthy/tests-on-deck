/* factorial_test.cc */

#include "factorial.h"
#include <gtest/gtest.h>

// 0!
TEST(FactorialTest, HandlesZeroInput) { EXPECT_EQ(factorial(0), 1); }

// n! where n >= 1
TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(6), 720);
    EXPECT_EQ(factorial(7), 5040);
    EXPECT_EQ(factorial(8), 40320);
    EXPECT_EQ(factorial(9), 362880);
    EXPECT_EQ(factorial(10), 3628800);
    EXPECT_EQ(factorial(11), 39916800);
    EXPECT_EQ(factorial(12), 479001600);
}

// 2^32-1 < 13!, so...
TEST(FactorialTest, Overflow) { EXPECT_NE(factorial(13), 6227020800); }

// n! where n < 0
TEST(FactorialTest, HandlesNegativeInput) { EXPECT_EQ(factorial(-1), 0); }
