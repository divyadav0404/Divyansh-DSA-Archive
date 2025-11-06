//extension of ques longest common subsequence..
class Solution {
public:
    int minDistance(string word1, string word2) {
           int n = word1.size();
        int m = word2.size();

        // dp[i][j] = LCS length for first i characters of text1 and first j of text2
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // Base case already handled because dp[0][*] and dp[*][0] = 0

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (word1[i - 1] == word2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        int lps = dp[n][m] ;
        return (n+ m - 2 *lps) ;
    }
};
    
