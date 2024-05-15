> **Problem Number:** 3142 <br>
> **Problem Name:** Check if Grid Satisfies Conditions <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-grid-satisfies-conditions/](https://leetcode.com/problems/check-if-grid-satisfies-conditions/) <br>

    class Solution {
    public:
        bool satisfiesConditions(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();
            
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(i != m-1 && grid[i][j] != grid[i+1][j]) {
                        return false;
                    }
                    if(j != n-1 && grid[i][j] == grid[i][j+1]) {
                        return false;
                    }
                }
            }
            return true;
        }
    };