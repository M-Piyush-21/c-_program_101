#include <iostream>

using namespace std;

// Function to calculate the sum of digits using recursion
int sumOfDigits(int number) {
    if (number == 0) {
        return 0; // Base case: the sum of digits of 0 is 0
    } else {
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Ensure the number is positive
    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = sumOfDigits(num);

    cout << "The sum of the digits of " << num << " is " << sum << endl;

    return 0;
}
