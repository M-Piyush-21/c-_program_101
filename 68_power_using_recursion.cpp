#include <iostream>

// Function to calculate power using recursion
int power(int base, int exponent) {
    // Base case: any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }

    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Input the base and exponent
    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate and display the result
    int result = power(base, exponent);
    std::cout << base << " raised to the power " << exponent << " is: " << result << std::endl;

    return 0;
}
