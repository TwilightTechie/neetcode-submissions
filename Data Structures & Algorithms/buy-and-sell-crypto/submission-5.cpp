class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l = 0, r = 1;
        int res = 0;
        //to end the loop 
        while(r < prices.size()) {
            //agar left siyano cha vne, mane profit so hamle compute garcham
            if (prices[l] < prices[r]) {
                //each profit calculate huncha
                int profit = prices[r] - prices[l];
                //ani yaha max store garcham
                res = max(res, profit);
            }
            else {
                //agar suppose l = 10 cha r r = 2 cha, mane yo profitable situation haina so
                //hamle direct l lai move gardincham r ko jagah ma ani esai pani 
                // right ek agari barcha because of line 22. ani yo statement le ending garna pani
                //help garcha....last element ma...
                l = r;
            }
            //right lai barai rakni
            r++;
        }
        return res;
    }
};
