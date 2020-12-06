#include <stdexcept>
#include "gtest/gtest.h"

#include "factorial.h"

TEST(test_factorial, positive_values) {
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(2, factorial(2));
    ASSERT_EQ(6, factorial(3));
}

TEST(test_factorial, zero) {
    ASSERT_EQ(1, factorial(0));
}

TEST(test_factorial, negative_value) {
    ASSERT_THROW(factorial(-1), std::invalid_argument);
}
