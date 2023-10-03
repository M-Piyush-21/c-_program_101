#include <iostream>
using namespace std;

const int nummax = 100;
 long memo[nummax] = {0};

 long factorial(int n) {
    if (n < 2) {
        return 1;
    }

    if (memo[n] != 0) {
        return memo[n];
    }

    return memo[n] = n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0 || n >= nummax) {
        cout << "Factorial is not defined for negative numbers or numbers greater than or equal to " << nummax << "." << endl;
        return 1; // 
    }

    long result = factorial(n);

    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
