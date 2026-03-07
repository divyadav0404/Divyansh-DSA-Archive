/*class Solution {
public: //we use asc value sum answer 
    char findTheDifference(string s, string t) {
        int sum_t = 0 ;
        int sum_s = 0 ;
        for ( char ch : s)
        {
            sum_s = sum_s + ch ;
        }
        for ( char ch : t)
        {
            sum_t = sum_t + ch ;
        }
        return char(sum_t - sum_s) ;
    }
}; */
//approach 2 
class Solution {
public: //we use asc value sum answer 
    char findTheDifference(string s, string t) {
       int xorr = 0 ;
       for ( char ch : s)
       {
        xorr = xorr ^ ch ;
       }
       for ( char ch : t)
       {
        xorr = xorr ^ ch ;
       }
       return char ( xorr) ;
    }
};
