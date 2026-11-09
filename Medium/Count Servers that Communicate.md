**Problem No.:** 1267  
**Problem Name:** Count Servers that Communicate  
**Problem Link:** [LeetCode 1267 - Count Servers that Communicate](https://leetcode.com/problems/count-servers-that-communicate/description/)


```java
class Solution {
    public int countServers(int[][] grid) {

        int m = grid.length, n = grid[0].length;

        int[] rowSum = new int[m];
        int[] colSum = new int[n];

        for(int i=0;i<m;i++) {
            int sum = 0;
            for(int j=0;j<n;j++) {
                sum += grid[i][j];
            }
            rowSum[i] = sum;
        }

        for(int j=0;j<n;j++) {
            int sum = 0;
            for(int i=0;i<m;i++) {
                sum += grid[i][j];
            }
            colSum[j] = sum;
        }
        int count = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == 1 && (rowSum[i] > 1 || colSum[j] > 1)) count++;
            }
        }
        return count;
        
    }
}
```
