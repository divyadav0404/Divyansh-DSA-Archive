class Solution {
public:
    int maxDifference(string s) {
        int n = s.length();
        vector<int> freq(26,0);

        for ( char ch : s)
        {
            freq[ch-'a'] ++ ;
        }

        int maxodd = 0 ;
        int mineven = n+ 1 ;

        for ( int i = 0 ; i < 26 ; i++)
        {
            if ( freq[i]==0) continue ;
            else if ( freq[i] % 2 == 0)
            {
                mineven = min ( freq[i], mineven) ;
            }
            else
            {
                maxodd = max ( freq[i], maxodd) ; 
            }
        }
        return maxodd - mineven ;
    }
};
