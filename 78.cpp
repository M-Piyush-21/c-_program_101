#include <iostream>
using namespace std;

const int N_MAX = 20;
int board[N_MAX];

void printBoard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int row, int col, int n) {
    for (int i = 0; i < col; i++) {
        if (board[i] == row || abs(board[i] - row) == col - i) {
            return false;
        }
    }
    return true;
}

void solveNQueens(int col, int n) {
    if (col == n) {
        printBoard(n);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (isSafe(i, col, n)) {
            board[col] = i;
            solveNQueens(col + 1, n);
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of queens (N): ";
    cin >> n;

    if (n < 1 || n > N_MAX) {
        cout << "Invalid input. Please enter a number between 1 and " << N_MAX << "." << endl;
        return 1; // Exit program with error status
    }

    solveNQueens(0, n);

    return 0;
}
