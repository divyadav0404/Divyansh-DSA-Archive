// O(n) solution 
class Solution {
public:
    int NthRoot(int N, int M) {
        for (int i = 1; i <= M; i++) {   // i is candidate root
            long long val = 1;
            for (int j = 1; j <= N; j++) {   // compute i^N
                val *= i;
                if (val > M) break;          // stop early if too big
            }
            if (val == M) return i;
            if (val > M) break;              // no need to continue further
        }
        return -1;
    }
};


//bs solution

class Solution {
public:
    // Helper to compute a^n safely (and stop early if it exceeds m)
    long long power(long long a, int n, int m) {
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans *= a;
            if (ans > m) return m + 1; // stop early if overflow
        }
        return ans;
    }

    int NthRoot(int N, int M) {
        int low = 1, high = M;
        while (low <= high) {
            int mid = (low + high) / 2;
            long long val = power(mid, N, M);

            if (val == M) return mid;
            else if (val < M) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
