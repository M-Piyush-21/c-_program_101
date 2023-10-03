// C++ Program to Illustrate How to Traverse an Array
#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter element: ";
    cin>>n;

    if(n<=10 && n>0){
	// Initialize the array
	int table_of_two[10]
		= { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

	// Defineing i as index value... to get outputs 
	for (int i = 0; i < n; i++) {
		// Print the array elements acc to i input.
		cout << table_of_two[i] << " ";
	}
    }

    else{
        cout<<"Invalid input";
    }

	return 0;
}
