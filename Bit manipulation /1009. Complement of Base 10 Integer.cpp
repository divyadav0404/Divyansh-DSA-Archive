 class Solution {
public:
    int bitwiseComplement(int n) { /*
        if ( n == 0) return 1 ;
        int bits = floor(log2(n)) + 1 ;
        int mask = pow ( 2 , bits) - 1 ;
        return mask ^ n ;
        */
        if ( n == 0 ) return 1 ;
        int cnt = 0 ;
        int result = 0 ;
        while ( n)
        {
            int r = n % 2 ;
    result =  result + pow( 2 , cnt) * !r ;
            n = n / 2 ;
            cnt ++ ;
        }
        return result ;
    }
};
// I have one more solution here , like 
//two sol one is of normal divide by 2 and return in reverse order second one is of using the xor operator !!!
