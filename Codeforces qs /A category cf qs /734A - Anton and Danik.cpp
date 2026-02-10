#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0, d = 0;

    // count wins
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a++;
        else d++;
    }

    // compare counts
    if (a > d) cout << "Anton";
    else if (d > a) cout << "Danik";
    else cout << "Friendship";

    return 0;
}
