class Solution {
public:
    string reverseWords(string s) {
       //story  we will reverse whole string
       reverse(s.begin(), s.end()); 
       int i = 0 , l = 0 , r= 0;
       int n = s.length();
       while ( i < n)
       {
        while ( i < n && s[i]!= ' ')
        {
            s[r] = s[i];
            r++;
            i++;
        }
        if ( l< r)
        {
            reverse(s.begin() + l , s.begin()+ r);
            s[r] = ' ';
            r++ ;
            l = r ;
        }
        i++;
       }
       s = s.substr(0, r-1);
       return s ;
    }
}; //hence using the 2/3 pointer approach we solved this problem , a good question!!
// stringstream ss(s) approach
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        
        // Extract words using stringstream
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Reverse the vector of words
        reverse(words.begin(), words.end());
        
        // Join them back into a single string
        string result;
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) result += " ";
            result += words[i];
        }
        return result;
    }
};
