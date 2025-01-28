> **Problem Number:** 3238 <br>
> **Problem Name:** Find the Number of Winning Players <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-number-of-winning-players](https://leetcode.com/problems/find-the-number-of-winning-players) <br>

    class Solution {
    public:
        int winningPlayerCount(int n, vector<vector<int>>& pick) {
            map<int, map<int,int> > m;

            for(auto x:pick) {
                m[x[0]][x[1]] += 1;
            }
            int count = 0;
            for(auto x:m) {
                for(auto y:x.second) {
                    if(y.second > x.first) {
                        count += 1;
                        break;
                    }
                }
            }
            return count;
            
        }
    };