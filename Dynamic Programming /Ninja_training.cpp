//memoization
class Solution {
public:
    int solve(int day, int last, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
        // Base case: first day
        if (day == 0) {
            int maxi = 0;
            for (int task = 0; task < 3; task++) {
                if (task != last)
                    maxi = max(maxi, matrix[0][task]);
            }
            return dp[day][last] = maxi;
        }

        // Return if already calculated
        if (dp[day][last] != -1) return dp[day][last];

        int maxi = 0;
        for (int task = 0; task < 3; task++) {
            if (task != last) {
                int points = matrix[day][task] + solve(day - 1, task, matrix, dp);
                maxi = max(maxi, points);
            }
        }

        return dp[day][last] = maxi;
    }

    int ninjaTraining(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return solve(n - 1, 3, matrix, dp);  // '3' means no restriction on last activity
    }
};
// Time: O(n × 4 × 3) → ≈ O(12n) → Linear
// Space: O(n × 4) (for dp) + O(n) recursion stack

//bottom up , tabulation
class Solution {
public:
    int ninjaTraining(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // dp[day][last] → max points till day 'day' with 'last' activity done previous day
        vector<vector<int>> dp(n, vector<int>(4, 0));

        // 🔹 Base case: first day
        dp[0][0] = max(matrix[0][1], matrix[0][2]); // last = 0 → can't choose activity 0
        dp[0][1] = max(matrix[0][0], matrix[0][2]); // last = 1 → can't choose activity 1
        dp[0][2] = max(matrix[0][0], matrix[0][1]); // last = 2 → can't choose activity 2
        dp[0][3] = max({matrix[0][0], matrix[0][1], matrix[0][2]}); // last = 3 → no restriction

        // 🔹 Fill dp table for remaining days
        for (int day = 1; day < n; day++) {
            for (int last = 0; last < 4; last++) {
                dp[day][last] = 0;
                for (int task = 0; task < 3; task++) {
                    if (task != last) {
                        int points = matrix[day][task] + dp[day - 1][task];
                        dp[day][last] = max(dp[day][last], points);
                    }
                }
            }
        }

        // 🔹 Final answer: max points till last day with no restriction
        return dp[n - 1][3];
    }
};
