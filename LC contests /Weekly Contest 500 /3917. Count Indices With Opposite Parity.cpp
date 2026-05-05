class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        int te = 0 , to = 0 ;
        for ( int x : nums)
        {
            if ( x % 2 == 0) te ++;
            else to++;
        }
        vector<int> ans(n) ;
        for ( int i = 0 ; i < n ; i ++)
        {
            if ( nums[i] % 2 == 0) te--;
            else to--;

            if ( nums[i] % 2 == 0) 
                ans [i] = to ;
            else
                ans[i] = te ;
        }
        return ans ;
        
    }
};
