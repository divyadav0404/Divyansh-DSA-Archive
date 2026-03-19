class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = word.find(ch);
        int j = 0 ;

        while ( j < i)
        {
            swap(word[i],word[j]);
            j++;
            i--;
        }
        return word ;
    }
};
