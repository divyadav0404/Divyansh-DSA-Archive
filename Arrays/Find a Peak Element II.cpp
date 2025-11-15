class Solution { //easy m way , just find out the max element and return that
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size() ;
        int n = mat[0].size();
        int maxval = -1 , r = 0 , l = 0 ;

        for ( int i = 0 ; i<m ;i++)
        {
            for (  int j = 0 ; j < n ;j++)
            {
                if ( mat[i][j] > maxval )
                {
                    maxval = mat[i][j];
                    r = i;
                    l = j ;
                }
            }
        } 
        return {r,l};
    }
};
