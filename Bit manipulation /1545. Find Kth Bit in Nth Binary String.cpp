class Solution {
public:
    char findKthBit(int n, int k) {
        // base case
        if (n == 1) return '0';

      int length =  ( 1 << n ) - 1 ;
      int mid = ceil(length / 2.0) ; // middle index

        if (k < mid) {
            return findKthBit(n - 1, k);
        } 
        else if (k == mid) {
            return '1';
        } 
        else {
            
            char ch = findKthBit(n - 1, length - k + 1);
            return (ch == '0') ? '1' : '0';
        }
    }
};
