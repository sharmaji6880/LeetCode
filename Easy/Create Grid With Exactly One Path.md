> **Problem No.:** 3963  
> **Problem Name:** Create Grid With Exactly One Path  
> **Problem Link:** [https://leetcode.com/problems/create-grid-with-exactly-one-path/description/](https://leetcode.com/problems/create-grid-with-exactly-one-path/description/)  


    class Solution {
        public String[] createGrid(int m, int n) {
            char[][] arr = new char[m][n];
            for(char[] row:arr) {
                Arrays.fill(row,'#');
            }
            for(int i=0;i<m;i++) {
                arr[i][0] = '.';
            }
            for(int j=1;j<n;j++) {
                arr[m-1][j] = '.';
            }
            String[] result = new String[m];
            int index = 0;
            for(char[] row:arr) {
                result[index] = String.valueOf(row);
                index++;
            }
            return result;
        }
    }