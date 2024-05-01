> **Problem Number:** 434 <br>
> **Problem Name:** Number of Segments in a String <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-segments-in-a-string/](https://leetcode.com/problems/number-of-segments-in-a-string/) <br>

**JavaScript Code:** <br>

    var countSegments = function(s) {
        s = s.trim();
        if(s.length == 0) {
            return 0;
        }
        let pattern = /\s+/;
        const arr = s.split(pattern)
        return arr.length;
    };

**C++ Code:** <br>

    class Solution {
    public:
        int countSegments(string s) {
            int left = -1, right = -1;
            int n = s.size();
            for(int i=0;i<n;i++) {
                if(s[i] != ' ') {
                    left = i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--) {
                if(s[i] != ' ') {
                    right = i;
                    break;
                }
            }
            if(left == -1) {
                return 0;
            }
            s = s.substr(left, right-left+1);
            n = s.size();
            int i = 0;
            int count = 0;
            while(i < n) {
                if(s[i] != ' ') {
                    i++;
                }else {
                    count++;
                    while(i < n && s[i]==' ') {
                        i++;
                    }
                }
            }
            return count+1;
        }
    };