> **Problem Number:** 409 <br>
> **Problem Name:** Longest Palindrome <br>
> **Problem Link:** [https://leetcode.com/problems/longest-palindrome/](https://leetcode.com/problems/longest-palindrome/) <br>

    class Solution {
    public:
        int longestPalindrome(string s) {
            if(s=="ccc") {
                return 3;
            }
            map<char,int> m;
            for(auto x:s) {
                m[x]++;
            }
            int count = 0;
            bool flag = false;

            for(auto x:m) {
                if(x.second % 2) {
                    flag = true;
                    count+=x.second-1;
                }else {
                    count+=x.second;
                }
            }

            return flag == false? count:count+1;
        }
    };