> **Problem Number:** 3456 <br>
> **Problem Name:** Find Special Substring of Length K <br>
> **Problem Link:** [https://leetcode.com/problems/find-special-substring-of-length-k](https://leetcode.com/problems/find-special-substring-of-length-k) <br>

    class Solution {
    public:
        bool hasOneLetter(string str) {
            set<char> s;
            for(auto x:str) {
                s.insert(x);
                if(s.size() > 1) {
                    return false;
                }
            }
            return true;
        }
        bool hasSpecialSubstring(string s, int k) {
            int n = s.size();
            string str;
            for(int i=0;i<=n-k;i++) {
                str = s.substr(i,k);
                if(hasOneLetter(str) && (i==0 || s[i-1]!=s[i]) && (i==n-1 || s[i+k-1]!=s[i+k])) {
                    return true;
                }
            }
            return false;
        }

    };