#include <iostream>

using namespace std;

int main() {

    int i, n, sum = 0;

    // Take input from user.
    cout << "Print sum of even numbers till : ";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Check for even or not.
        if((i % 2) == 0) {

            sum += i;

        }
    }

    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
}