class Solution {
public:
    int maxDepth(string s) {
       int curr = 0 , ans = 0 ;
       for ( int i = 0 ; i < s.size() ; i ++)
       {
        if (s[i]== '(' )
        {
            curr++; if ( curr>ans) ans = curr ;
        }
       else if (s[i]==')')
       {
        curr--;
       }
       }
       return ans ;
    }
}; //just simple easy ay ( hai to add vrna ) hai to minus.
