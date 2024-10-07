> **Problem Number:** 2696 <br>
> **Problem Name:** Minimum String Length After Removing Substrings <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-string-length-after-removing-substrings/](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/) <br>

    class Solution {
    public:
        int minLength(string s) {
            string str = "";
            string subString = "";
            for(auto x:s) {
                str.push_back(x);
                if(str.size() == 1) {
                    continue;
                }
                subString = str.substr(str.size()-2,2);
                if( subString == "AB" || subString == "CD" ) {
                    str = str.substr(0,str.size()-2);
                }
            }
            return str.size();
        }
    };