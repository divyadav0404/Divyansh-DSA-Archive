#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y, w;
    cin >> y >> w;
 
    int m = max(y, w);
    int jeet = 6 - m + 1;
 
    int g = __gcd(jeet, 6);
    cout << jeet / g << "/" << 6 / g;
 
    return 0;
}
