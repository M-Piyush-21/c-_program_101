#include <iostream>

using namespace std;

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0.0;

    for (int i = 1; i <= N; i++) {
        // Calculate i/i! and add it to the sum
        sum += static_cast<double>(i) / factorial(i);
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
