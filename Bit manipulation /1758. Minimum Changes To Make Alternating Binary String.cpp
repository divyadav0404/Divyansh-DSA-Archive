class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int sw_zero = 0 ;
        int sw_one = 0 ;
        for ( int i = 0 ; i < n ; i ++)
        {
            if ( i % 2 == 0)
            {
                if ( s[i]=='0')
                {
                    sw_one ++ ;
                }
                else
                {
                    sw_zero ++;
                }
            }
                else
                {
                    if ( s[i]=='1')
                    {
                        sw_one ++;
                    }
                    else
                    {
                        sw_zero ++;
                    }
                }
            }
        return min ( sw_one , sw_zero ) ;
    }
};
// even more optimal approach
class Solution {
public:
    int minOperations(string s) {
         //a better appraoch than before , based on keen observation !!
         int n = s.length ();
         int swz = 0;
         int sw1 = 0;
         for ( int i = 0 ; i < n ; i ++)
         {
            if ( i % 2 == 0)
            {
                if ( s[i] == '1')
                {
                    swz  ++;
                }
            }
                else
                {
                    if ( s[i]=='0')
                    {
                        swz ++;
                    }

                }
            
         }
         return min ( swz , n - swz );
    } 
};
