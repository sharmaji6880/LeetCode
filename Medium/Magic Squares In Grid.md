> **Problem Number:** 840 <br>
> **Problem Name:** Magic Squares In Grid <br>
> **Problem Link:** [https://leetcode.com/problems/magic-squares-in-grid/](https://leetcode.com/problems/magic-squares-in-grid/) <br>

    class Solution {
    public:
        int rowSum(vector<vector<int>>& grid, int i, int j) { // This function returns the sum 
        // of a row of 3 elements starting from the cell (i,j) from left to right
            return grid[i][j] + grid[i][j+1] + grid[i][j+2];
        }

        int colSum(vector<vector<int>>& grid, int i, int j) {// This function returns the sum
        // of a column of 3 elements starting from the cell (i,j) from top to bottom
            return grid[i][j] + grid[i+1][j] + grid[i+2][j];
        }

        int diagonalSum(vector<vector<int>>& grid, int i, int j,bool flag) {// This function returns the sum
        // of a diagonal of 3 elements starting from the cell(i,j)
        // If flag is true , it returns the sum of the main/primary diagonal (top-left to bottom right)
        // If flag is false, it returns the sum of the secondary diagonal (top-right to bottom left)
            if(flag == true) {
                return grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
            }
            return grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];   
        }
        
        bool hasUniqueElements(vector<vector<int>>& grid,int i,int j) {// This function checks whether
        // the 3*3 grid starting from the cell (i,j) contains all the elements
        // from 1-9 exactly once
            set<int> s;
            for(int I = i; I < i+3; I++) {
                for(int J = j; J < j+3; J++) {
                    if(grid[I][J] < 1 || grid[I][J] > 9) {
                        return false;
                    }
                    s.insert(grid[I][J]);
                }
            }
            if(s.size() == 9) {
                return true;
            }
            return false;
        }

        int numMagicSquaresInside(vector<vector<int>>& grid) {
            int count = 0; // count stores the number of magic squares which is initially zero
            int m = grid.size(); // m is the no. of rows in the grid
            int n = grid[0].size(); // n is the no. of columns in the grid

            set<int> s;
            for(int i=0;i<m-2;i++) {
                for(int j=0;j<n-2;j++) {
                    // For every possible cell in the grid

                    if(!hasUniqueElements(grid,i,j)) {// if the 3*3 matrix starting from that cell
                    // doesn't have all the elements from 1-9 exactly once, it can't be a magic square
                        continue;
                    }
                    s = {};
                    s.insert(rowSum(grid,i,j));
                    s.insert(rowSum(grid,i+1,j));
                    s.insert(rowSum(grid,i+2,j));
                    s.insert(colSum(grid,i,j));
                    s.insert(colSum(grid,i,j+1));
                    s.insert(colSum(grid,i,j+2));
                    s.insert(diagonalSum(grid,i,j,true));
                    s.insert(diagonalSum(grid,i,j,false));

                    // We have inserted all the diagonalsums, rowsums and colsums of the 3*3 matrix
                    // into the set.If all of them are same, then there will be only one insertion in the 
                    // set i.e., the size of the set will be 1
                    // This is exactly the condition for it to be a magic square
                    // So, we increment count by 1
                    if(s.size() == 1) {
                        count += 1;
                    }
                } 
            }
            return count; // We finally return the number of magic squares
        }
    };