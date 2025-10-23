class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector < unsigned long long> dp(amount + 1 , 0);

        dp[0] = 1 ;
        for ( int i =0 ; i < coins.size() ; i ++)
        {
            int coin = coins[i];
        for ( int j = coin ; j <= amount ; j++)
        {
dp[j] +=  dp[j-coin];
        }
                 
        }
      return static_cast<int>(dp[amount]); 
    }
}; //O(n*amount) and O(amount) these are the time and space compleities
