class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int futureMax = prices[n-1];  // last element se shuru karte hain

        // i ko right se left le lo
        for (int i = n - 2; i >= 0; i--) {
            // calculate profit agar aaj buy karu aur futureMax pe sell karu
            maxProfit = max(maxProfit, futureMax - prices[i]);

            // update futureMax (best selling price in future)
            futureMax = max(futureMax, prices[i]);
        }
        return maxProfit;
    }
};
