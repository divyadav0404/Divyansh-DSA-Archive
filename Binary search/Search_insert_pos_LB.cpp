class Solution { //O(logn) time complexity and sc is O(1) as no extra space is being used.
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1 ;
        int ans = n ;
        while ( low <=high)
        {
            int mid = high + (low-high)/2;
            if (nums[mid]>=target)
            {
                ans = mid ;
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }
        return ans ;
          
    }
};
