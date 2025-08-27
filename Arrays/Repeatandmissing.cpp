//the most brute force approach 
class Solution {
public: //the most basic brute force approach that clicked my mind is this
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n ;
        vector<int>freq(total+1,0);

        for ( int i = 0 ; i < n ; i ++)    {
            for ( int j = 0 ; j < n ; j++)
            {
                freq[grid[i][j]] ++ ;
            }
        }
        int a = -1, b = -1 ;
        for( int i = 1 ; i <= total ; i ++)
        {
            if ( freq[i]==2) a=i;
            else if (freq[i]==0)  b=i ;
        }
        return{a,b};
    }
};
