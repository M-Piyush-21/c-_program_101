#include<iostream>
using namespace std;
int main()
//assigning data type. also used float data type which we can enter decimal value too. 
{
    float marks;
    float mth,cs,phy,chem,eng;
    float sum;


//input from user.
    cout<<"Enter the marks in Maths out of 100: ";
    cin>>mth;

    cout<<"Enter the marks in Computer Science out of 100: ";
    cin>>cs;

    cout<<"Enter the marks in Physics out of 100: ";
    cin>>phy;

    cout<<"Enter the marks in Chemistry out of 100: ";
    cin>>chem;

    cout<<"Enter the marks in English out of 100: ";
    cin>>eng;
//basic percentage formula.
    sum=mth+cs+phy+chem+eng;
    marks=((sum/500)*100);
//if else condition to determine grade. used && which works when both logics are true. 
    if(marks>=91 && marks<=100)
        cout<<"Your grade are [A1] "<<"and you had scored total "<<marks;
    else if(marks>=81 && marks<91)
        cout<<"Your grade are [A2] "<<"and you had scored total "<<marks;
    else if(marks>=71 && marks<81)
        cout<<"Your grade are [B1] "<<"and you had scored total "<<marks;
    else if(marks>=61 && marks<71)
        cout<<"Your grade are [B2] "<<"and you had scored total "<<marks;
    else if(marks>=51 && marks<61)
        cout<<"Your grade are [C1] "<<"and you had scored total "<<marks;
    else if(marks>=41 && marks<51)
        cout<<"Your grade are [C2] "<<"and you had scored total "<<marks;
    else if(marks>=33 && marks<41)
        cout<<"Your grade are [D] "<<"and you had scored total "<<marks;
    else if(marks>=21 && marks<33)
        cout<<"Your grade are [E1] "<<"and you had scored total "<<marks;
    else if(marks>=0 && marks<21)
        cout<<"Your grade are [E2] "<<"and you had scored total "<<marks;

//if some wrong input it will give error. 
    else
        cout<<"Some error occured ! ";
    cout<<endl;
    return 0;
}