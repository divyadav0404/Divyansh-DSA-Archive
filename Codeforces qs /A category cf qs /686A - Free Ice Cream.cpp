#include <iostream>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long ice = x;      // current ice creams
    long long sad = 0;      // distressed kids

    for (int i = 0; i < n; i++) {
        char ch;
        long long d;
        cin >> ch >> d;

        if (ch == '+') {
            ice = ice + d;          // add packs
        } 
        else { // ch == '-'
            if (ice >= d) {
                ice = ice - d;      // give packs
            } else {
                sad++;               // kid sad ho gaya
            }
        }
    }

    cout << ice << " " << sad;
    return 0;
}
