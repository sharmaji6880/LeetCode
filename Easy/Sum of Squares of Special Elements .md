> **Problem No.:** 2778  
> **Problem Name:** Sum of Squares of Special Elements   
> **Problem Link:** [https://leetcode.com/problems/sum-of-squares-of-special-elements/description/?envType=daily-question&envId=2026-10-11](https://leetcode.com/problems/sum-of-squares-of-special-elements/description/?envType=daily-question&envId=2026-10-11)  


    class Solution {
        public int sumOfSquares(int[] nums) {
            int n = nums.length, sum = 0;
            for(int i=1;i<=n;i++) {
                if(n % i == 0) sum += nums[i-1]*nums[i-1];
            }
            return sum;
        }
    }