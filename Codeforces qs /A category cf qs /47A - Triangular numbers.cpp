//direct formula based , triangular numbers..
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= 500; k++) {
        int tri = k * (k + 1) / 2;
        if (tri == n) {
            cout << "YES";
            return 0;
        }
        if (tri > n) break;
    }

    cout << "NO";
    return 0;
}
