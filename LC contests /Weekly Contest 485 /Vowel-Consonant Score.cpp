class Solution {
public:
    int vowelConsonantScore(string s) {
        int vow = 0 ;
        int cons = 0 ;
        for ( char ch : s)
        {
            if ( ch < 'a' || ch > 'z') continue ;
            if ( ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch == 'u') vow ++;
            else
            {
                cons ++;
            }
        }
        if ( cons == 0) return 0;
        return vow / cons ;
    }
};//O(n) and O(1) just basic understanding of the question , cons and vow ..
