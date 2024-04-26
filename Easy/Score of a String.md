> **Problem Number:** 3110 <br>
> **Problem Name:** Score of a String <br>
> **Problem Link:** [https://leetcode.com/problems/score-of-a-string/](https://leetcode.com/problems/score-of-a-string/) <br>

    class Solution {
    public:
        int scoreOfString(string s) {
            int score = 0;
            for(int i=0;i<s.size()-1;i++) {
                score+= abs(s[i]-s[i+1]);
            }
            return score;
        }
    };