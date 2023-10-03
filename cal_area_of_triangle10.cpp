#include <iostream>

using namespace std;

int main() {
    double base, height;
    
    // Input base and height from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    // Calculate the area of the triangle
    double area = 0.5 * base * height;
    
    // Display the result
    cout << "The area of the triangle is: " << area << endl;
    
    return 0;
}
