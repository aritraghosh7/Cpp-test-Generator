#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// A simple math utility class
class MathUtils {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static int divide(int a, int b) {
        if (b == 0) throw std::invalid_argument("Division by zero");
        return a / b;
    }
};

// A string utility class
class StringUtils {
public:
    static std::string to_upper(const std::string& str) {
        std::string result = str;
        std::transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }

    static bool is_palindrome(const std::string& str) {
        std::string clean;
        std::copy_if(str.begin(), str.end(), std::back_inserter(clean), ::isalnum);
        std::transform(clean.begin(), clean.end(), clean.begin(), ::tolower);
        return std::equal(clean.begin(), clean.begin() + clean.size() / 2, clean.rbegin());
    }
};

int main() {
    std::cout << "MathUtils::add(3, 4) = " << MathUtils::add(3, 4) << std::endl;
    std::cout << "StringUtils::to_upper(\"hello\") = " << StringUtils::to_upper("hello") << std::endl;
    std::cout << "Is 'madam' a palindrome? " << (StringUtils::is_palindrome("madam") ? "Yes" : "No") << std::endl;
    return 0;
}
