class Solution { //tc O(N) and sc is O(1)
public:
    int minOperations(vector<int>& nums, int k) {
     return accumulate(nums.begin() , nums.end() , 0LL) % k;
    }
};
