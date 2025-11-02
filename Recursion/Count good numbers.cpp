class Solution {
public:
const long long mod = 1000000007 ;
long long modpow(long long base , long long exp)
{
    long long result = 1 ;
    while ( exp > 0){
    if (exp % 2 == 1)
    
        result = (result * base )% mod ;
    base = (base * base) % mod ;
    exp /=2 ;
    }
    return result ;
}
    int countGoodNumbers(long long n) {
       long long e = (n+1) / 2 ;
       long long o = n / 2 ;
       long long ep = modpow(5 , e);
       long long op = modpow(4 , o);
       return ( ep * op) % mod ;
    }
}; // tc O(logn ) and sc is o(1)
