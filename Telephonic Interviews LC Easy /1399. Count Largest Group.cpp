class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        
        for (int i = 1; i <= n; i++) {
            int x = i, s = 0;
            while (x) {
                s += x % 10;
                x /= 10;
            }
            mp[s]++;
        }
        
        int mx = 0;
        for (auto &p : mp) {
            mx = max(mx, p.second);
        }
        
        int cnt = 0;
        for (auto &p : mp) {
            if (p.second == mx) cnt++;
        }
        
        return cnt;
    }
};
