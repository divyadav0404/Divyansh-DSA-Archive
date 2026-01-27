#include <iostream>
using namespace std;
 
int main() {
    int n;
    long long d;
    cin >> n >> d;              // number of soldiers and max allowed difference
 
    long long a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];            // heights of soldiers
    }
 
    long long count = 0;
 
    // Compare every pair (i, j)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            if (i == j) continue;   // same soldier, skip
 
            if (abs(a[i] - a[j]) <= d) {
                count++;            // valid ordered pair
            }
        }
    }
 
    cout << count;
    return 0;
}
