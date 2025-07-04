#include "math_utils.h"
#include <stdexcept>

int MathUtils::add(int a, int b) {
    return a + b;
}

int MathUtils::subtract(int a, int b) {
    return a - b;
}

int MathUtils::multiply(int a, int b) {
    return a * b;
}

int MathUtils::divide(int a, int b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}
