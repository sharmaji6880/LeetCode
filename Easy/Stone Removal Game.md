> **Problem Number:** 3360 <br>
> **Problem Name:** Stone Removal Game <br>
> **Problem Link:** [https://leetcode.com/problems/stone-removal-game](https://leetcode.com/problems/stone-removal-game) <br>

    class Solution {
    public:
        bool canAliceWin(int n) {
            bool aliceTurn = true;
            int toBeRemoved = 10;
            while( n >= toBeRemoved ) {
                n -= toBeRemoved;
                toBeRemoved--;
                if(aliceTurn) {
                    aliceTurn = false;
                }else {
                    aliceTurn = true;
                }
            }
            if(aliceTurn) {
                return false;
            }
            return true;
        }
    };