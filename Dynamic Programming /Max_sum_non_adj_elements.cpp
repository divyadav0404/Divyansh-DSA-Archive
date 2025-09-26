//memoization 
class Solution {
public:
    int solve(int i, vector<int>& nums, vector<int>& dp) {
        if (i < 0) return 0;
        if (dp[i] != -1) return dp[i];
        int pick = nums[i] + solve(i - 2, nums, dp);
        int nonPick = solve(i - 1, nums, dp);
        return dp[i] = max(pick, nonPick);
    }
    int nonAdjacent(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(n - 1, nums, dp);
    }
};
// TC: O(n), SC: O(n) + O(n) (dp + recursion stack)


// tabulation
class Solution {
public:
    int nonAdjacent(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++)
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        return dp[n - 1];
    }
};
// TC: O(n), SC: O(n)
//space optimisation
class Solution {
public:
    int nonAdjacent(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        int prev2 = nums[0], prev1 = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
// TC: O(n), SC: O(1)

