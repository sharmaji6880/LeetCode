> **Problem No.:** 918  
> **Problem Name:** Maximum Sum Circular Subarray  
> **Problem Link:** [https://leetcode.com/problems/maximum-sum-circular-subarray/description/](https://leetcode.com/problems/maximum-sum-circular-subarray/description/)  


    class Solution {
        public int maxSubSum(int[] nums) {
            int n = nums.length, sum = 0, maxSum = Integer.MIN_VALUE;
            for(int i=0;i<n;i++) {
                sum += nums[i];
                if(sum > maxSum) maxSum = sum;
                if(sum < 0) sum = 0;
            }
            return maxSum;
        }
        public int minSubSum(int[] nums) {
            int n = nums.length, sum = 0, minSum = Integer.MAX_VALUE;
            for(int i=0;i<n;i++) {
                sum += nums[i];
                if(sum < minSum) minSum = sum;
                if(sum > 0) sum = 0;
            }
            return minSum;
        }
        public int maxSubarraySumCircular(int[] nums) {
            int totalSum = 0;
            for(int n:nums) totalSum += n;
            int choice1 = maxSubSum(nums);
            int choice2 = totalSum - minSubSum(nums);
            if(choice2 == 0) return choice1;
            return Math.max(choice1,choice2);
        }
    }