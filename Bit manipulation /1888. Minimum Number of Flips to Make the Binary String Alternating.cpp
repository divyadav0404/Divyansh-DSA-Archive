class Solution {
public:
    int minFlips(string s) {

        int n = s.length();
        s = s + s;

        string s1 = "";
        string s2 = "";

        for(int i = 0; i < 2*n; i++)
        {
            s1 += (i % 2 ? '0' : '1');
            s2 += (i % 2 ? '1' : '0');
        }

        int res = INT_MAX;
        int f1 = 0, f2 = 0;
        int i = 0;

        for(int j = 0; j < 2*n; j++)
        {
            if(s[j] != s1[j]) f1++;
            if(s[j] != s2[j]) f2++;

            if(j - i + 1 > n)
            {
                if(s[i] != s1[i]) f1--;
                if(s[i] != s2[i]) f2--;
                i++;
            }

            if(j - i + 1 == n)
            {
                res = min(res, min(f1, f2));
            }
        }

        return res;
    }
};
