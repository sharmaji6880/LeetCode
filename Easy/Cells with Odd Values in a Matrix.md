> **Problem No.:** 1252  
> **Problem Name:** Cells with Odd Values in a Matrix  
> **Problem Link:** [https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/](https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/)  


    class Solution {
        public int oddCells(int m, int n, int[][] indices) {
            int[][] grid = new int[m][n];
            int size = indices.length;
            int r,c;
            for(int i=0;i<size;i++) {
                r = indices[i][0];
                c = indices[i][1];
                for(int j=0;j<n;j++) {
                    grid[r][j]++;
                }
                for(int j=0;j<m;j++) {
                    grid[j][c]++;
                }
            }
            int count = 0;
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(grid[i][j] % 2 == 1) count++;
                }
            }
            return count;
        }
    }