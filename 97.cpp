#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows for the pattern

    // Loop for upper half of the pattern
    for (int i = 1; i <= n; i++) {
        
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j < 2*i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2*i-2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    // Loop for lower half of the pattern
    for (int i = n-1; i >= 1; i--) {
        
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j < 2*i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2*i-2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}