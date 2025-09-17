class Solution {
public: //optimised approach tc = O(n) and sc = O(1)
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxprod = nums[0] , minprod = nums[0] , ans = nums[0];
        for ( int i = 1 ; i < n ; i ++)
        {
            if ( nums[i]<0) swap(maxprod,minprod);
            maxprod = max ( nums[i], nums[i]*maxprod);
            minprod = min ( nums[i], nums[i]*minprod);
            ans = max ( ans , maxprod);
        }
        return ans ;
    }
};
//Maintain running max & min products while iterating, swap on negatives, and keep track of the global max.
