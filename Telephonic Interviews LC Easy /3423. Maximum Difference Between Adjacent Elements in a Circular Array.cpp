class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxidiff = 0 ;
        for ( int i = 0 ; i < n ; i ++)
        {
            maxidiff  = max ( maxidiff , abs ( nums[i]-nums[(i+1) % n]) );
        }
        return maxidiff ;
    }
};
