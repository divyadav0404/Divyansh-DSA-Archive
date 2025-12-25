class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int mid) {
        int subarrays = 1;
        int currSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (currSum + nums[i] <= mid) {
                currSum += nums[i];
            } else {
                subarrays++;
                currSum = nums[i];
            }
        }
        return subarrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;

        // find low and high using simple for loop
        for (int i = 0; i < nums.size(); i++) {
            low = max(low, nums[i]);
            high += nums[i];
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;   // try smaller answer
            } else {
                low = mid + 1;    // need bigger sum
            }
        }
        return ans;
    }
};
//similar to painters partition!!!
