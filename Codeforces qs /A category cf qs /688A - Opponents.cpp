#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int cur = 0, mx = 0;

    while (d--) {
        string s;
        cin >> s;

        bool jeet = false;

        for (char c : s) {
            if (c == '0') {
                jeet = true;
                break;
            }
        }

        if (jeet) {
            cur++;
            mx = max(mx, cur);
        } else {
            cur = 0;
        }
    }

    cout << mx;
    return 0;
}
