class Solution {
public: //tc and sc both are respectively O(n) and O(1) respevtively.
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1 , suffix = 1 ;
        int ans = INT_MIN ;

        for ( int i = 0 ; i < n ; i ++)
        {
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-(i+1)];
ans = max ( {prefix , suffix, ans });

if ( prefix==0) prefix= 1 ;
if ( suffix == 0) suffix= 1;

        }
        return ans ;
    }
};
