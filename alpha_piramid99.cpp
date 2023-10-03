#include <iostream>
using namespace std;
int main() {
    int n = 5;  // Number of rows
    
    for (char ch = 'E'; ch >= 'A'; ch--) {
        for (int i = 1; i <= n; i++) {
        cout << ch;
        }
        cout << endl;
        n--;
    }

    return 0;
}
