> **Problem Number:** 2402 <br>
> **Problem Name:** Minimum Operations to Make Columns Strictly Increasing <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-operations-to-make-columns-strictly-increasing](https://leetcode.com/problems/minimum-operations-to-make-columns-strictly-increasing) <br>

    class Solution {
    public:
        int minimumOperations(vector<vector<int>>& grid) {
            int count = 0, m = grid.size(), n = grid[0].size(), toBeIncreased;
            for(int j=0;j<n;j++) {
                for(int i=0;i<m-1;i++) {
                    if( grid[i][j] >= grid[i+1][j] ) {
                        toBeIncreased = grid[i][j] - grid[i+1][j] + 1;
                        count += toBeIncreased;
                        grid[i+1][j] += toBeIncreased;
                    }
                }
            }
            return count;
        }
    };