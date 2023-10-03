#include <iostream>
using namespace std;

int main() {
    const int numrow = 100;
    const int numcols = 100;
    int mat1[numrow][numcols], mat2[numrow][numcols], result[numrow][numcols];
    int rows1, cols1, rows2, cols2;

    // Get dimensions of the first matrix
    cout << "Enter the number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> cols1;

    // Get dimensions of the second matrix
    cout << "Enter the number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> cols2;

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrix addition is not possible. Dimensions are different." << endl;
        return 1; // Exit program with error status
    }

    // Get elements of matrix 1
    cout << "Enter elements for matrix 1:" << endl;
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    // Get elements of matrix 2
    cout << "Enter elements for matrix 2:" << endl;
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Add the matrices
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the result
    cout << "Resultant matrix after addition:" << endl;
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
