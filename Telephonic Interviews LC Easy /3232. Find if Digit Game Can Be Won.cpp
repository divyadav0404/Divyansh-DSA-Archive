class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sd = 0 ;
        int dd = 0 ;
        int n = nums.size();
        for ( int i = 0 ; i < n ; i ++)
        {
            if ( nums[i] <= 9)
            {
sd += nums[i];
            }
            else {
dd+= nums[i] ;
            }
        }
        if ( sd == dd) return false ;
        else return true ;

    }
};
