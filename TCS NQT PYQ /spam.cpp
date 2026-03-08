#include <bits/stdc++.h>
using namespace std;

int main() {
string s ;
cin >> s ;
for ( int i = 0 ; i < s.length()-2 ; i ++)
{
    if ( s[i]==s[i+1] && s[i]==s[i+2])
    {
        cout << "spam" << endl;
        return 0;
    }
}
cout << "not a spam" << endl; //hey

}
