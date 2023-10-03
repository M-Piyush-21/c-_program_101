#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n, int d) {
    int ray[d];
    for (int i = 0; i < d; i++) {
        ray[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = ray[i];
    }
}

int main() {
    const int largenum = 100;
    int arr[largenum];
    int a, b;

    cout << "Enter the number of elements (up to " << largenum << "): ";
    cin >> a;

    if (a <= 0 || a > largenum) {
        cout << "Invalid input for number of elements." << endl;
        return 1; 
    }

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate left: ";
    cin >> b;

    rotateLeft(arr, a, b);

    cout << "Array after rotating left by " << b << " positions: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
