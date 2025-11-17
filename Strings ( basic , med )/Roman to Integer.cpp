class Solution {
public: // we used an unordered map here!!
    int romanToInt(string s) {
         unordered_map<char,int>mp ;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int n = s.size();
        int ans = 0;

        for ( int i = 0 ; i <= n; i ++)  {
            int curr = mp[s[i]];
            int next = 0;

            if (i+1<n)
            {
                next = mp[s[i+1]];
            }
            if (curr<next)
            {
                ans = ans - curr ;
            }
            else
            {
                ans = ans + curr ;
            }
        }
        return ans ;
    }
};
