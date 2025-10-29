class Solution { //here we are using the O(1) approach.. space complexity//counter apparoach O(n) AND O(n)
public:
    string removeOuterParentheses(string s) {
        int depth = 0 ;
        string result = "";
        for ( int i = 0 ; i <s.length(); i++)
        {
            char c= s[i];
            if ( c == '(')
            {
                if ( depth>0)
                result += c;
                depth++;
            }
            else
            {
                depth--;
                if(depth>0)
                result += c;
            }

        }
        return result ;
    }
}; //tc and sc gets increased on direct increment using result+=c rather than using result = result +c ;
//stack based approach with an extra sc of O(n)
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(') {
                if (!st.empty())  // not the outermost '('
                    result += c;
                st.push(c);
            } 
            else { // c == ')'
                st.pop();
                if (!st.empty())  // not the outermost ')'
                    result += c;
            }
        }
        return result;
    }
};
