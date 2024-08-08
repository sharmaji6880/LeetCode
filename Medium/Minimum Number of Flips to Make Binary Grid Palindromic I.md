> **Problem Number:** 3239 <br>
> **Problem Name:** Minimum Number of Flips to Make Binary Grid Palindromic I <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-flips-to-make-binary-grid-palindromic-i/](https://leetcode.com/problems/minimum-number-of-flips-to-make-binary-grid-palindromic-i/) <br>

    class Solution {
    public:
        int minFlips(vector<vector<int>>& grid) {
            int flipsinRows = 0, flipsinCols = 0;
            int m = grid.size();
            int n = grid[0].size();
            for(int i=0;i<m;i++) {
                for(int j=0;j<n/2;j++) {
                    if(grid[i][j] != grid[i][n-1-j]) {
                        flipsinRows += 1;
                    }
                }
            }
            for(int j=0;j<n;j++) {
                for(int i=0;i<m/2;i++) {
                    if(grid[i][j] != grid[m-1-i][j]) {
                        flipsinCols += 1;
                    }
                }
            }
            return min(flipsinRows,flipsinCols);
        }
    };