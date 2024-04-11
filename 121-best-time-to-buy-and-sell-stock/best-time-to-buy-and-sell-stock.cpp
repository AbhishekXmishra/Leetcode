class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int highest = INT_MIN;
        int profit = 0 ;
        int ans;
        int idx = 0;
        int n = prices.size();
      for (int i = 0; i < n; i++) {
          if (prices[i] < lowest) {
              lowest = prices[i];
              idx = i;
          }
          profit = max(prices[i] - lowest , profit );
      }
    
    return profit ;
}
};
