> **Problem Number:** 122 <br>
> **Problem Name** Best Time to Buy and Sell Stock II <br>
> **Problem Link:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii) <br>

    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size(), nextGreater, index,profit = 0;
            for(int i=0;i<n;i++) {
                nextGreater = INT_MIN;
                for(int j=i+1;j<n;j++) {
                    if(prices[j] > nextGreater ) {
                        nextGreater = prices[j];
                        index = j;
                        break;
                    }
                }
                if(nextGreater == INT_MIN) continue;
                profit += prices[index]-prices[i];
            }
            return profit;
        }
    };