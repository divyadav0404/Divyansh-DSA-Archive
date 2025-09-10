class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        function<void(int,int)> dfs = [&](int i, int t) {
            if (t == 0) return ans.push_back(cur);
            if (i == c.size() || t < 0) return;
            cur.push_back(c[i]);
            dfs(i, t - c[i]);          // pick
            cur.pop_back();
            dfs(i + 1, t);             // skip
        };
        dfs(0, target);
        return ans;
    }
};
//TC will be in worst case exponential and around 2^t *k and sc will be variable..
//depend upon no of recursive call but around k * x.
