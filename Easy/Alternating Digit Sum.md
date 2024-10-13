> **Problem Number:** 2544 <br>
> **Problem Name:** Alternating Digit Sum <br>
> **Problem Link:** [https://leetcode.com/problems/alternating-digit-sum/](https://leetcode.com/problems/alternating-digit-sum/) <br>

    class Solution {
    public:
        int alternateDigitSum(int n) {
            int ans = 0;
            string str = to_string(n);

            for(int i = 0; i < str.size(); ++i) {
                if(i % 2 == 0) {
                    ans += str[i] - '0';
                }else {
                    ans -= str[i] - '0';
                }
            }
            return ans;
        }
    };