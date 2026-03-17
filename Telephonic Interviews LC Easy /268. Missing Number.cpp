class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total = n * (n + 1) / 2;  // correct formula

        int actual = 0;
        for (int i = 0; i < n; i++) {
            actual += nums[i];
        }

        return total - actual;
    }
};
