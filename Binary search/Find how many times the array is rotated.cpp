class Solution {
public:
    int findKRotation(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than the rightmost element,
            // the smallest (pivot) lies to the right of mid
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                // Otherwise, pivot lies at mid or to the left of mid
                high = mid;
            }
        }

        // low == high → index of smallest element (rotation count)
        return low;
    }
};
