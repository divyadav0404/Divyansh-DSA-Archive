class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = { 2 , 3 , 5 , 7 , 11 , 13 , 17 , 19};
        int res = 0 ;
        for ( int num = left ; num <= right ; num++)
        {
            int sb = __builtin_popcount(num);
             if (primes.count(sb)){
                res+= 1 ;
             }
        }
        return res ;
    }
};
