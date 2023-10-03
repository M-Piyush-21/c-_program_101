// Write a program to print the multiplication table of a number using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n,x;
    cout << "Enter a number you want multiplication table off  and upto : ";
    cin >>x>> n;
    for(int i=1;i<=n;i++){
        cout<<i<<" * "<<x<<" = "<<i*x<<endl;
    }
    return 0;
    }
 
