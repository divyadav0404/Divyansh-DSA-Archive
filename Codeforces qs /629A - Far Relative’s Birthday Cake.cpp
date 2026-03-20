#include <bits/stdc++.h>
using namespace std;
//just use formula and add it to answer for every row and column
int main() {
    int n;
    cin >> n;
 
    vector<string> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
 
    int ans = 0;
 
    // rows
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 'C') c++;
        }
        ans += (c * (c - 1)) / 2;
    }
 
    // columns
    for (int j = 0; j < n; j++) {
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (g[i][j] == 'C') c++;
        }
        ans += (c * (c - 1)) / 2;
    }
 
    cout << ans;
}
