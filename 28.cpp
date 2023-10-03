#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int i = 2; 

    
    cout << "Enter the value of N: ";
    cin >> N;

    
    while (i <= N) {
        sum += i;
        i += 2;
    }

    cout << "The sum of even numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}