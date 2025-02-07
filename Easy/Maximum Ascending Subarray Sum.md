> **Problem Number:** 1800 <br>
> **Problem Name:** Maximum Ascending Subarray Sum <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-ascending-subarray-sum](https://leetcode.com/problems/maximum-ascending-subarray-sum) <br>

    class Solution {
    public:
        int maxAscendingSum(vector<int>& nums) {
            int maxSum = INT_MIN, sum = 0;
            int count = 0, prev, n = nums.size();
            for(int i=0;i<n;i++) {
                if(sum == 0 ) {
                    sum += nums[i];
                    prev = nums[i];
                    if(i==n-1) maxSum = sum;
                    continue;
                }
                if(nums[i] > prev) {
                    sum += nums[i];
                    prev = nums[i];
                    if(i==n-1 && sum > maxSum) maxSum = sum;
                }else {
                    if(sum > maxSum) maxSum = sum;
                    sum -= (sum-nums[i]);
                    prev = nums[i];
                }
            }
            return maxSum;
        }
    };