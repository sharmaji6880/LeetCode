> **Problem No.:** 300  
> **Problem Name:** Longest Increasing Subsequence  
> **Problem Link:** [https://leetcode.com/problems/longest-increasing-subsequence/description/](https://leetcode.com/problems/longest-increasing-subsequence/description/)  


    class Solution {
        int[][] dp;
        public int helper(int[] nums, int start, int prevIndex) {
            if(start >= nums.length) return 0;
            if(prevIndex != -1 && dp[start][prevIndex] != -1) {
                return dp[start][prevIndex];
            }
            if(prevIndex != -1 && nums[start] <= nums[prevIndex]) return helper(nums,start+1,prevIndex);
            int choice1 = 1 + helper(nums,start+1,start);
            int choice2 = helper(nums,start+1,prevIndex);
            int result = Math.max(choice1,choice2);
            if(prevIndex != -1) {
                dp[start][prevIndex] = result;
            }
            return result;
        }
        public int lengthOfLIS(int[] nums) {
            int n = nums.length;
            dp = new int[n][n];
            for(int[] row:dp) {
                Arrays.fill(row,-1);
            }
            return helper(nums,0,-1);
        }
    }