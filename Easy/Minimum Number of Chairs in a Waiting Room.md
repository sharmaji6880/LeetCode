> **Problem Number:** 3168 <br>
> **Problem Name:** Minimum Number of Chairs in a Waiting Room <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/](https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/) <br>

    class Solution {
    public:
        int minimumChairs(string s) {
            int chairs = 0;
            int score = 0;

            for(auto x:s) {
                x=='E'? score+=1:score-=1;
                if(score > chairs) {
                    chairs = score;
                }
            }
            return chairs;
        }
    };