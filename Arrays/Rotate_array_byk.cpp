//q189 lc
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //we will directly solve it using the most optimal way and it will just take an O(1) sc. and O(N) Tc
        int n = nums.size();
        k = k % n ;
        reverse (nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k , nums.end());
    }
};
