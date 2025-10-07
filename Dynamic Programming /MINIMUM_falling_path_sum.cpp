//memoization ( gives tle on lc 49/52 tc passed )
class Solution { //tc Note: Recursion overhead may cause TLE in C++ for large n (~1000), even though theoretically O(n²
public: //memoization solution
       int f( int i , int j , vector<vector<int>> &matrix , vector<vector<int>> &dp) {
       int n = matrix.size();
       if ( j<0 || j >= n) return 1e9 ;
       if ( i==0) return matrix[0][j];
       if (dp[i][j]!= -1) return dp[i][j];

       int up = matrix[i][j] + f( i-1,j,matrix, dp);
       int ld = matrix[i][j]  + f( i-1 , j-1 , matrix, dp);
       int rd = matrix[i][j]  + f( i-1, j + 1 , matrix , dp);
       return dp[i][j] = min( {up , ld , rd});
       }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
vector <vector<int>> dp( n , vector<int>(n,-1));

int mini = 1e9 ;
for( int j = 0 ; j < n ; j ++)
{
mini = min( mini , f(n-1 , j , matrix , dp));
}
return mini ;

    }
};


//tabularization
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: first row same as matrix
        for (int j = 0; j < n; j++) dp[0][j] = matrix[0][j];

        // Fill dp row by row
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int up = dp[i-1][j];                      // from above
                int leftDiag = j > 0 ? dp[i-1][j-1] : 1e9; // from left diagonal
                int rightDiag = j < n-1 ? dp[i-1][j+1] : 1e9; // from right diagonal
                dp[i][j] = matrix[i][j] + min({up, leftDiag, rightDiag});
            }
        }

        // Answer is the min in the last row
        int ans = dp[n-1][0];
        for (int j = 1; j < n; j++) ans = min(ans, dp[n-1][j]);
        return ans;
    }
};
 //all pass as no recursive approach used we use bottom up , so no recursive overheads are used
