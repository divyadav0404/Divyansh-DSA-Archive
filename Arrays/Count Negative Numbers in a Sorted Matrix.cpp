//brute force method , just count out the negatives ,
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0 ;
        
        for ( int i = 0 ; i < grid.size() ; i ++)
        {
            for (int j = 0 ; j < grid[i].size() ; j ++)
            {
                if (grid[i][j] < 0) count ++;
            }
        }
           return count;
    }
 
};

// optimal one , as we know the matrix is in decresing order row and col wise ,

will update later , have to use binary search here ..
