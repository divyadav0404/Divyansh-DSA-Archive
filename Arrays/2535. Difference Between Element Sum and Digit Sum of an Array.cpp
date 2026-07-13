class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum = 0;
        int dsum = 0 ;
        for ( int i = 0 ; i < nums.size() ; i++)
        {
            elsum += nums[i];
             int num = nums[i];

            while(num > 0) {
                dsum += num % 10;
                num /= 10;
            }
        
        }
        return abs(dsum - elsum);
    }
};
