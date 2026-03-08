#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int mx = 0;
    int mn = 9;

    while (n > 0) {
        int digit = n % 10;
        mx = max(mx, digit);
        mn = min(mn, digit);
        n /= 10;
    }

    cout << "Max digit: " << mx << endl;
    cout << "Min digit: " << mn << endl;

    return 0;
}
