#include <bits/stdc++.h>
using namespace std;

int main() {
   

    string a, b;
    cin >> a >> b;

    int n = a.size();  

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i])
            cout << '0';
        else
            cout << '1';
    }
    cout << '\n';

    return 0;
}
