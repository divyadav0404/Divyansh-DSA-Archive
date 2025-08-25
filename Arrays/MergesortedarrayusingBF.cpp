//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector< long long > nums3(m+n);
        int left = 0 ;
        int right = 0 ;
        int index = 0 ;

        while ( left < m && right < n )
        {
            if(nums1[left]<=nums2[right])
            {
                nums3[index] = nums1[left];
                index++;
                left++;
            }
            else{
                nums3[index] = nums2[right];
                index++;
                right++;

            }
        }
            while (left < m )
            {
                nums3[index++] = nums1[left++];
            }
            while( right < n)
            {
                nums3[index++] = nums2[right++];
            }
            for ( int i = 0 ; i < n+m ; i++)
            {
                nums1[i]=nums3[i];
            }

    }
};
