#include <iostream>  
using namespace std;  
int main()  
{  
  int n,m,sum=0,count;    
  cout<<"Enter the Number=";    
  cin>>n;    
 count=n;    
 while(n>0)    
{    
 m=n%10;    
 sum=(sum*10)+m;    
 n=n/10;    
}    
if(count==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  