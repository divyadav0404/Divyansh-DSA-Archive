class Solution { // avery good questions indirectly based on |s1-s2|= particular sum d
public:

int f(vector<int> &nums , int i , int sums , vector<vector<int>> &dp)
{
if(i==0)
{
    if ( sums == 0 && nums[0] == 0  ) return 2 ;
    if ( sums == 0 || sums == nums[0]) return 1 ;
    return 0;
} //tc and sc will be       O( n  * subsetsum ) in some order
 if(dp[i][sums] != -1) return dp[i][sums];

 int notpick = f(nums, i-1 , sums , dp);
 int pick = 0 ;
 if ( nums[i]<=sums)
  pick = f(nums, i-1 , sums-nums[i], dp);

  return dp[i][sums] = pick + notpick ;
}

    public:

        

    int findTargetSumWays(vector<int>& nums, int target) {
       int total = accumulate(nums.begin() , nums.end(),0 );

       if ((total+target) % 2 != 0 || abs(target) > total)
       return 0;

       int subsetsum = (total + target) / 2;
       int n = nums.size();
       vector<vector<int>> dp(n, vector<int>(subsetsum + 1, -1));
return f(nums , n-1 , subsetsum ,dp);
    }
};
