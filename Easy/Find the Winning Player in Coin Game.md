> **Problem Number:** 3222 <br>
> **Problem Name:** Find the Winning Player in Coin Game <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-winning-player-in-coin-game/](https://leetcode.com/problems/find-the-winning-player-in-coin-game/) <br>

    class Solution {
    public:
        string losingPlayer(int x, int y) {
            bool flag = true;
            while(x && y >= 4) {
                x -= 1;
                y -= 4;
                if(flag) {
                    flag = false;
                }else {
                    flag = true;
                }
            }
            if(flag == true) {
                return "Bob";
            }
            return "Alice";
        }
    };