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
    
    if(sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    return 0;
}
