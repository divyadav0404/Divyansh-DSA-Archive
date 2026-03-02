class Solution {
public:
    int minCost(int n) {
        // dp combinatorial solution might come but simple ncr formula will work too here !!
        int ans = n * ( n - 1) / 2 ;
        return ans ;
    }
};
