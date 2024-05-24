> **Problem Number:** 693 <br>
> **Problem Name:** Binary Number with Alternating Bits <br>
> **Problem Link:** [https://leetcode.com/problems/binary-number-with-alternating-bits/](https://leetcode.com/problems/binary-number-with-alternating-bits/) <br>

    class Solution {
    public:
        bool hasAlternatingBits(int n) {
            string s = "";
            while(n) {
                if(n%2 == 0) {
                    s.push_back('0');
                }else {
                    s.push_back('1');
                }
                n/=2;
            }
            for(int i=0;i<s.size()-1;i++) {
                if(s[i]==s[i+1]) {
                    return false;
                }
            }
            return true;
        }
    };