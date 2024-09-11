> **Problem Number:** 2220 <br>
> **Problem Name:** Minimum Bit Flips to Convert Number <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-bit-flips-to-convert-number/](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/) <br>

    class Solution {
    public:

        string toBinary(int n) {
            string s = "";
            while(n) {
                if(n % 2) {
                    s+="1";
                }else {
                    s+="0";
                }
                n/=2;
            }
            int size = s.size();
            for(int i=0;i<size/2;i++) {
                char temp = s[i];
                s[i] = s[size-1-i];
                s[size-1-i] = temp;
            }
            return s;
        }

        int minBitFlips(int start, int goal) {
            string s1,s2;
            s1 = toBinary(start);
            s2 = toBinary(goal);
            int diff;
            if( s1.size() > s2.size() ) {
                diff = s1.size() - s2.size();
                for(int i=0; i<diff; i++) {
                    s2.insert(0,"0");
                }
            }else {
                diff = s2.size() - s1.size();
                for(int i=0; i<diff; i++) {
                    s1.insert(0,"0");
                }
            }
            int count = 0;
            for(int i=0; i<s1.size(); i++) {
                if( s1[i] != s2[i] ) {
                    count += 1;
                }
            }
            
            return count;
        }
    };