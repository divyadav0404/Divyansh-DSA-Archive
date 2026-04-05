class Solution {
public:
    int mirrorFrequency(string s) {
     vector<int> f(128, 0);
        
        // Count frequency
        for (char c : s) f[c]++;
        
        int ans = 0;

        // Letters
        for (char c = 'a'; c <= 'z'; c++) {
            char m = 'z' - (c - 'a');
            if (c <= m) {
                ans += abs(f[c] - f[m]);
            }
        }

        // Digits
        for (char c = '0'; c <= '9'; c++) {
            char m = '9' - (c - '0');
            if (c <= m) {
                ans += abs(f[c] - f[m]);
            }
        }

        return ans;
    }
};
