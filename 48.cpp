#include <iostream>
using namespace std;

int main() {
    const int largnum = 100; 
    int arr[largnum];
    int n, target;

    cout << "Enter the number of elements (up to " << largnum << "): ";
    cin >> n;

    if (n <= 0 || n > largnum) {
        cout << "Invalid input for number of elements." << endl;
        return 1; 
    }

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for: ";
    cin >> target;

    bool found = false;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }

    if (found) {
        cout << "Element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}