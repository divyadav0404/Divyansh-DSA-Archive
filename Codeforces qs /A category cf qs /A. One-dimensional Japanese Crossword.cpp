#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> grp;
    int cnt = 0;

    for (char c : s) {
        if (c == 'B') cnt++;
        else {
            if (cnt > 0) grp.push_back(cnt);
            cnt = 0;
        }
    }

    if (cnt > 0) grp.push_back(cnt);

    cout << grp.size() << "\n";
    for (int x : grp) cout << x << " ";

    return 0;
}
