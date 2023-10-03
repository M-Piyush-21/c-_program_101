#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        // Get the last digit of the number
        int digit = number % 10;

        // Add the last digit to the reversedNumber (multiply by 10 to shift digits left)
        reversedNumber = reversedNumber * 10 + digit;

        // Remove the last digit from the number
        number = number / 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
