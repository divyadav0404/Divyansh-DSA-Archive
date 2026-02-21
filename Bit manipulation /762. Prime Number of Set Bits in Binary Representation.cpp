class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cnt = 0 ;
        for ( int i = left ; i <= right ; i ++)
        {
          int setbits = __builtin_popcount(i); //built in fnc used for finding out the set bits
          if ( isPrime(setbits))
          {
            cnt++ ;
          }
        }
        return cnt;
    }

    public :
    bool isPrime(int n)
    {
        if ( n <= 1) //to make fnc prime we use th
        {
            return false ;
        }
        for ( int i = 2 ; i* i <= n ; i++ )
        {
             if ( n % i == 0) return false ;
        }
        
        return true ;
    }
};
