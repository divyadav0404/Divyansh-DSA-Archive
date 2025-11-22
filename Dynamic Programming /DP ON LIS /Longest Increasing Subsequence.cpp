// tc and sc are O(n^2) as we can see that stc and torage space are computed by n(n+1) .. here's the code
class Solution {
public:

int f (int i , int prev , vector<int>&nums , vector<vector<int>>&dp)
{
    if(i == nums.size()) return 0;
    if(dp[i][prev+1]!= -1) return dp[i][prev+1];

    int nottake = 0+ f(i+1,prev,nums,dp);
    int take = 0;
    if(prev == -1 || nums[i]>nums[prev])
    {
        take = 1 + f(i+1 , i , nums , dp);
    }
    return dp[i][prev+1] = max(take , nottake);
}
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(0,-1,nums,dp); //tc and sc are O(n^2)
    }
};
