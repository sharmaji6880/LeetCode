> **Problem Number:** 3105 <br>
> **Problem Name:** Longest Strictly Increasing or Strictly Decreasing Subarray <br>
> **Problem Link:** [https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray) <br>

    class Solution {
    public:
        int longestMonotonicSubarray(vector<int>& nums) {
            int ans = INT_MIN;
            int count = 0, prev,n = nums.size();
            for(int i=0;i<n;i++) {
                if(count==0) {
                    count++;
                    prev = nums[i];
                    continue;
                }
                if(nums[i]>prev) {
                    count++;
                    prev = nums[i];
                    if(i==n-1 && count>ans) ans = count;
                }else {
                    if(count>ans) {
                        ans = count;
                    }
                    count = 1;
                    prev = nums[i];
                }
            }
            count = 0;
            for(int i=0;i<n;i++) {
                if(count==0) {
                    count++;
                    prev = nums[i];
                    continue;
                }
                if(nums[i]<prev) {
                    count++;
                    prev = nums[i];
                    if(i==n-1 && count>ans) ans = count;
                }else {
                    if(count>ans) {
                        ans = count;
                    }
                    count = 1;
                    prev = nums[i];
                }
            }
            return max(1,ans);
        }
    };