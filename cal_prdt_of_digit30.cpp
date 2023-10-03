#include <iostream>
using namespace std;

int main() 
{
    int a;
    cout << "Enter a positive integer: ";
    cin >> a;
    int product,dig;

    if (a<0)
    {
        cout<<"Please enter positive integer";
    }
    else
    {      
        while (a > 0) 
        {
            dig = a % 10; 
            product *= dig;      
            a /= 10;                    
        }       
    }
    cout << "The product of the digits is: " << product << endl;
    return 0;
}