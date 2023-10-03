#include <iostream>
using namespace std; 

int main(){
//assigning data type. 
    int n, i; 

    cout<<"Enter the number: ";
    cin>>n;
//for loop used to run multiplication upto 10. 
    for (int i=1;i<=10;i++)

//Printing statement. 
    
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
        i++;
    return 0; 
    
}