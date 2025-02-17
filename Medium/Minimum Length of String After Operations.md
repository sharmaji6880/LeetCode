> **Problem Number:** 3223 <br>
> **Problem Name:** Minimum Length of String After Operations <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-length-of-string-after-operations](https://leetcode.com/problems/minimum-length-of-string-after-operations) <br>

    class Solution {
    public:
        int minimumLength(string s) {
            int n = s.size();
            map<char,int> m;
            for(auto x:s) {
                m[x]++;
            }
            for(auto x:m) {
                if(x.second <= 2) {
                    continue;
                }
                if(x.second % 2 ) {
                    n -= x.second - 1;
                }else {
                    n-= x.second - 2;
                }
            }
            return n;
        }
    };
