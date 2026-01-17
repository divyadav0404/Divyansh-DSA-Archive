#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO\n";
            return 0;
        }

        int digit = s[i] - '0';

        if (i < n / 2)
            leftSum += digit;
        else
            rightSum += digit;
    }

    if (leftSum == rightSum)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
