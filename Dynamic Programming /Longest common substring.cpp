//just a small change as compared to that of lcs(subsequence) // tc and sc of O(N*M)  is used here.
 class Solution { //tabulation
public:
    int longestCommonSubstr(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (str1[i - 1] == str2[j - 1]) { 
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    ans = max(ans, dp[i][j]);
                } else {
                    dp[i][j] = 0; // reset for substring (contiguous) //this is the change , there we check the max of remaining here no conti uous so zero
                }
            }
        }

        return ans;
    }
};
//memoization //not recommended as we need one more variable ans to store our answer.

class Solution {
public:
    int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp, int &ans) {
        // Base case
        if (i == 0 || j == 0) return 0;

        // If already computed
        if (dp[i][j] != -1) return dp[i][j];

        // If chars match → extend substring
        if (s1[i - 1] == s2[j - 1]) {
            dp[i][j] = 1 + solve(i - 1, j - 1, s1, s2, dp, ans);
            ans = max(ans, dp[i][j]); // update global max
        } 
        else {
            dp[i][j] = 0; // reset to 0 (since substring must be contiguous)
        }

        // Still explore other paths (break current substring and start new)
        solve(i - 1, j, s1, s2, dp, ans);
        solve(i, j - 1, s1, s2, dp, ans);

        return dp[i][j];
    }

    int longestCommonSubstr(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        int ans = 0;
        solve(n, m, s1, s2, dp, ans);
        return ans;
    }
};

