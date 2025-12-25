class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort ( happiness.begin() , happiness.end() , greater<int>());
        long long ans = 0 ;
        for ( int i = 0 ; i < k ; i ++) //greedy and sorting concept question , good one..
        {
            int curr = happiness[i] - i;
            if ( curr <= 0) break;
            ans = ans + curr ;
        }
        return ans ;
    }
};
