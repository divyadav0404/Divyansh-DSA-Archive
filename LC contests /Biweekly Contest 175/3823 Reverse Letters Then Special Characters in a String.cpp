//good question , you just have to make a new space to storing char and then solve the question
class Solution {
public:
    string reverseByType(string s) {
        string letters= "", spec ="" ;
        for ( char c : s)
        {
            if( c >='a' && c <='z')
                letters.push_back(c);
            else
                spec.push_back(c);
        }
            reverse(letters.begin() , letters.end());
            reverse(spec.begin() , spec.end());

            //rebuilding krege
int i = 0 , j = 0 ;
            for ( int k = 0 ; k < s.size() ; k ++)
            {
              if ( s[k]>= 'a' && s[k]<='z')
                s[k] = letters[i++];
              else  
                s[k] = spec[j++];
            }
           
        return s;
    }
};
