> **Problem Number:** 3248 <br>
> **Problem Name:** Snake in Matrix <br>
> **Problem Link:** [https://leetcode.com/problems/snake-in-matrix/](https://leetcode.com/problems/snake-in-matrix/) <br>

    class Solution {
    public:
        int finalPositionOfSnake(int n, vector<string>& commands) {
            int i = 0, j = 0;
            for(auto x:commands) {
                if(x=="RIGHT") {
                    j += 1;
                }else if(x=="DOWN") {
                    i += 1;
                }else if(x=="LEFT") {
                    j -= 1;
                }else {
                    i -= 1;
                }
            }
            return i*n+j;
        }
    };