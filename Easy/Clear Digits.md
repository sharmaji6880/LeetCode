> **Problem Number:** 3174 <br>
> **Problem Name:** Clear Digits <br>
> **Problem Link:** [https://leetcode.com/problems/clear-digits/](https://leetcode.com/problems/clear-digits/) <br>

    class Solution {
    public:
        bool isDigit(char c) {
            if(c-'0' >= 0 && c-'0'<= 9) {
                return true;
            }
            return false;
        }
        string clearDigits(string s) {
            string ans = "";
            int n = s.size();
            for(int i=0;i<n;i++) {
                if(!isDigit(s[i])) {
                    ans.push_back(s[i]);
                    continue;
                }
                ans.pop_back();
            }
            return ans;
        }
    };