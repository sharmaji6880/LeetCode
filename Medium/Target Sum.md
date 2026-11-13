**Problem No.:** 494  
**Problem Name:** Target Sum  
**Problem Link:** [LeetCode 494 - Target Sum](https://leetcode.com/problems/target-sum/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int sum = 0;
        for(int num:nums) sum+=num;
        if( (sum+target) % 2 != 0 || (sum+target) / 2 > sum ) return 0;

        target = (sum+target)/2;
        if(target < 0) return 0;
        
        int n = nums.length;
        

        int[][] dp = new int[n+1][target+1];

        dp[0][0] = 1;
        for(int j=1;j<target+1;j++) {
            dp[0][j] = 0;
        }
        for(int i=1;i<n+1;i++) {
            for(int j=0;j<target+1;j++) {
                dp[i][j] = dp[i-1][j] + ( j >= nums[i-1] ? dp[i-1][j-nums[i-1]]:0);
            }
        }
        return dp[n][target];
        
    }
}
```
