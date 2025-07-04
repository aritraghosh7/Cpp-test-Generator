#include <gtest/gtest.h>
#include "../main.cpp"  // Include the implementation directly (simplified for this assignment)

// ----------- MathUtils Tests ------------

TEST(MathUtilsTest, AddPositiveNumbers) {
    EXPECT_EQ(MathUtils::add(2, 3), 5);
}

TEST(MathUtilsTest, SubtractPositiveNumbers) {
    EXPECT_EQ(MathUtils::subtract(10, 3), 7);
}

TEST(MathUtilsTest, MultiplyNumbers) {
    EXPECT_EQ(MathUtils::multiply(4, 5), 20);
}

TEST(MathUtilsTest, DivideByNonZero) {
    EXPECT_EQ(MathUtils::divide(20, 4), 5);
}

TEST(MathUtilsTest, DivideByZeroThrows) {
    EXPECT_THROW(MathUtils::divide(10, 0), std::invalid_argument);
}

// ----------- StringUtils Tests ------------

TEST(StringUtilsTest, ToUpperConversion) {
    EXPECT_EQ(StringUtils::to_upper("hello"), "HELLO");
}

TEST(StringUtilsTest, PalindromeTrue) {
    EXPECT_TRUE(StringUtils::is_palindrome("Madam"));
}

TEST(StringUtilsTest, PalindromeFalse) {
    EXPECT_FALSE(StringUtils::is_palindrome("Hello"));
}
