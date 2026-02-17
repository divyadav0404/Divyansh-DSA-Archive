#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool color = false;
    char x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            if (x == 'C' || x == 'M' || x == 'Y') {
                color = true;
            }
        }
    }

    if (color) cout << "#Color";
    else cout << "#Black&White";

    return 0;
}
