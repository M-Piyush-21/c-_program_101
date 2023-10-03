
//armstrong or narccicist num finding
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int nu,r=0,n=0;

    // Input the number
    cout << "Enter a number: ";
    cin >> nu;
    int a=nu;
    while (a != 0) {
        a /= 10;
        ++n;
    }
    a=nu;
    // power identification
    while (a > 0) {
        int digit = a % 10;  // Get the last digit
        a /= 10;  //Remove the last digit
        r += pow(digit, n);
    }
    if(r==nu){
    cout << "the num is armstrong\n";
    }
    else{cout<<"not an armstrong\n";

    }

    return 0;
}

// //   // Calculate result
//     while (originalNumber != 0) {
//         remainder = originalNumber % 10;
//         result += pow(remainder, n);
//         originalNumber /= 10;
//     }