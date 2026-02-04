#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // maximum complete sets of compote
    int k = min({a, b / 2, c / 4});

    // total fruits used
    cout << k * 7;

    return 0;
}
