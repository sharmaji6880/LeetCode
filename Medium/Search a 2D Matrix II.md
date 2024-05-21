> **Problem Number:** 240 <br>
> **Problem Name:** Search a 2D Matrix II <br>
> **Problem Link:** [https://leetcode.com/problems/search-a-2d-matrix-ii/](https://leetcode.com/problems/search-a-2d-matrix-ii/) <br>

**First Approach:**  <br>

    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i=0;i<m;i++) {
                if(target < matrix[i][0] || target > matrix[i][n-1]) {
                    continue;
                }
                for(int j=0;j<n;j++) {
                    if(matrix[i][j] == target) {
                        return true;
                    }
                }
            }
            return false;
        }
    };

**Second Approach:** <br>

    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size();
            int n = matrix[0].size();
            set<int> rowIndices,colIndices;
            for(int i=0;i<m;i++) {
                if(target < matrix[i][0] || target > matrix[i][n-1]) {
                    continue;
                }
                rowIndices.insert(i);
            }
            for(int j=0;j<n;j++) {
                if(target < matrix[0][j] || target > matrix[m-1][j]) {
                    continue;
                }
                colIndices.insert(j);
            }
            for(auto x:rowIndices) {
                for(auto  y:colIndices) {
                    if(matrix[x][y] == target) {
                        return true;
                    }
                }
            }
            return false;
        }
    };