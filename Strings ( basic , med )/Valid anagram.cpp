class Solution { //quite easy to understand approach , asc11 logic is used,...
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
        return false ;
       int count[26] = {0};

        for ( int i = 0 ; i < s.size() ; i ++)
        {
            char c = s[i];
            count[c-'a']++;
        }
        for ( int i = 0 ; i < t.size() ;i++)
        {
            char c = t[i];
            count[c-'a']--;
        }
        for ( int i = 0 ; i < 26 ; i ++)
        {
            if (count[i]!=0) {
                return false ;
            }
        }
        return true ;
    }
}; ///using asc11 values logic
