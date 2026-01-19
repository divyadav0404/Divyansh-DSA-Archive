#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n; //take gcd and subtract from take and also reverse the turn after each step.
    cin >> a >> b >> n;

    int turn = 0; // 0 = Simon, 1 = Antisimon

    while (true) {
        int take;
        if (turn == 0)
            take = __gcd(a, n);
        else
            take = __gcd(b, n);

        if (n < take) {
            if (turn == 0)
                cout << 1;
            else
                cout << 0;
            break;
        }

        n -= take;
        turn ^= 1;
    }

    return 0;
}
