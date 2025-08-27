
//iterating both the arrays and at the end checking that will the sum be equal to the target or not
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for ( int i = 0 ; i< n ; i ++)
        {
            for ( int j = i +1 ; j < n ; j ++)
            {
                if (nums[i]+nums[j]==target)
                return {i,j};
        }
        }
        return{};
    }
};
