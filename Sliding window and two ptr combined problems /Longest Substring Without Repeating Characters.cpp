class Solution { //O(n) tc and sc is o(256)
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastindex(256,-1);
        int left = 0 , maxlen = 0 ;
        for (int right = 0 ; right< s.length() ; right++)
        {
            if(lastindex[s[right]] != -1)
            {
                left = max ( left , lastindex[s[right]] + 1 );
            }
            lastindex[s[right]] = right ;
            maxlen = max (maxlen , right - left + 1);
        }
        return maxlen ;
    }
};
