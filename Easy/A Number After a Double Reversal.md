> **Problem Number:** 2119 <br>
> **Problem Name:** A Number After a Double Reversal <br>
> **Problem Link:** [https://leetcode.com/problems/a-number-after-a-double-reversal](https://leetcode.com/problems/a-number-after-a-double-reversal) <br>

    class Solution {
    public:
        bool isSameAfterReversals(int num) {
            if( num == 0 ) {
                return true;
            }
            if( num % 10 == 0 ) {
                return false;
            }
            return true;
        }
    };