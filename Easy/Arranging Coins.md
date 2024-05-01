> **Problem Number:** 441 <br>
> **Problem Name:** Arranging Coins <br>
> **Problem Link:** [https://leetcode.com/problems/arranging-coins/](https://leetcode.com/problems/arranging-coins/) <br>

    class Solution {
    public:
        int arrangeCoins(int n) {
            int ans = 0;
            int num = n;
            for(int i=1;i<=n;i++) {
                if(i<=num) {
                    ans++;
                    num-=i;
                }else {
                    break;
                }
            }
            return ans;
        }
    };