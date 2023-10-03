#include <iostream>
using namespace std;
int main() {
    int n;

    // Prompt the user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; ++i) {
        // Inner loop for printing numbers
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Inner loop for printing numbers in reverse order
        for (int k = i - 1; k >= 1; --k) {
            cout << k;
        }

        // Move to the next line after printing the row
        cout << endl;
    }

    return 0;
}