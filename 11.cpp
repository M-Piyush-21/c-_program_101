#include <iostream>
using namespace std;

int main(){
  //Assigning the data types. 

    char choice;
    double C, F; 
    double formula;


    cout<<"Program to convert temperature from Celsius to Fahrenheit and vice versa. "<<endl;

    cout<<"Enter you choice"<<endl;
    cout<<"Type A. For Converting Celsius to Fahrenheit"<<endl;
    cout<<"Type B. For Converting Fahrenheit"<<endl;


    cin>>choice;
//here we had used switch condition. Which is in more sorted way, which we can furthur add more cases. 
    switch (choice){
        case 'A':
            cout<<"Enter Number in celcsius ";
            cin>>C;
            formula=C*1.8;
            cout<<"After converting celcsius to fahrenheit is "<<formula+32<<"°F";
                break;


        case 'B':
            cout<<"Enter Number in Fahrenheit ";
            cin>>F;
            formula=F-32;
            cout<<"After Converting Fahrenheit to celsius is "<<formula*0.55555555555<<"°C";
                break;
//If some one enters wrong choice these is the default statement which is going to print. 
        default:
            cout<<"Invalid Choice... Please enter option A or B... The input is chase sensitive. ";
                break; 
    }

return 0; 

}