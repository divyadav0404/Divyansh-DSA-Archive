class Solution { //ncr approach where we will have fixed number of downs and right that it can go.
public: //Here we are using the most optimal way to solve this question using ncr approach.
    int uniquePaths(int m, int n) {
        int N = m + n - 2 ;
        int R = min(m-1,n-1);
        long long ans = 1 ;
        for ( int i = 1 ; i <=R ; i ++)
        {
            ans = ans * (N-R+i)/i;
            
        }
        return (int)ans ;
    }
};
