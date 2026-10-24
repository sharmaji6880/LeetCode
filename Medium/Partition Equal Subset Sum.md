> **Problem No.:** 416  
> **Problem Name:** Partition Equal Subset Sum  
> **Problem Link:** [https://leetcode.com/problems/partition-equal-subset-sum/description/](https://leetcode.com/problems/partition-equal-subset-sum/description/)  


    // Bottom Up DP Approach
    class Solution {
        public boolean canPartition(int[] nums) {
            int sum = 0;
            for(int num:nums) {
                sum += num;
            }
            if(sum % 2 == 1) return false;
            int target = sum / 2, n = nums.length;
            Boolean[][] dp = new Boolean[n][target+1];
            for(int i=0;i<n;i++) {
                for(int j=0;j<target+1;j++) {
                    if(j==0) {
                        dp[i][j] = true;continue;
                    }
                    if(i==0) {
                        dp[i][j] = nums[i] == j;
                        continue;
                    }
                    if(nums[i] <= j) {
                        dp[i][j] = dp[i-1][j-nums[i]] || dp[i-1][j];
                    }else {
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
            return dp[n-1][target];
            
        }
    }