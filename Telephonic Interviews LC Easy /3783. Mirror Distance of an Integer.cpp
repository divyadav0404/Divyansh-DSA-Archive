class Solution {
public:
    int reverseNum(int n) {
        int r = 0;
        while (n) {
            r = r * 10 + (n % 10);
            n /= 10;
        }
        return r;
    }

    int mirrorDistance(int n) {
        return abs(n - reverseNum(n));
    }
};
