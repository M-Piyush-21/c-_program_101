#include<iostream>
using namespace std;
// lcm
int main() {
    int n1, n2,lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int num1=n1,num2=n2;
    // ensure natural numbers
    if (n1 > 0 && n2 > 0) {
    //  for (lcm = maxNum; ; lcm += maxNum) {
    //  if  (lcm % n1 12== 0 && lcm % n2 == 0) {
         while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    };
    cout<<n1;
    lcm=(num1*num2)/n1;
        cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
       
    // }}
    }else {
           cout << "   make sure to enter natural numbers only" << endl;
        return 1; // return f(x) again
    }
   return 0;
}
