> **Problem Number:** 3099 <br>
> **Problem Name:** Harshad Number <br>
> **Problem Link:** [https://leetcode.com/problems/harshad-number/](https://leetcode.com/problems/harshad-number/) <br>

    class Solution {
    public:
        int sumOfTheDigitsOfHarshadNumber(int x) {
            int num = x;
            int sum = 0;
            while(x) {
                sum+=x%10;
                x/=10;
            }
            if(num%sum == 0) {
                return sum;
            }
            return -1;
        }
    };