class Solution { //tc is O(n^2) and sc is O(n) easy queue implementatio solution of this , can be understood easily , the most basic brute force approach is being implemented here
public:
    bool rotateString(string s, string goal) {
        queue<char> q1 , q2 ;
        for ( int i = 0 ; i < s.size() ; i ++)
            q1.push(s[i]);
        
            for ( int i = 0 ; i < goal.size() ; i ++)
            q2.push(goal[i]);
            
        int k = goal.size() ;
        while ( k != 0)
        {
            char ch = q2.front();
            q2.pop();
            q2.push(ch);
            k--;
             if ( q1==q2)
             {
                return true;
             }
        }
        return false ;
    }
}; //TAKE K = GOAL.SIZE() AND NOT GOAL.SIZE()-1 AS IT WILL FAIL ON THAT CASE WHERE THE S AND THE GOAL STRING ARE EQUAL.
