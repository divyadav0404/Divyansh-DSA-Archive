//memoization
class Solution {
private:
    bool f(int index, int target, vector<int> &arr, vector<vector<int>> &dp) {
        if (target == 0) return true;
        if (index == 0) return arr[0] == target;

        if (dp[index][target] != -1) return dp[index][target];

        bool notTake = f(index - 1, target, arr, dp);
        bool take = false;
        if (arr[index] <= target)
            take = f(index - 1, target - arr[index], arr, dp);

        return dp[index][target] = take || notTake;
    }

public:
    bool isSubsetSum(vector<int> &arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return f(n - 1, target, arr, dp);
    }
};
//tabulation
class Solution {
public:
    bool isSubsetSum(vector<int> &arr, int target) {
        int n = arr.size();
        vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

        // Base case: target = 0 is always possible (empty subset)
        for (int i = 0; i < n; i++) dp[i][0] = true;

        // First element
        if (arr[0] <= target)
            dp[0][arr[0]] = true;

        for (int i = 1; i < n; i++) {
            for (int t = 1; t <= target; t++) {
                bool notTake = dp[i - 1][t];
                bool take = false;
                if (arr[i] <= t)
                    take = dp[i - 1][t - arr[i]];
                dp[i][t] = take || notTake;
            }
        }

        return dp[n - 1][target];
    }
};
