#include<iostream>
using namespace std;

//finding HCF using recursion
int HCF(int n1, int n2) {
    if (n2 != 0) {
        return HCF(n2, n1 % n2);
    } else {
        return n1;
    }
}

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // ensure natural numbers
    if (n1 < 0 || n2 < 0) {
        cout << "make sure to enter natural numbers only" << endl;
        return 1; // return f(x) again
    }

    int hcf =HCF(n1, n2);

    cout << "The HCF of " << n1 << " and " << n2 << " is: " << hcf << endl;

    return 0;
}
