#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows != cols) {
        cout << "The input matrix is not square. Diagonal sum is not defined." << endl;
        return 1;
    }

    int matrix[100][100];
    int diagonalSum = 0;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
            if (i == j) { // Check if it's a diagonal element
                diagonalSum += matrix[i][j];
            }
        }
    }

    cout << "The sum of elements in the main diagonal is: " << diagonalSum << endl;

    return 0;
}
