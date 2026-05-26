class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> small(26, 0), cap(26, 0);

        for (char ch : word) {
            if (ch >= 'a' && ch <= 'z')
                small[ch - 'a'] = 1;
            else
                cap[ch - 'A'] = 1;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (small[i] && cap[i])
                ans++;
        }

        return ans;
    }
};
