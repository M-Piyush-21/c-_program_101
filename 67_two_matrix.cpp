#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    // Check if the dimensions are compatible for addition
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrices cannot be added. Dimensions are not compatible." << endl;
        return 1;
    }

    // Create matrices and initialize them
    int mat1[rows1][cols1], mat2[rows2][cols2];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Add the matrices
    int sum[rows1][cols1];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the result
    cout << "The result of addition is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
