class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length();
        int res = 0 ;
        for ( int i = 0 ; i < n ; i ++)
        {
            if( word[i]==word[i+1])
            {
                res++;
            }
        }
        return res + 1;
    }
};
