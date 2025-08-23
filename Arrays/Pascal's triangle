class Solution {
public:    
// Generate full pascal's triangle.
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result ;
        for ( int rowIndex = 0 ; rowIndex < numRows ; rowIndex++)
        {
            vector <int> row ;
            long long ans = 1 ;

            for ( int col = 0 ; col <= rowIndex ; col++)
            {row.push_back(ans);
                ans = ans * ( rowIndex - col ) / ( col + 1);
            }
            result.push_back(row);
        }
        return result ;
    }
};
