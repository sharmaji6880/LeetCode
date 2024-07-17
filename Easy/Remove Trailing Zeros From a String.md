> **Problem Number:** 2710 <br>
> **Problem Name:** Remove Trailing Zeros From a String <br>
> **Problem Link:** [https://leetcode.com/problems/remove-trailing-zeros-from-a-string/](https://leetcode.com/problems/remove-trailing-zeros-from-a-string/) <br>

    class Solution {
    public:
        string removeTrailingZeros(string num) {
            int n = num.size();
            int index;
            for(int i=n-1;i>=0;i--) {
                if(num[i] != '0') {
                    index = i;
                    break;
                }
            }
            return num.substr(0,index+1);
        }
    };