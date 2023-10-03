#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float a,b,c,x1,x2,d,real,imaginary;
  cout<<"Quadratic Equation : ax^2 + bx + c";
  cout<<"\nEnter coefficient of a : ";
  cin>>a;
  cout<<"Enter coefficient of b : ";
  cin>>b;
  cout<<"Enter coefficient of c : ";
  cin>>c;
  d=b*b-4*a*c;
  if(d>0)
  {
    cout<<"Roots are real and distinct";
    x1=(-b + sqrt(d)) / (2*a);
    x2=(-b - sqrt(d)) / (2*a);
    cout<<"\nx1 = "<<x1;
    cout<<"\nx2 = "<<x2;
  }
  else if(d==0)
  {
    cout<<"Roots are real and same";
    x1=(-b + sqrt(d)) / (2*a);
    cout<<"\nx1 = "<<x1;
    cout<<"\nx2 = "<<x1;
  }
  else
  {
    cout<<"Roots are complex and distinct";
    real = -b/(2*a);
    imaginary = sqrt(-d) / (2*a);
    cout<<"\nx1 = "<<real<<"+"<<imaginary<<"i";
    cout<<"\nx2 = "<<real<<"-"<<imaginary<<"i";
  }
  return 0;
}