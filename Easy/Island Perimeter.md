> **Problem Number:** 463 <br>
> **Problem Name:** Island Perimeter <br>
> **Problem Link:** [https://leetcode.com/problems/island-perimeter/](https://leetcode.com/problems/island-perimeter/) <br>


    class Solution {
    public:
        int islandPerimeter(vector<vector<int>>& grid) {
            int m=grid.size();
            int n=grid[0].size();
            int perimeter=0;
            for(int i=0;i<m;++i) {
                for(int j=0;j<n;++j) {
                    if(grid[i][j]==0) {
                        continue;
                    }
                    int count=0;
                    if(j>0 && (grid[i][j-1]==1)) {
                        count++;
                    }
                    if(j<n-1 && (grid[i][j+1]==1)) {
                        count++;
                    }
                    if(i>0 && (grid[i-1][j]==1)) {
                        count++;
                    }
                    if(i<m-1 && (grid[i+1][j]==1)) {
                        count++;
                    }
                    perimeter+=(4-count);

                }
            }
            return perimeter;
        }
    };
