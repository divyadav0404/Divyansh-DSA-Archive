class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector<int>> res = {{ }};
        for ( int i = 0 ; i < nums.size() ; i ++)
        {
int num = nums[i];
int size = res.size();
for ( int j = 0 ; j < size ; j ++)
{
    vector <int> newsubset = res[j]; //copying existing subset
    newsubset.push_back(num); // add current number
    res.push_back(newsubset) ; //included to the result

}
        }  
        return res ; //return the result array  
        }
        
};
//Tc O(n*2^n) SC O(n*2^n)
