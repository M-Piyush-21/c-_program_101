#include <iostream>

using namespace std;

int main() {
    int number,i,j;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int factorial ;

        for (i = 1; i <= number; ++i) {
            factorial = 1; 
            for (j = 1; j <= i; ++j) {
                factorial *= j;
            }
            
        }
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}