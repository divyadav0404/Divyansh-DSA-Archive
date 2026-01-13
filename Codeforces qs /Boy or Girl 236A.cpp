#include <iostream> //bhai ka heartbreak ho gya , even means a girl o.w a boy ,, easy one
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st;

    for (char c : s) {
        st.insert(c);
    }

    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
