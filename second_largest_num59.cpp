#include <iostream>
using namespace std;

int main() {
    int n; // Number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two elements are required to find the second largest element." << endl;
        return 1; // Exit with an error code
    }

    int arr[n]; // Declare an array of size 'n'

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the array
    }

    int firstMax, secondMax;

    // Initialize the first and second maximum values
    if (arr[0] > arr[1]) {
        firstMax = arr[0];
        secondMax = arr[1];
    } else {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    // Traverse the array to find the first and second maximum values
    for (int i = 2; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << "The second largest element is: " << secondMax << endl;

    return 0; // Exit with success
}
