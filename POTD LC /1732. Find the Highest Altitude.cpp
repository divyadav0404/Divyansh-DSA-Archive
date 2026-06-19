class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a = 0 ;
        int mx = 0 ;
        for ( int x : gain)
        {
            a += x ;
            mx = max ( mx , a) ;
        }
        return mx ;
    }
};
