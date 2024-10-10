//    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<prices.size(); i++){

            int curr = prices[i];

            mini = min(mini, curr);

            int profit = curr - mini;

            maxi = max(maxi, profit);

        }

        return maxi;
    }
};
