/* These program is for Implement a program to calculate the area of a triangle given its base and height.
*/

#include <iostream>
using namespace std;
//the main program will start from here. 
int main(){
    //Assigning the data types. 

    float b , h, area; 
    

    cout<<"Triangle Area Calculator."<<endl;

     
    cout<<"Enter Base ";
    cin>>b;

    cout<<"Enter Height ";
    cin>>h;

    //formula used for calculation.

    area = 0.5*b*h; 

    cout<<"The area of Triangle is "<<area;

    return 0;
}
