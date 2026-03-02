class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans ; 
        ans.reserve(n); //only for performance optimization !!
        for ( int i = 1 ; i<= n ; i++)
        {
            if ( i % 15 == 0){
            ans.push_back("FizzBuzz");
            }
            else if ( i % 5 == 0)
            {
                ans.push_back("Buzz");
            }
            else if (i % 3 == 0)
            {
                ans.push_back("Fizz");
            }
            else
            {
                ans.push_back(to_string(i));
            }

        }
        return ans ;
    }
}; //Time Complexity: O(n)
//Auxiliary Space: O(1)
// Output Space: O(n)
