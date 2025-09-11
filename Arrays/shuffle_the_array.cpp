class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) { /*TC will be O(n) and we also used result.reserve(2*N) for saving space and also it helped in optimizing tc too */ //sc is O(1)
        vector<int> result;
       result.reserve(2*n);

        for ( int i = 0 ; i < n ; i ++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[i+n]);
        }
        return result ;
    }
};
