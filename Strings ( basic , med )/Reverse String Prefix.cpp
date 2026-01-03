//Reverse the first k characters of s and return the resulting string.
//my sol of this ques.. is

class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin() , s.begin()+ k);
        return s ;
    }
};

//used stl in this code..
