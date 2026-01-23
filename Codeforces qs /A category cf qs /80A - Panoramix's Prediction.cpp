#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            if (i == m) cout << "YES\n";
            else cout << "NO\n";
            break;
        }
    }
    return 0;
}
