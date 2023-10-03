#include <iostream>
#include <unordered_map> // Include the unordered_map header for efficient element counting

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1;
    }

    int arr[100]; // Declare an array (maximum size of 100 for simplicity)
    unordered_map<int, int> frequency; // Use an unordered_map to store element frequencies

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // Update the frequency in the unordered_map
        if (frequency.find(arr[i]) != frequency.end()) {
            frequency[arr[i]]++;
        } else {
            frequency[arr[i]] = 1;
        }
    }

    cout << "Element Frequency:" << endl;

    // Iterate through the unordered_map and print element frequencies
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
