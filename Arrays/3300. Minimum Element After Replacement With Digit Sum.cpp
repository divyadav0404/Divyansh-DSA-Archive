class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;

        for (int x : nums) {
            int s = 0;
            while (x) {
                s += x % 10;
                x /= 10;
            }
            mn = min(mn, s);
        }

        return mn;
    }
};
