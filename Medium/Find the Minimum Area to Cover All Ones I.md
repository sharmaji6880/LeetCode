> **Problem Number:** 3195 <br>
> **Problem Name:** Find the Minimum Area to Cover All Ones I <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i) <br>

    class Solution {
    public:
        int rowHasOne(vector<vector<int>> &grid, int &row, int &n) {
            for(int col=0;col<n;col++) {
                if(grid[row][col] == 1) {
                    return true;
                }
            }
            return false;
        }
        int colHasOne(vector<vector<int>> &grid, int &col, int &m) {
            for(int row=0;row<m;row++) {
                if(grid[row][col] == 1) {
                    return true;
                }
            }
            return false;
        }
        int minimumArea(vector<vector<int>>& grid) {
            int top = -1, bottom = -1, left = -1, right = -1;
            int m = grid.size();
            int n = grid[0].size();

            for(int i = 0;i<m;i++) {
                if(rowHasOne(grid,i,n)) {
                    top = i;
                    break;
                }
            }
            for(int i = m-1;i>=0;i--) {
                if(rowHasOne(grid,i,n)) {
                    bottom = i;
                    break;
                }
            }
            for(int j = 0;j<n;j++) {
                if(colHasOne(grid,j,m)) {
                    left = j;
                    break;
                }
            }
            for(int j = n-1;j>=0;j--) {
                if(colHasOne(grid,j,m)) {
                    right = j;
                    break;
                }
            }
            int ans = (right - left + 1) * (bottom - top + 1);
            cout<<left<<" "<<right<<" "<<top<<" "<<bottom;
            return ans;

        }
    };