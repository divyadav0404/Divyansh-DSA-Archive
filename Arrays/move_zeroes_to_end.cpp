class Solution { //most optimal solution having tc of O(n) ad sc of O(1)
public://but yeah we have modified the array
    void moveZeroes(vector<int>& nums) {
     int n = nums.size();
     int j = -1;
     for ( int i = 0 ; i < n ; i ++)
     {
        if (nums[i]==0)
        {
            j = i ;
            break ;
        }
     }
     if (j==-1) return ; //imp don't forget this while writing the code 
     for ( int i = j + 1; i < n ; i ++)
     {
        if ( nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
     }   
    }
};
