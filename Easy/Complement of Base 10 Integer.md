> **Problem Number:** 1009 <br>
> **Problem Name:** Complement of Base 10 Integer <br>
> **Problem Link:** [https://leetcode.com/problems/complement-of-base-10-integer/](https://leetcode.com/problems/complement-of-base-10-integer/) <br>

    class Solution {
    public:
        int bitwiseComplement(int n) {
            if(n == 0) {
                return 1;
            }
            string s = "";
            while(n) {
                if(n%2) {
                    s+='1';
                }else {
                    s+='0';
                }
                n/=2;
            }
            for(int i=0;i<s.size();i++) {
                if(s[i] == '1') {
                    s[i] = '0';
                }else {
                    s[i] = '1';
                }
            }
            int size = s.size();
            for(int i=0;i<size/2;i++) {
                char temp = s[i];
                s[i] = s[size-1-i];
                s[size-1-i] = temp;
            }
            int ans = 0;
            for(int i=0;i<size;i++) {
                if(s[i] == '1') {
                    ans += pow(2,size-1-i);
                }
            }
            return ans;
        }
    };