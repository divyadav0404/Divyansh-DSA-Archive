// linear tc code
class Solution {
public:
    int floorSqrt(int n) {
        int ans = 1;
        for (int i = 1; i  <= n; i++) {
            if(i*i<=n)
            {
              ans = i ;
        }
        return ans;
    }
};
 // log tc code 

class Solution {
public:
    int floorSqrt(int n) {
        int low = 1, high = n;
        int ans = 1;
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (mid * mid <= n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
