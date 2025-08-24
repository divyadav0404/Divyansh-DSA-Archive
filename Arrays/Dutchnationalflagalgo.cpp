
// // best way to solve sort 0's 1's and 2's arrays or similar questions , tc 0(n) and beats 97% of sol on leetcode in SC.

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
       int count =0;
       map<int, int>mp;
       for(auto i:nums){
          mp[i]++;
       }

       vector<int>ans;
       for(int i =0;i<mp.size();i++){
          int a = mp[i];
          
          for(int i =0;i<a;i++){
            ans.push_back(count);
          }
          count++;
       }

       nums = ans;

    }
};
