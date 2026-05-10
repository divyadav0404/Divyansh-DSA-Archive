class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        
        vector<int> a = nums;

        reverse(nums.begin(), nums.end());

        for (int x : nums) {
            a.push_back(x);
        }

        return a;
    }
};
