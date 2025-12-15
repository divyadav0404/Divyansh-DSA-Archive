//Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

solution--

  ///tle sol , brute force one

  class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0 ;
        for ( int i = 0 ; i < n ;i ++)
        {
            int zc = 0;
            for( int j = i ; j < n ; j++)
            {
                if ( nums[j]==0) zc++;
                if ( zc <=k) {
                    ans = max ( ans , j -i+1);
                }
                else
                {
                    break;
                }
            }
        }
        return ans ;
    }
};
