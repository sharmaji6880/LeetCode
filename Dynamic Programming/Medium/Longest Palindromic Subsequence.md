**Problem No.:** 516  
**Problem Name:** Longest Palindromic Subsequence  
**Problem Link:** [LeetCode 516 - Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/)


```java
class Solution {
    public int longestPalindromeSubseq(String s) {
        int n = s.length();
        String reverse = "";
        for(int i=n-1;i>=0;i--) {
            reverse += s.charAt(i);
        }

        int[][] dp = new int[n+1][n+1];
        for(int i=1;i<n+1;i++) {
            for(int j=1;j<n+1;j++) {
                if(s.charAt(i-1) == reverse.charAt(j-1)) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else {
                    dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
}
```
