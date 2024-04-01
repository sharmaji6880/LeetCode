> **Problem Number:** 58 <br>
> **Problem Name:** Length of Last Word <br>
> **Problem Link:** [https://leetcode.com/problems/length-of-last-word/](https://leetcode.com/problems/length-of-last-word/) <br>

    class Solution {
    public:
        int lengthOfLastWord(string s) {
            int first,last;
            int n = s.size();
            for(int i=0;i<n;i++) {
                if(s[i]!=' ') {
                    first = i; // first denotes the index of first non-whitespace character
                    break;
                }
            }
            for(int i=n-1;i>=0;i--) {
                if(s[i]!=' ') {
                    last = i; // last denotes the index of last non-whitespace character
                    break;
                }
            }

            s = s.substr(first,last-first+1); // trim the substring from both ends
            n = s.size();
            
            for(int i=n-1;i>=0;i--) {
                if(s[i]==' ') return n-i-1;
            }
            return s.size();
        }
    };