class Solution {
public:
    string largestEven(string s) {
        int p = - 1;
        for ( int i = 0 ; i < s.size() ; i ++)
        {
            if (s[i]=='2') p = i ;
        }
        if ( p < 0) return "";
        return s.substr(0 , p+1);
    }
}; // use math property and greedy thinking , 
//tc and sc is O(n) and O(1) respec.
