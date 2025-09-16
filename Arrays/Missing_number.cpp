class Solution { //Tc will be O(n) and Sc will be O(1) as there is no use of the extra space.
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int expectedsum = n* (n+1) / 2 ;
        int actualsum=0;
        for ( int i = 0 ; i < n ; i ++)
        {
            actualsum= actualsum + nums[i];

        }
        return expectedsum - actualsum ;
    }
};
