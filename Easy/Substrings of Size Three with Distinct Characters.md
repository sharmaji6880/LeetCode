> **Problem Number:** 1876 <br>
> **Problem Name:** Substrings of Size Three with Distinct Characters <br>
> **Problem Link:** [https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters](https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters) <br>


    class Solution {
    public:
        int countGoodSubstrings(string s) {
            int n = s.size();
            int count = 0;
            for(int i = 0 ; i < n -2 ; ++i ) {
                if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+2] != s[i]) {
                    ++count;
                }
            }
            return count;
        }
    };