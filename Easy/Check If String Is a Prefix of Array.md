> **Problem Number:** 1961 <br>
> **Problem Name:** Check If String Is a Prefix of Array <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-string-is-a-prefix-of-array](https://leetcode.com/problems/check-if-string-is-a-prefix-of-array) <br>

    class Solution {
    public:
        bool isPrefixString(string s, vector<string>& words) {
            string str = "";
            for(auto x:words) {
                str += x;
                if(str == s) {
                    return true;
                }
            }
            return false;
        }
    };