#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int t = 240 - k;
    int sum = 0, cnt = 0;

    for (int i = 1; i <= n; i++) {
        sum += 5 * i;
        if (sum > t) break;
        cnt++;
    }

    cout << cnt;
    return 0;
}
