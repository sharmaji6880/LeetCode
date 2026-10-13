> **Problem No.:** 3727  
> **Problem Name:** Maximum Alternating Sum of Squares  
> **Problem Link:** [https://leetcode.com/problems/maximum-alternating-sum-of-squares/description/](https://leetcode.com/problems/maximum-alternating-sum-of-squares/description/)  


    class Solution {
        public long maxAlternatingSum(int[] nums) {
            int n = nums.length;
            for(int i=0;i<n;i++) {
                if(nums[i] >= 0) continue;
                nums[i] = -nums[i];
            }
            Arrays.sort(nums);
            long ans = 0;
            for(int i=0;i<n;i++) {
                if(i<n/2) {
                    ans -= nums[i]*nums[i];
                }else {
                    ans += nums[i]*nums[i];
                }
            }
            return ans;
        }
    }