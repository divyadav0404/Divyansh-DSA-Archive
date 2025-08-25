class Solution { //used Moore's Voting algo here
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 ;
        int candidate = 0 ;

        for ( int i = 0 ; i < nums.size() ; i ++)
        {
            int num = nums[i];
        if ( count == 0)
        {
            candidate = num ;
        }
if ( candidate == num)
{
    count ++ ;
}
else
{
    count --;
}

        }
        return candidate ;

    }
};
