> **Problem Number:** 2485 <br>
> **Problem Name:** Find the Pivot Integer <br>
> **Link:** [https://leetcode.com/problems/find-the-pivot-integer/](https://leetcode.com/problems/find-the-pivot-integer/) <br>

**Using Prefix Sum** <br>

    class Solution {
    public:
        int pivotInteger(int n) {
            vector<int> pSum(n+1,0);
            for(int i=1;i<=n;i++) {
                pSum[i]=pSum[i-1]+i;
            }
            for(int i=1;i<=n;i++) {
                if(pSum[i] == pSum[n]-pSum[i-1]) {
                    return i;
                }
            }
            return -1;
        }
    };