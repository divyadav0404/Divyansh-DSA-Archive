//main catch is we also have to find out the power of negative numbers
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n ;
        if ( N< 0)
        {
            x = 1/x ;
            N = -N ;
        }
        double ans = 1.0 ;
        while ( N > 0)
        {
            if ( N % 2 == 1)
                ans = ans * x ;
x = x* x ;
N=N/2;
    

        }
        return ans ;
    }
};
