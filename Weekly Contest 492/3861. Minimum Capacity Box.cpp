class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int mincap = 1e7;
        int idx = -1 ;
        for ( int i = 0 ; i <= n - 1 ; i ++)
        {
            if ( capacity[i]>= itemSize && capacity[i]<mincap)
            {
                mincap = capacity[i];
                idx = i ;
            }
        }
        return idx ;
    }
};
