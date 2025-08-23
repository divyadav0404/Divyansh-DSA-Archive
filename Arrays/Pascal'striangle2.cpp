class Solution { // only return that particular row's pascal's triangle.
public:
    vector<int> getRow(int rowIndex) {
        vector <int> row;
        long long ans = 1;
       for ( int col = 0 ; col <= rowIndex ; col++) 
       {
        row.push_back(ans);
        ans = ans * ( rowIndex - col) / ( col+ 1); 
       }
       return row;
    }
};
