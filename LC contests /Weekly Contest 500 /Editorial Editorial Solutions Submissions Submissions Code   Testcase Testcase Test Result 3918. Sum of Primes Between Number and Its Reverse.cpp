//find a good question !!
we have to find out a prime number between the number and its reverse 
class Solution {
public:

bool isprime(int x)
{
    if ( x < 2) return false ;
    for ( int i = 2 ; i * i <= x ; i++)
    {
        if ( x % i == 0) return false ;

    }
    return true ;
}


    int sumOfPrimesInRange(int n) {
        int temp = n ;
        int rev = 0 ;
        while ( temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp = temp / 10 ;
            
        }
        int l = min( n , rev);
        int h = max( n , rev);
        int sum = 0 ;
        for ( int i = l ; i <=h  ; i ++)
        {
            if(isprime(i)) sum += i;
        }
        return sum ;
    }
};
