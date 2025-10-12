//brute force approach 
class Solution { //brute force solution which takes O(n) extra space
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg ;
        int n = nums.size();
        for ( int i = 0 ; i < n ; i++)
        {
            if ( nums[i]> 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
         vector<int> result(nums.size());
         for ( int i = 0 ; i < pos.size() ; i ++)
         {
            result [2*i] = pos[i];
            result[2*i + 1] = neg[i];

         }
         return result ;
    }
};
