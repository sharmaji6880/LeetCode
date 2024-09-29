> **Problem Number:** 1941 <br>
> **Problem Name:** Check if All Characters Have Equal Number of Occurrences <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/](https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/)

    class Solution {
    public:
        bool areOccurrencesEqual(string s) {
            map<char,int> m;
            for(auto x:s) {
                m[x]++;
            }
            int count = m.begin()->second;
            for(auto x:m) {
                if(x.second != count) {
                    return false;
                }
            }
            return true;
        }
    };