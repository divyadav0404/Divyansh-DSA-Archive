//🔥 Lexicographic order > length
//🔥 Largest character decides everything
//🔥 Repeating the same character is always a palindrome
//🔥 No need to check cnt >= 2 separately

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (char c : s)
        cnt[c - 'a']++;

    // find largest character
    for (int i = 25; i >= 0; i--) {
        if (cnt[i] > 0) {
            for (int j = 0; j < cnt[i]; j++)
                cout << char('a' + i);
            return 0;
        }
    }
}
