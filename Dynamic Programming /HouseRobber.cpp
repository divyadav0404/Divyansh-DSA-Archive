//memoization
class Solution {
public:
    int solve(int i, vector<int>& nums, vector<int>& dp) {
        if (i < 0) return 0;              // base case: no houses
        if (dp[i] != -1) return dp[i];    // already computed

        // choice 1: rob this house → nums[i] + solve(i-2)
        // choice 2: skip this house → solve(i-1)
        int rob = nums[i] + solve(i - 2, nums, dp);
        int skip = solve(i - 1, nums, dp);

        return dp[i] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(n - 1, nums, dp);
    }
};
//tabularization
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1];
    }
};
//space opti..O(1) space approach
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        int prev2 = nums[0];                     // dp[i-2]
        int prev1 = max(nums[0], nums[1]);       // dp[i-1]

        for (int i = 2; i < n; i++) {
            int curr = max(prev1, nums[i] + prev2);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
