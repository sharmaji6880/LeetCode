> **Problem No.:** 3550  
> **Problem Name:** Smallest Index With Digit Sum Equal to Index  
> **Problem Link:** [https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/description/](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/description/)  


    class Solution {
        public int digitSum(int n) {
            int sum = 0;
            while(n!=0) {
                sum += n % 10;
                n/=10;
            }
            return sum;
        }
        public int smallestIndex(int[] nums) {
            for(int i=0;i<nums.length;i++) {
                if(digitSum(nums[i]) == i) return i;
            }
            return -1;
        }
    }