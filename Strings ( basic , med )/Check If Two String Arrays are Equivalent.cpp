// easy sol

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";

       
        for (int i = 0; i < word1.size(); i++) {
            s1 = s1 + word1[i];
        }

       
        for (int i = 0; i < word2.size(); i++) {
            s2 = s2 + word2[i];
        }

        if (s1 == s2)
            return true;
        else
            return false;
    }
}; //concat and add
// another easy code used stl here , one more sol is we can use stringstream or append fnc..
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1 = accumulate(word1.begin(), word1.end() , string(""));
       string s2 =  accumulate(word2.begin(), word2.end(), string(""));
        if ( s1==s2)
        return true ;
        else
        return false ;
    }
};
