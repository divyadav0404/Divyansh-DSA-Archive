class Solution{ //TC O(N^2)
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int count = 0 ;
        for ( int i = 0 ; i < n ; i ++)
        
        { int xorsum = 0 ;
            for ( int j = i ; j <n ; j ++ )
            {
    xorsum ^= nums[j];
    if(xorsum==k)
    count ++;
            }
        }
         return count ;
    }
   
};
