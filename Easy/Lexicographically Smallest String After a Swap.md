> **Problem Number:** 3216 <br>
> **Problem Name:** Lexicographically Smallest String After a Swap <br>
> **Problem Link:** [https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap](https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap) <br>

    class Solution {
    public:
        string getSmallestString(string s) {
            int n = s.size();
            char temp;
            for(int i=0;i<n-1;i++) {
                if( (s[i]-'0') % 2 == (s[i+1] - '0') % 2 && s[i]-'0' > s[i+1]-'0') {
                    temp = s[i];
                    s[i] = s[i+1];
                    s[i+1] = temp;
                    break;
                }
            }
            return s;
        }
    };