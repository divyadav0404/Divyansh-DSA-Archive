#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = "";
    int i = 1;

    while (s.length() < n) {
        s = s + to_string(i);
        i++;
    }

    cout << s[n - 1];

    return 0;
}
