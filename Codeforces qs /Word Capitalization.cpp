/*

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.
  */

solution


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] >= 65 && s[0] <= 90) {
        cout << s;
        return 0;
    }

    s[0] = s[0] - 32;
    cout << s;
}
// even easier one
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
}
