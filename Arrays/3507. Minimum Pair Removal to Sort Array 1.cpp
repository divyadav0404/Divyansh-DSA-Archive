class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0 ;
        while( !is_sorted(nums.begin(), nums.end())){
        int idx = 0 ;
        for ( int i = 1 ; i < nums.size() ; i ++)
        {
            if ( nums[i] + nums[i-1] < nums[idx] + nums[idx+1])
            idx = i - 1;
        }
        nums[idx] = nums[idx] + nums[idx+1];

        nums.erase(nums.begin() + idx + 1);
        ans ++;
            }
            return ans ;
    }
};
