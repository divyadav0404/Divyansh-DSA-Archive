class Solution {
public: //brute force optimization to O(n^2) T.c
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for ( int i = 0 ; i < n ; i ++)
        { int sum = 0 ;
            for ( int j = i ; j < n ; j ++)
            { sum+=nums[j];
             if ( sum==k){
                count++;
             }
            }
        }
        return count ++;
    }
};
