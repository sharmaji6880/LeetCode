> **Problem Number:** 3370 <br>
> **Problem Name:** Smallest Number With All Set Bits <br>
> **Problem Link:** [https://leetcode.com/problems/smallest-number-with-all-set-bits](https://leetcode.com/problems/smallest-number-with-all-set-bits) <br>

    class Solution {
    public:
        int smallestNumber(int n) {
            int val;
            for(int i=0;i<INT_MAX;i++) {
                val = pow(2,i);
                if( val > n ) {
                    return val - 1;
                }
            }
            return -1;
        }
    };