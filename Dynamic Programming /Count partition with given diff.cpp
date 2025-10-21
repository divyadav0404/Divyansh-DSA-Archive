#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    int f(int i, int target, vector<int>& arr, vector<vector<int>>& dp) {
        // Base case
        if (i == 0) {
            if (target == 0 && arr[0] == 0) return 2; // two ways: include or exclude 0
            if (target == 0 || target == arr[0]) return 1;
            return 0;
        }

        if (dp[i][target] != -1) return dp[i][target];

        int notTake = f(i - 1, target, arr, dp);
        int take = 0;
        if (arr[i] <= target)
            take = f(i - 1, target - arr[i], arr, dp);

        return dp[i][target] = (take + notTake) % MOD;
    }

    int countPartitions(int n, int diff, vector<int>& arr) {
        int totalSum = accumulate(arr.begin(), arr.end(), 0);

        // sum1 = (totalSum + diff)/2 must be integer and non-negative
        if ((totalSum + diff) % 2 || totalSum < diff) return 0;

        int target = (totalSum + diff) / 2;
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        return f(n - 1, target, arr, dp);
    }
};
//tc and sc will be O(n*target)
