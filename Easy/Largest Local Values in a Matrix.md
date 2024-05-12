> **Problem Number:** 2373 <br>
> **Problem Name:** Largest Local Values in a Matrix <br>
> **Problem Link:** [https://leetcode.com/problems/largest-local-values-in-a-matrix/](https://leetcode.com/problems/largest-local-values-in-a-matrix/) <br>

    class Solution {
    public:
        int maxEle(vector<vector<int>> &grid, int I, int J) {
            int Max = INT_MIN;
            for(int i=I;i<I+3;i++) {
                for(int j=J;j<J+3;j++) {
                    if(grid[i][j] > Max) {
                        Max = grid[i][j];
                    }
                }
            }
            return Max;
        }
        vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
            int n = grid.size();
            vector<vector<int>> ans(n-2,vector<int>(n-2,0));
            for(int i=0;i<n-2;i++) {
                for(int j=0;j<n-2;j++) {
                    ans[i][j] = maxEle(grid,i,j);
                }
            }
            return ans;
        }
    };