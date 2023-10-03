#include <iostream>
using namespace std;
int main() {
    int n;

    // Input the number of rows for the pyramid
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    // Outer loop to iterate through rows
    for (int i = 1; i <= n; i++) {
        // Inner loop to print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
        cout << " ";
        }

        // Inner loop to print the stars
        for (int k = 1; k <= 2 * i - 1; k++) {
        cout << "*";
        }

        // Move to the next line after each row
        cout << std::endl;
    }

    return 0;
}
