class Solution {
public:
    int firstMatchingIndex(string s) {
        int sz = s.size();
        int mid = sz / 2 ;

        for ( int i = 0 ; i <= mid ; ++i)
            {
                if ( s[i] == s[sz - 1 - i])
                {
                    return i ;
                }
            }
        return -1 ;
            }
};
