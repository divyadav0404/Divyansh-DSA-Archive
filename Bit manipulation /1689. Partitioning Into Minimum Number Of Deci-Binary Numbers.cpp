class Solution {
public:
    int minPartitions(string n) {
        int mx = 0 ;
        for ( char c : n)
        {
            mx = max ( mx , c - '0');
            if ( mx == 9) return mx ; // use for even fast execution !!
        }
        return mx ;
    }
};
