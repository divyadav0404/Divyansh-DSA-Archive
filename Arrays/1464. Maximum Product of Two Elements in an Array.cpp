//two sols......
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
       sort (nums.begin(), nums.end());
       return (nums[n-1] -1 ) * (nums[n-2]-1);

    }
};

// second one
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int l = 0 ;
        int sl = 0;
        for ( int i = 0 ; i < n ; i ++)
        {
            if ( nums[i] > l)
            {
             sl = l ;
             l = nums[i] ;
            }
            else
            {
                sl = max ( sl , nums[i]);
            }
        } 
        return (l-1) * (sl - 1) ;
    }
};
