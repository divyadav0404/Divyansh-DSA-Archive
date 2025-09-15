class Solution { //l.c q26 and TC is O(1) and SC is O(n) 2ptr and most optimized approach
public: 
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        for( int j = 1 ; j < nums.size(); j ++)
        {
            if ( nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
