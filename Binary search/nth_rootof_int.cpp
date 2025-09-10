#include <iostream>
using namespace std;

// Function to check if mid^n <= m
long long power(long long mid, int n, long long m) {
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= mid;
        if (ans > m) return m + 1; // prevent overflow
    }
    return ans;
}

int nthRoot(int n, long long m) {
    long long low = 1, high = m;
    int ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long val = power(mid, n, m);

        if (val == m) {
            return (int)mid;  // exact root
        } else if (val < m) {
            ans = (int)mid;   // possible floor value
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;  // floor of nth root
}

int main() {
    int n;
    long long m;

    cout << "Enter n and m: ";
    cin >> n >> m;

    int result = nthRoot(n, m);
    cout << n << "th root of " << m << " = " << result << endl;

    return 0;
}
