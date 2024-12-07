> **Problem Number:** 2923 <br>
> **Problem Name:** Find Champion I <br>
> **Problem Link:** [https://leetcode.com/problems/find-champion-i](https://leetcode.com/problems/find-champion-i) <br>

    class Solution {
    public:
        int findChampion(vector<vector<int>>& grid) {
            set<int> weakTeams;
            int n = grid.size();

            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if( i == j ) {
                        continue;
                    }
                    if( grid[i][j] == 1 ) {
                        weakTeams.insert(j);
                    }else {
                        weakTeams.insert(i);
                    }
                }
            }
            for(int i=0;i<n;i++) {
                if( weakTeams.count(i) == 0 ) {
                    return i;
                }
            }
            return -1;
        }
    };