#include <iostream>
using namespace std;
int main() {
    int rows=4;

    // cout << "Enter the number of rows: ";
    // cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces for formatting
        for (int j = 1; j <= rows - i; ++j) {
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        // Print increasing numbers (except the first number)
        for (int j = 2; j <= i; ++j) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

    