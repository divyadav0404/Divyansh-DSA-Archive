class Solution { //REFQ55 on leetcode
public:
    bool canJump(vector<int>& nums) { //TC is O(N) and sc is O(1) here
        int maxReach = 0 ;
        int n = nums.size ();
        for ( int i = 0 ; i <= n-1 ; i ++)
        {
            if ( i > maxReach)
            {
                return false ;
            }
            maxReach = max ( maxReach , i + nums[i]);
        }
        return true ;
    }
};
