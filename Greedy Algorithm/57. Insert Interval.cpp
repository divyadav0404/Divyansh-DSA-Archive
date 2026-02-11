class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size();
        int i = 0;

        // 1️⃣ add all non-overlapping intervals before
        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        // 2️⃣ merge overlapping intervals
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }

        // add merged interval
        res.push_back(newInterval);

        // 3️⃣ add remaining intervals
        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};
