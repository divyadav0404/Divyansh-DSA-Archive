//solved using the logic of xor ,
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int r[3], c[3], k = 0;
    for (int i = 1; i <= n; i++) {
        string s; 
        cin >> s;
        for (int j = 1; j <= m; j++) {
            if (s[j-1] == '*') {
                r[k] = i;
                c[k] = j;
                k++;
            }
        }
    }

    int row = r[0] ^ r[1] ^ r[2];
    int col = c[0] ^ c[1] ^ c[2];

    cout << row << " " << col;
}
