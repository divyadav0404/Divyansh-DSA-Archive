class Solution { //good one ,,
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1 , r = *max_element(piles.begin(),piles.end());
        long long ans = r ;
        while (l<=r)
        {
            long long mid = l + (r-l)/ 2 ;
            long long hours = 0;
            for ( int i = 0 ; i < piles.size();i++)
            {
                hours = hours + (piles[i]+mid-1)/ mid ;
            }
            if ( hours<=h)
            {
             ans = mid ;
             r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans ;
    }
};
