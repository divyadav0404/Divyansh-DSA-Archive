class Solution { //good question , loved the binary search approach.
public:

int findday( vector<int> &weights , int cap){
int days = 1, load = 0 ;
 for ( int i = 0 ; i < weights.size();i++){
    if ( load + weights[i]> cap)
    {
        days = days + 1 ;
        load = weights[i];
    }
    else
    {
        load += weights[i];
    }
}
return days ;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); //useful
        int high = accumulate(weights.begin(), weights.end(),0); //useful
        int ans = -1 ;
        while ( low<=high)
        {
            int mid = (high+ low)/2 ;
            int nod = findday(weights,mid);
            if(nod<=days)
            {
                ans = mid ;
                high = mid -1 ;
            }
            else
            {
                low = mid+ 1;
            }
        }
        return ans ;
    }
};
