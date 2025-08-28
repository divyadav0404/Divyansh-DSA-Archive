//brute force got TLE

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // the most naive and brute force approach to this question
        if(nums.empty()) return 0;
        int maxlen  = 0;
        int n = nums.size();
        for ( int i = 0 ; i < n ; i ++)
        {  int current = nums[i];
            int length = 1 ;


while ( find(nums.begin(), nums.end(), current+1 ) != nums.end())
{
    current++;
    length++;
}
maxlen = max(maxlen , length);
        }
        return maxlen ;
    }
};
// the better solution 
class Solution {
public: //O(N)LOGN 
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int maxlen = 0;
        int length= 1;
        int n = nums.size();
        for ( int i = 1 ; i < n ; i ++)
        {
            if ( nums[i]==nums[i-1]){
                continue ;
            }
            else if ( nums[i]== nums[i-1] + 1)
            {
                length++;
            }
            else
            {
                maxlen = max(maxlen , length);
                length = 1 ;
            }
           
        }
         maxlen = max(maxlen , length);
         return maxlen ;
    }
};
