> **Problem Number:** 1957 <br>
> **Problem Name:** Delete Characters to Make Fancy String <br>
> **Problem Link:** [https://leetcode.com/problems/delete-characters-to-make-fancy-string/](https://leetcode.com/problems/delete-characters-to-make-fancy-string/) <br>

    class Solution {
    public:
        string makeFancyString(string s) {
            string ans = "";
            for(int i=0;i<s.size();i++) {
                if(ans.size() == 0) {
                    ans += s[i];
                    continue;
                }
                if(ans.back() != s[i]) {
                    ans += s[i];
                }else {
                    if(ans.size() < 2) {
                        ans += s[i];
                    }else {
                        if(ans.back() == ans[ans.size()-2] && ans.back() == s[i] ) {
                            continue;
                        }else {
                            ans += s[i];
                        }
                    }
                }
            }
            return ans;
        }
    };