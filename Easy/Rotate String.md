> **Problem Number:** 796 <br>
> **Problem Name:** Rotate String <br>
> **Problem Link:** [https://leetcode.com/problems/rotate-string/](https://leetcode.com/problems/rotate-string/) <br>

    class Solution {
    public:
        bool rotateString(string s, string goal) {
            if(s.size() != goal.size()) {
                return false;
            }
            string str = s + s;
            if(str.find(goal) != string::npos) {
                return true;
            }
            return false;
        }
    };