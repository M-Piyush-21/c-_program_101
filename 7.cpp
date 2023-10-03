#include <iostream>
using namespace std;
int main ()
{
    int per;
    cout<<"Enter the Number";
    cin>>per;
    int n = per, sum = 0;
    
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum = sum + i;
    }
// The smaller numbers that can divide evenly into 6 (except for 6 itself) are 1, 2, and 3.
// When you add up 1 + 2 + 3, you get 6, which is the same as the original number.
// So, 6 is a perfect number! 
    
    if(sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    return 0;
}
