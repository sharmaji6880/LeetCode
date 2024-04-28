> **Problem Number:** 3127 <br>
> **Problem Name:** Make a Square with the Same Color <br>
> **Problem Link:** [https://leetcode.com/problems/make-a-square-with-the-same-color/](https://leetcode.com/problems/make-a-square-with-the-same-color/) <br>

    class Solution {
    public:
        bool canMakeSquare(vector<vector<char>>& grid) {
            int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
            if(grid[0][0] == 'W') {
                count1+=1;
            }
            if(grid[0][1] == 'W') {
                count1++;
                count2++;
            }
            if(grid[0][2] == 'W') {
                count2++;
            }
            if(grid[1][0] == 'W') {
                count1++;
                count3++;
            }
            if(grid[1][1] == 'W') {
                count1++;
                count2++;
                count3++;
                count4++;
            }
            if(grid[1][2] == 'W') {
                count4++;
                count2++;
            }
            if(grid[2][0] == 'W') {
                count3++;
            }
            if(grid[2][1] == 'W') {
                count3++;
                count4++;
            }
            if(grid[2][2] == 'W') {
                count4++;
            }
            if(count1 != 2) {
                return true;
            }
            if(count2 != 2) {
                return true;
            }
            if(count3 != 2) {
                return true;
            }
            if(count4 != 2) {
                return true;
            }
            return false;
        }
    };