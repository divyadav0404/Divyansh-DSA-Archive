//extension of prob subset sum equal k
class Solution { //memoization approach
public:
int f( int i , int t, vector<int> &nums , vector<vector<int>> &dp)
{
   if(t==0) return true ;
   if(i==0)return nums[0]==t;
   if(dp[i][t]!= -1) return dp[i][t];
   bool nottake = f(i-1, t , nums, dp);
   bool take = false ;
   if ( nums[i]<=t) take = f(i-1 , t-nums[i], nums, dp);
   return dp[i][t] = take || nottake ;

}




public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int ts = accumulate( nums.begin() , nums.end() , 0);
        if ( ts % 2 != 0) return false ;
        int t= ts/2 ;
        vector<vector<int>> dp(n, vector<int>(t+1 , -1));
        return f( n-1 , t , nums, dp);
    }
};//tc  and sc is O(n*target)
