#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout << 4 - s.size() << endl;
    return 0;
}
//set is used as it remove duplicates and size will be 1 if all are same and likewise you can understand.
