#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the base and exponent
    double base, result = 1;
    int exponent;

    // Input the base and exponent from the user
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base; // Multiply the result by the base 'exponent' times
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
