> **Problem Number:** 357 <br>
> **Problem Name:** Count Numbers with Unique Digits <br>
> **Problem Link:** [https://leetcode.com/problems/count-numbers-with-unique-digits](https://leetcode.com/problems/count-numbers-with-unique-digits) <br>

    class Solution {
    public:
        int uniqueCombinations(int numberofDigits) {

            if(numberofDigits == 1) {
                return 10;
            }
            int remainingDigits = 9;
            int ans = 1;
            for(int i=1;i<=numberofDigits;i++) {
                ans *= remainingDigits;
                if(i != 1) {
                    remainingDigits -= 1;
                }
            }
            return ans;
        }

        int countNumbersWithUniqueDigits(int n) {
            if(n == 0) {
                return 1;
            }
            int ans = 0;
            while(n) {
                ans += uniqueCombinations(n);
                n -= 1;
            }
            return ans;
        }
    };