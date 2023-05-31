#include <iostream>

double exp(double x, double n) {
    double result = 1;

    for (int i=0; i < n; i++) {
        result *= x;
    }

    return result;
}

int main() {
    std::cout << exp(3, 4);

    return 0;
}