> **Problem Number:** 1749 <br>
> **Problem Name:** Maximum Absolute Sum of Any Subarray <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray) <br>

    class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int n = nums.size(), maxSum = INT_MIN, sum = 0, minSum = INT_MAX;
            for(int i=0;i<n;i++) {
                sum += nums[i];
                if(sum > maxSum) {
                    maxSum = sum;
                }
                if(sum < 0) {
                    sum = 0;
                }
            }
            sum = 0;
            for(int i=0;i<n;i++) {
                sum += nums[i];
                if(sum < minSum) {
                    minSum = sum;
                }
                if(sum > 0) {
                    sum = 0;
                }
            }
            return max(maxSum,abs(minSum));
        }
    };