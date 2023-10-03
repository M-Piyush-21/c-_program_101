#include<iostream>
 
using namespace std;
 
int main()
{
int i,j,k,n,a[30];
cout<<"How many elements?";
cin>>n;
if(n<=0)
{
 cout << "Invalid input for number of elements." << endl;
}
else
{
cout<<"Enter elements of array"<<endl;
}
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
 
return 0;
}