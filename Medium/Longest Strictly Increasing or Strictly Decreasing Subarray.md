> **Problem Number:** 3105 <br>
> **Problem Name:** Longest Strictly Increasing or Strictly Decreasing Subarray <br>
> **Problem Link:** [https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/) <br>

    class Solution {
    public:
        int longestMonotonicSubarray(vector<int>& nums) {
            if(nums.size() == 1) {
                return 1;
            }
            int longestIncreasing = 0;
            int longestDecreasing = 0;
            int left = 0, right = 1;
            while(left < nums.size() && right < nums.size() && left<=right) {
                if(nums[right] > nums[right-1]) {
                    if(right == nums.size()-1 && right-left+1 > longestIncreasing) {
                        longestIncreasing = right-left+1;
                    }
                    right++;
                }else {
                    if(right - left > longestIncreasing) {
                        longestIncreasing = right - left;
                    }
                    left = right;
                    right = left + 1;
                    
                }
            }
            left = 0;
            right = 1;
            while(left<nums.size() && right < nums.size() && left<=right) {
                if(nums[right] < nums[right-1]) {
                    if(right == nums.size()-1 && right-left+1 > longestDecreasing) {
                        longestDecreasing = right-left+1;
                    }
                    right++;
                }else {
                    if(right - left > longestDecreasing) {
                        longestDecreasing = right - left;
                    }
                    left = right;
                    right = left + 1;
                    
                }
            }
            return max(longestIncreasing, longestDecreasing);
        }
    };