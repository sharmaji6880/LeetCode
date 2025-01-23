> **Problem Number:** 1267 <br>
> **Problem Name:** Count Servers that Communicate <br>
> **Problem Link:** [https://leetcode.com/problems/count-servers-that-communicate](https://leetcode.com/problems/count-servers-that-communicate) <br>

    class Solution {
    public:
        int countServers(vector<vector<int>>& grid) {
            int m = grid.size(), n = grid[0].size();
            vector<int> rowEleCount(m,0),colEleCount(n,0);
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(grid[i][j]) {
                        rowEleCount[i] += 1;
                        colEleCount[j] += 1;
                    }
                }
            }
            int count = 0;
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(!grid[i][j]) continue;
                    if(rowEleCount[i] > 1 || colEleCount[j] > 1) count++;
                }
            }
            return count;
        }
    };