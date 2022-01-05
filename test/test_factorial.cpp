#include <stdexcept>
#include "gtest/gtest.h"

#include "factorial.h"

TEST(test_factorial, positive_values) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
}

TEST(test_factorial, zero) {
    EXPECT_EQ(1, factorial(0));
}

TEST(test_factorial, negative_value) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}
