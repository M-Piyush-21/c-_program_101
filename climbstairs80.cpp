#include <iostream>
#include <vector>

using namespace std;

int countWaysToClimbStairs(int n, vector<int>& stepSizes) {
    int m = stepSizes.size();
    vector<int> dp(n + 1, 0);

    dp[0] = 1;  // There is one way to climb 0 stairs (no steps).
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (i - stepSizes[j] >= 0) {
                dp[i] += dp[i - stepSizes[j]];
            }
        }
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int m;
    cout << "Enter the number of different step sizes: ";
    cin >> m;

    vector<int> stepSizes(m);
    cout << "Enter the step sizes: ";
    for (int i = 0; i < m; i++) {
        cin >> stepSizes[i];
    }

    int ways = countWaysToClimbStairs(n, stepSizes);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
