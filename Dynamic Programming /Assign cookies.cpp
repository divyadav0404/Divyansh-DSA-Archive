class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int n = g.size();
        int m = s.size();
        int i = 0 ;
        int j = 0;

        while ( i < n && j < m)
        {
            if ( s[j]>=g[i])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return i ;
    }
}; //nlogn + mlogm +O(N) tc and O(1) sc as sorting is included. that's why
