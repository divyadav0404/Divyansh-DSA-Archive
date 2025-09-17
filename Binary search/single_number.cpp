/* Brute */
class Solution {
public:
    int singleNumber(vector<int>& nums) { //O(n^2) time complexity solution it is
        int n = nums.size();
        for ( int i = 0 ; i < n ; i ++)
        {
           int ans = nums[i];
           int cnt = 0 ;

        for ( int j = 0 ; j < n ; j ++)
        {
            if (nums[j]==ans){
                cnt ++;
            }
        }
            if (cnt == 1) return ans ;
        }
        return -1;
    }
};
/*Optimal , xor magic */
class Solution {
public: //most optimal sol with tc of O(n) and Sc of O(1) as no extra space is being used.
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0 ;
        for( int i = 0 ; i < n; i ++)
        {
            res = res ^ nums[i];
        }
        return res ;
    }
};
