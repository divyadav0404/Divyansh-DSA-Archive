//solution
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==1) return 0;
        int ans = INT_MAX;
        sort(nums.begin(), nums.end());
        for( int i = 0 ; i+k-1< n ; i++)
        {
            ans = min( ans , nums[i+k-1]-nums[i]);
        }
        return ans ;

    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(1) (or O(log n) due to sorting) 
