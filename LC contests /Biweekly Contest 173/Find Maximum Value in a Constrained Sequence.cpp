//classic constraints-propagation / envelope problem.

class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        vector<int> lim(n,INT_MAX);
        lim[0] = 0 ;
        int i , j ;
        for ( i = 0 ; i < (int)restrictions.size(); i ++)
            {
                j= restrictions[i][0];
                if ( lim[j] > restrictions[i][1])
                {
                    lim[j] = restrictions[i][1];
                }
            }
        for ( i = 1 ; i < n ; i ++)
            {
                if ( lim[i] > lim[i-1] + diff[i-1])
                {
                    lim[i] = lim[i-1] + diff[i-1];
                }
            }
        for ( i = n -2 ; i >=0 ; i --)
            {
                if ( lim[i] > lim[i+1] + diff[i])
                {
                    lim[i] = lim[i+1] + diff[i];
                }
            }
        int sol = 0 ;
        for ( i= 0 ; i < n ; i ++)
            {
                if ( sol < lim[i])
                {
                    sol = lim[i];
                }
            }
        return sol ;
    }
};
