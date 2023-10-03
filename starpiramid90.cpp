#include <iostream>
using namespace std;
int main() {
    int rows = 5; // Change this value to adjust the number of rows
    int spaces = rows - 1;
    int stars = 1;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
        cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            std::cout << "*";
        }

        // Move to the next row
        cout << std::endl;

        spaces--;
        stars += 2;
    }

    return 0;
}



