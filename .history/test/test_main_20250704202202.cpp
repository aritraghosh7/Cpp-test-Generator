#include <gtest/gtest.h>
#include "../math_utils.h"

TEST(MathUtilsTest, Add) {
    EXPECT_EQ(MathUtils::add(2, 3), 5);
}

TEST(MathUtilsTest, DivideByZero) {
    EXPECT_THROW(MathUtils::divide(4, 0), std::invalid_argument);
}

// Add more tests...
