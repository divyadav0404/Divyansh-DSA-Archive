class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> f(101, 0);
        int mx = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            f[x]++;

            if (f[x] > mx) {
                mx = f[x];
                ans = mx;
            }
            else if (f[x] == mx) {
                ans += mx;
            }
        }

        return ans;
    }
};
