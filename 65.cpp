#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and print sum of each row
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        cout << "Sum of elements in row " << i + 1 << " is " << row_sum << endl;
    }

    return 0;
}
