//ques 1266 lc
//greedy and maths 2d geometry
//tc is O(n) and sc is O(1)
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0 ;
        for ( int i = 1 ; i < points.size() ; i++)
        {
            int dx = abs(points[i][0]-points[i-1][0]);
            int dy = abs(points[i][1]-points[i-1][1]);
            time = time + max(dx,dy);
        }
        return time ; //greedy and 2d
    }
};
