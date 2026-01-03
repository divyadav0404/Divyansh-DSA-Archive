//sc and tc are O(1) and O(n) respectively..
N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) { //take good care of edge cases here ..
        int n = nums.size();
        for (int i = 0 ; i < n - 1 ; i ++)
        {
            if ( nums[i]==nums[i+1])
            return nums[i];

            if (  i+2 < n && nums[i]==nums[i+2])
            return nums[i];
        }
 return nums[0];
    }
    
};
