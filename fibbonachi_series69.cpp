#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
    cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        int result = fibonacci(n);
    cout << "The " << n << "th term of the Fibonacci series is: " << result << std::endl;
    }

    return 0;
}
