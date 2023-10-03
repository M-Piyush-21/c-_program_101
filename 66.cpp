#include <iostream>
using namespace std;

int main() {
    const int MAX_ROWS = 3;
    const int MAX_COLS = 3;

    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int maxElement = matrix[i][0];

        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }

        cout << "Largest element in row " << i + 1 << ": " << maxElement << endl;
    }

    return 0;
}
