#include <iostream>
using namespace std;

int square(int x) {

    return x * x;
}

int cube(int x) {
 
    return x * x * x;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int results = square(number);
    int resultc = cube(number);

    cout << "The square of " << number << " is: " << results << endl;
    cout << "The cube of " << number << " is: " << resultc << endl;

    return 0;
}