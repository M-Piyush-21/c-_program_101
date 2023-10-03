// C++ program to print
// right triangle
#include <iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter the number lines to be printed: ";
cin>>n;

// ith row has i elements
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= i; j++)
	cout << "* ";
	cout << endl;
}
return 0;
}
