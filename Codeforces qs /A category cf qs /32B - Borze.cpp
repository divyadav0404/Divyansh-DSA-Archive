//understand how to represent 0,s 1,s and 2,s

#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin >> s;              
 
    for (int i = 0; i < s.length(); i++) {   // Loop through the string
        if (s[i] == '.') {                
            cout << 0;                      
        } 
        else {                             
            if (s[i + 1] == '.') {      
                cout << 1;                  // "-." means 1
            } else {
                cout << 2;                 
            }
            i++;                 
        }
    }
    return 0;
}
