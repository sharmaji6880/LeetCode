**Problem No.:** 1314  
**Problem Name:** Matrix Block Sum  
**Problem Link:** [LeetCode 1314 - Matrix Block Sum](https://leetcode.com/problems/matrix-block-sum/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int helper(int i, int j, int k, int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        int sum = 0;

        for(int r=i-k;r<=i+k;r++) {
            for(int c=j-k;c<=j+k;c++) {
                if(r<0 || r>=m || c<0 || c>= n) continue;
                sum += mat[r][c];
            }
        }
        return sum;
        
    }
    public int[][] matrixBlockSum(int[][] mat, int k) {
        int m = mat.length, n = mat[0].length;
        int[][] answer = new int[m][n];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                answer[i][j] = helper(i,j,k,mat);
            }
        }
        return answer;
    }
}
```
