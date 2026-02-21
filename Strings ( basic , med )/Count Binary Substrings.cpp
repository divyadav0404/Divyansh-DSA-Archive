class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0, prev = 0, strk = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) strk++;
            else {
                prev = strk;
                strk = 1;
            }
            if (strk <= prev) res++;
        }
        return res;
    }
};
 //Jab tak current group previous group se chhota ya equal hai → valid substring ban sakta hai.
