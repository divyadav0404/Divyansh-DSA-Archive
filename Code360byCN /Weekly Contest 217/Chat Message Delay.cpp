#include <bits/stdc++.h>
using namespace std;

int maxDelay(int n, vector<int>& timestamps) {
    sort(timestamps.begin(), timestamps.end());

    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, timestamps[i] - timestamps[i - 1]);
    }

    return ans;
}
