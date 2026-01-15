//problem 908 of leetcode
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin() , nums.end());
        int mx = *max_element(nums.begin() , nums.end());
        return max(0,((mx-k)-(mn+k))) ;
    }
}; 

/* ques is   
Code
Testcase
Testcase
Test Result
908. Smallest Range I
Solved
Easy
Topics
premium lock icon
Companies
You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

 

Example 1:

Input: nums = [1], k = 0
Output: 0
Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
Example 2:

Input: nums = [0,10], k = 2
Output: 6
Explanation: Change nums to be [2, 8]. The score is max(nums) - min(nums) = 8 - 2 = 6. */
