//Problem Statement
There are N seats arranged in a row. Each seat can accommodate at most one person. Determine whether it is possible to seat M people in the seats satisfying the following condition.

No two adjacent seats may both be occupied.
Constraints
1≤N,M≤100
All input values are integers.

  //sol
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int maxLog = (n + 1) / 2;

    if (m <= maxLog) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
  
