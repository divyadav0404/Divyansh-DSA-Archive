//brute force approach might give tc issuess..
// Longest Repeating Character Replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        for ( int i = 0 ; i < n ; i ++)
        {
            vector<int> freq(26,0);
            int mf = 0 ;

            for ( int j = i ; j < n ;j ++)
            {
freq[s[j]-'A'] ++;
mf = max ( mf , freq[s[j]-'A']);

int len = j - i + 1;
int changes = len - mf ;
if ( changes <= k)
{
    ans = max ( ans , len);
}
else
{
    break; //pruning imp here
}
            }
        }
        return ans ;
    }
};
