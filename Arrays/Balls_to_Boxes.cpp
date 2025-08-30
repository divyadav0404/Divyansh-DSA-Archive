class Solution {
public: //sc O(n) and tc = O(N^2)
    vector<int> minOperations(string boxes) {
       int n = boxes.length();
       vector<int> ans ;
       for ( int i = 0 ; i < n ; i ++)
       {
        int count = 0 ;
        for ( int j = 0 ; j < n ; j ++)
        { if(boxes[j]=='1'){
            count +=  abs (i-j);}
        }
        ans.push_back(count);
       } 
       return ans ;
    }
};
