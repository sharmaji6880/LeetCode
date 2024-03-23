> **Problem Number:** 459 <br>
> **Problem Name:** Repeated Substring Pattern <br>
> **Link:** [https://leetcode.com/problems/repeated-substring-pattern/](https://leetcode.com/problems/repeated-substring-pattern/) <br>

    class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            int n = s.size();
            for(int length=1;length<=n/2;length++) {
                set<string> Set;
                bool flag = false;
                for(int index = 0; index < n; index+= length) {
                    Set.insert(s.substr(index,length));
                    if(Set.size() > 1) {
                        flag = true;
                        break;
                    }
                }
                if(Set.size() == 1 && flag == false) {
                    return true;
                }
            }
            return false;
        }
    };