class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort both arrays
        sort(g.begin(), g.end());   // O(n log n)
        sort(s.begin(), s.end());   // O(m log m)

        int i = 0, j = 0;
        int cnt = 0;

        // Two-pointer traversal
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                cnt++;   // Child satisfied
                i++;
                j++;
            } else {
                j++;     // Move to next bigger cookie
            }
        }
        return cnt;

        /*
            Time Complexity:
                O(n log n + m log m) 
                where n = g.size(), m = s.size()

            Space Complexity:
                O(1) (in-place sorting and a few variables)
        */
    }
};
