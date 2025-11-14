class Solution { //this is brute force approach which is quite easy , just have to update k as we traverse through the array
public:
    int findKthPositive(vector<int>& arr, int k) {
        for ( int i = 0 ; i < arr.size() ; i ++)
        {
            if ( arr[i]<=k)
            {
                k++;
            }
        }
        return k ;
    }
};
