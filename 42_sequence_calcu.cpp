#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "length of series : ";//input for sequence range
    cin >> n;

    double sum = 0.0;
// series calculation
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i;
        } else {
            sum += 1.0 / i;
        }
    }

    // Output: Sum of the series
    cout << "Sum of the series: " <<sum << endl;

    return 0;
}
