#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, z;
    cin >> n >> m >> z;

    int l = (n * m) / __gcd(n, m);
    cout << z / l;

    return 0;
}
