#include <iostream>
using namespace std;

int main(){

    int num;
    int sum;

    cout<<"Enter the number upto which the sum should be done: ";
    cin>>num;
//used if statement to let code work on natural number input only. 
    if(num>0){

//inisilized sum=0.
        int sum=0;
        for(int i=1 ; i<=num ; i++ ){
            sum+=i;    
        }
        cout<<"The sum is: "<<sum;
    }

    else{
        cout<<"The number input numebr is not natural numebr. ";
    }
}