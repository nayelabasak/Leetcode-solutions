class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int lowest_price_so_far = INT_MAX;
        
for (int i = 0; i <= n; i++) {
    // Step 1: check if selling today gives a better profit than what we've seen
    int today_profit = prices[i] - lowest_price_so_far;
    max_profit = max(max_profit, today_profit);

    // Step 2: update lowest price so far, AFTER checking today's profit
    lowest_price_so_far = min(lowest_price_so_far, prices[i]);
}
      return max_profit;  
    }
};
