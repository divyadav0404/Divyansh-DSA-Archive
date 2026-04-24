
class Solution {
public:
    bool divideArray(vector<int>& nums) {
     int n = nums.size();
     sort(nums.begin(), nums.end());
     for ( int i = 0 ; i < n ; i = i + 2)
     {
        if ( nums[i] != nums[i+1]) return false ;
     }   
     return true ;
    }
};
// new approach

class Solution {
public:
    bool divideArray(vector<int>& nums) {
     int n = nums.size();
     sort(nums.begin(), nums.end());
     for ( int i = 1 ; i < n ; i = i + 2)
     {
        if ( (nums[i] ^ nums[i-1]) != 0) return false ;
     }   
     return true ;
    }
};
