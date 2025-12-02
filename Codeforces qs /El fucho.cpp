#include <bits/stdc++.h>
using namespace std; ///a very good question , the final winner must be 1 , o.w one can go into loop , so that's the main catch and formulae too..

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        /*
            EXPLANATION:

            In this modified double-elimination tournament:
            - Every team except the final winner must get eliminated.
            - To get eliminated, a team must lose EXACTLY one match
              in the losers' group.

            How does a team reach losers' group?
                → It must lose once in winners' group.

            So every eliminated team loses:
                • 1 match in winners' group (drops to L)
                • 1 match in losers' group (gets eliminated)
              Total = 2 losses → 2 matches

            There are (n - 1) eliminated teams.
            So total matches = 2 * (n - 1).

            HOWEVER:
            The final has ONLY ONE MATCH.
            This final match gives the last team's elimination.

            That means the total number of matches played is:

                2 * (n - 1)
                = 2n - 2

            This formula matches all samples:
                n = 2 → 2 matches
                n = 3 → 4 matches
        */

        cout << 2 * n - 2 << "\n";
    }

    return 0;
}
