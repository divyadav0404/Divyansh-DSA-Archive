#include <bits/stdc++.h>

string doesDoorOpen(const string& moves) {
    int x = 0 , y = 0 ;
    set<pair < int, int>> st{{0,0}};

    for ( char c : moves)
    {
        if ( c == 'R') x++ ;
        else if ( c == 'L') x--;
        else if (c =='U') y++;
        else y--;

        if ( st.count({x,y})) return "NO";
        st.insert({x,y});
    }
    return "YES";
}
