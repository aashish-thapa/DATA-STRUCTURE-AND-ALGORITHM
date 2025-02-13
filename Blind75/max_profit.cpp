class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int minProfit = INT_MAX;
        int maxProfit = 0;
        for(int price : prices){
            minProfit = min(minProfit, price);
            maxProfit = max(maxProfit, price - minProfit);
        }
        return maxProfit;
    }
};