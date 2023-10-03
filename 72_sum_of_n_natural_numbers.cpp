// find sum of n numbers using recursion
#include<iostream>
using namespace std;
int sNnum(int n) {//intiate function to recieve arguments 
    if (n == 0) {//  when n becomes 0 programme ends as no num is left to add
        return 0;
    } else {
        // Recursive case: sum will get a num with the sum of numbers less than num (till num becomes n)
        return n + sNnum(n - 1);
    }
}

int main() {
    int n;

    
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the entered number is non-negative
    if (n < 0) {
      cout << "Please enter a non-negative integer." << "\n";
    } else {
        // Call the function to find the sum of natural numbers
        int sum = sNnum(n);

        // Display the result
        cout << "Sum of first " << n << " natural numbers is: " << sum <<"\n";
    }

    return 0;
}
