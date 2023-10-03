#include<iostream>

using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> num;

    while(num>0){

    if (num <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break; // If a factor is found, it's not prime, so we break the loop
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is a composite number." << endl;
    }
    break;
    }

    return 0;
}
