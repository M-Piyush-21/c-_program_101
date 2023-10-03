#include <iostream>
using namespace std;

int main(){
    float a,b;
    char oper;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter secound number: ";
    cin>>b;

    cout<<"What you want to perform";
    cout<<"Enter one of these + , - , / , * ";
    cin>>oper;

    switch (oper){
        case '+':
            cout<<"The Addition of "<<a<<" and "<<b<<"is "<<a+b;

            break;
        
        case '-':
             cout<<"The Subtraction of "<<a<<" and "<<b<<"is "<<a-b;

             break;
        
        case '*':
             cout<<"The Multiplication of "<<a<<" and "<<b<<"is "<<a*b;

             break;
        
        case '/':
//division wouldn't possible if first number is 0. 
            if(a==0){
                 cout<<"Invalid input in First number";
            }
            
            else{
                cout<<"The Divison of "<<a<<" and "<<b<<"is "<<a/b;
            }

            break;

            

    }
}