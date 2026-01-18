//just count freq of char that are coming and compare them and then you will find how to calculate
#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

  
    vector<int> cnt1(26, 0), cnt2(26, 0);


    for (char c : guest) {
        cnt1[c - 'A']++;
    }
    for (char c : host) {
        cnt1[c - 'A']++;
    }


    for (char c : pile) {
        cnt2[c - 'A']++;
    }

    // compare both
    if (cnt1 == cnt2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
