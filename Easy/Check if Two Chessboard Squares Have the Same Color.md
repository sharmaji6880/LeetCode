> **Problem Number:** 3274 <br>
> **Problem Name:** Check if Two Chessboard Squares Have the Same Color <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color](https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color) <br>

    class Solution {
    public:
        bool checkTwoChessboards(string coordinate1, string coordinate2) {
            int x1,y1,x2,y2;
            x1 = coordinate1[0] - 'a' + 1;
            y1 = coordinate1[1] - '0';
            x2 = coordinate2[0] - 'a' + 1;
            y2 = coordinate2[1] - '0';

            if( (x1 + y1) % 2 == (x2 + y2) % 2) {
                return true;
            }
            return false;
        }
    };