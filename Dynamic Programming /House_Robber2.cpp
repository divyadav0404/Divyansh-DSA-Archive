//same ques as houserobber1 just circular arrangement more
// same tc and sc
class Solution {
public:
    int roblinear(vector<int>& nums , int start , int end ) {
        int n = end - start + 1 ;
        if ( n == 0) return 0;
        if ( n ==1) return nums[start];

         int prev2 = nums[start];
        int prev1 = max (nums[start] , nums[start+1]);

        for ( int i = start + 2 ; i <= end ; i ++){
            int curr = max ( prev1 , prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;

        }
        return prev1;
  
}; // this is the new thing we have to do , above things are same as house robber 1 problem.
int rob(vector<int> &nums){

    int n = nums.size();
    if ( n == 0) return 0;
    if ( n ==1) return nums[0];

    int case1 = roblinear(nums , 1 , n -1);
    int case2 = roblinear( nums , 0 , n-2);

    return max( case1, case2);
}
};
