> **Problem Number:** 2011 <br>
> **Problem Name:** Final Value of Variable After Performing Operations <br>
> **Problem Link:** [https://leetcode.com/problems/final-value-of-variable-after-performing-operations/](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/)

    class Solution {
    public:
        int finalValueAfterOperations(vector<string>& operations) {
            int x = 0;
            for( auto o:operations ) {
                if( o == "++X" || o =="X++") {
                    x += 1;
                    continue;
                }
                x -= 1;
            }
            return x;
        }
    };