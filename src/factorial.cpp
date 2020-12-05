#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("not a positive number.");
    }
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}