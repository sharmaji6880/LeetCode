**Problem No.:** 3693  
**Problem Name:** Climbing Stairs II  
**Problem Link:** [LeetCode 3693 - Climbing Stairs II](https://leetcode.com/problems/climbing-stairs-ii/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int climbStairs(int n, int[] costs) {

        int[] dp = new int[n+1];

        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                dp[i] = costs[n-1] + 1;
                continue;
            }
            if(i==n-2) {
                dp[i] = Math.min(costs[n-1] + 4 , costs[n-2] + 1 + dp[i+1]);
                continue;
            }
            int choice1 = costs[i] + 1 +  dp[i+1];
            int choice2 = (costs[i+1] + 4) + dp[i+2];
            int choice3 = (costs[i+2] + 9) + dp[i+3];
            dp[i] = Math.min(Math.min(choice1,choice2), choice3);
        }
        return dp[0];
        
    }
}
```
