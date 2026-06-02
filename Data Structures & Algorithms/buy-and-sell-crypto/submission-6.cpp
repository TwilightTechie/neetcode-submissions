class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int res = 0;
        while(r < prices.size()) {
            //to find the profit 
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                res = max(res, profit);
            }
            else {
            //agar chaina vne 
            l = r;
            }
            r++;
        }
        return res;
    }
};
