#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    int mx = *max_element(freq.begin(), freq.end());

    string ans = "";

    for (char ch : s) {
        if (freq[ch - 'a'] != mx) {
            ans += ch;
        }
    }

    cout << ans;
    return 0;
}
