class Solution {
public:
    bool canBeEqual(string a, string b) {
        string e1 = "", e2 = "";
        string o1 = "", o2 = "";
        
        for(int i = 0; i < 4; i++) {
            if(i % 2 == 0) {
                e1 += a[i];
                e2 += b[i];
            } else {
                o1 += a[i];
                o2 += b[i];
            }
        }
        
        sort(e1.begin(), e1.end());
        sort(e2.begin(), e2.end());
        sort(o1.begin(), o1.end());
        sort(o2.begin(), o2.end());
        
        return (e1 == e2 && o1 == o2);
    }
};
