> **Problem Number:** 2579 <br>
> **Problem Name:** Count Total Number of Colored Cells <br>
> **Problem Link:** [https://leetcode.com/problems/count-total-number-of-colored-cells](https://leetcode.com/problems/count-total-number-of-colored-cells) <br>

    class Solution {
    public:
        long long coloredCells(int n) {
            long long len,ans = 0;
            len = 1 + 2 * (n-1);
            ans += len;
            len -= 2;
            while(len > 0) {
                ans += 2*len;
                len-=2;
            }
            return ans;
                
        }
    };