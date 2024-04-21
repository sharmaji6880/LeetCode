> **Problem Number:** 3120 <br>
> **Problem Name:** Count the Number of Special Characters I <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-special-characters-i/](https://leetcode.com/problems/count-the-number-of-special-characters-i/) <br>

    class Solution {
    public:
        int numberOfSpecialChars(string word) {
            set<char> s;
            for(auto x:word) {
                s.insert(x);
            }
            int count = 0;
            for(int i=0;i<26;i++) {
                if(s.count(i+65) && s.count(i+97)) {
                    count+=1;
                }
            }
            return count;
        }
    };