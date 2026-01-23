//easy one just initialise int n = needed-10 ;
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int needed = n - 10;

    if (needed < 1 || needed > 11) {
        cout << 0;
    } 
    else if (needed == 1 || needed == 11) {
        cout << 4;
    } 
    else if (needed >= 2 && needed <= 9) {
        cout << 4 ;
    } 
    else if (needed == 10) {
        cout << 15 ;
    }

    return 0;
}
