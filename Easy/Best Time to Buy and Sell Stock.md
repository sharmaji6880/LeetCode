> **Problem Number:** 121 <br>
> **Problem Name:** Best Time to Buy and Sell Stock <br>
> **Link:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) <br>

    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int Max = INT_MIN;
            int n = prices.size();
            
            map<int,int> m;
            for(int i=0;i<n;i++) {
                if(i==0) {
                    m[prices[i]]++;
                    continue;
                }
                if(prices[i] > m.begin()->first) {
                    if(prices[i]-m.begin()->first > Max) {
                        Max = prices[i]-m.begin()->first;
                    }
                }
                m[prices[i]]++;
            }
            return max(0,Max);
        }
    };