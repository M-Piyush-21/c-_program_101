#include <iostream>
using namespace std;

int main() {
    // Define the two arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    
    // Calculate the size of both arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // Iterate through the elements of the first array
    for (int i = 0; i < size1; i++) {
        // Iterate through the elements of the second array
        for (int j = 0; j < size2; j++) {
            // If a common element is found
            if (arr1[i] == arr2[j]) {
                // Print the common element
                cout << arr1[i] << " ";
                break; // Exit the inner loop, as we've found a match
            }
        }
    }
    
    cout << endl;
    
    return 0;
}
