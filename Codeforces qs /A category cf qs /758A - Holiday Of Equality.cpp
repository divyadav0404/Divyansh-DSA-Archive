#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;
    long long m = *max_element(a.begin(), a.end());
    long long s = 0;
    for(auto x : a) s += m - x;
    cout << s;
}
