#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mw = 0, cw = 0;

    while (n--) {
        int m, c;
        cin >> m >> c;

        if (m > c) mw++;
        else if (c > m) cw++;
    }

    if (mw > cw) cout << "Mishka";
    else if (cw > mw) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}
