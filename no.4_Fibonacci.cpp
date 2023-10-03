#include<iostream>

using namespace std;
int main()
{
    int input=0, b=0, c=1 , series = 0 ;
    
    cout <<"welcome to fibonacci series \n";
    cout <<"Please enter the number of fibonacci you want \n";
    cin >> input;
    
    for (int i=1; i<input; i++){

       if (i==1){
       cout <<"here is your series \n" << b << " \n" << c << " \n";
       }

       
       series = b + c;
       b = c;
       c = series ;

       cout << series << "\n";

     }

    return 0;
    
}