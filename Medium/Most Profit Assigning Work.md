> **Problem No.:** 826  
> **Problem Name:** Most Profit Assigning Work  
> **Problem Link:** [https://leetcode.com/problems/most-profit-assigning-work/description/](https://leetcode.com/problems/most-profit-assigning-work/description/)  


    class Solution {
        public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
            int n = difficulty.length, m = worker.length, result = 0, maxProfit;
    
            for(int i=0;i<m;i++) {
                maxProfit = 0;
                for(int j=0;j<n;j++) {
                    if(difficulty[j] > worker[i]) continue;
                    if(profit[j] > maxProfit) maxProfit = profit[j];
                }
                result += maxProfit;
            }
            return result;
        }
    }