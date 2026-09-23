> **Problem No.:** 1658  
> **Problem Name:** Minimum Operations to Reduce X to Zero  
> **Problem Link:** [https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/)  


    class Solution {
        public int minOperations(int[] nums, int x) {
            int total = 0, sum = 0, target;
            for(int num:nums) total += num;
            target = total-x;
            if(target == 0) return nums.length;
            int i = 0, j = 0, n = nums.length, len = 0;
            
            while(i<n && j<n) {
                sum += nums[j];
                if(sum < target) {
                    j++;
                }else if(sum >= target) {
                    if(sum == target) len = Math.max(len,j-i+1);
                    sum -= nums[i];i++;
                    sum -= nums[j];
                }
            }
            if(len==0) return -1;
            return n-len;
        }
    }