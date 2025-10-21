class Solution { //memoization approach
    const int MOD = 1e9 + 7;

    int f(int index, int target, vector<int> &arr, vector<vector<int>> &dp) {
        // Base case
        if (index == 0) {
            if (target == 0 && arr[0] == 0) return 2; // pick and not pick
            if (target == 0 || target == arr[0]) return 1;
            return 0;
        }

        if (dp[index][target] != -1) return dp[index][target];

        int notPick = f(index - 1, target, arr, dp);
        int pick = 0;
        if (arr[index] <= target) {
            pick = f(index - 1, target - arr[index], arr, dp);
        }

        return dp[index][target] = (pick + notPick) % MOD;
    }

public:
    int perfectSum(vector<int> &arr, int K) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(K + 1, -1));
        return f(n - 1, K, arr, dp);
    }
};
