> **Problem Number:** 209 <br>
> **Problem Name:** Minimum Size Subarray Sum <br>
> **Link:** [https://leetcode.com/problems/minimum-size-subarray-sum/](https://leetcode.com/problems/minimum-size-subarray-sum/) <br>

    class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int left = 0, right = 0;
            int sum = nums[left];
            int minLen = INT_MAX;
            while(left < n && right < n) {
                if(sum >= target) {
                    if(right - left + 1 < minLen) {
                        minLen = right - left + 1;
                    }
                    sum-=nums[left];
                    left++;
                }else if(sum < target) {
                    if(right+1 < n) {
                        sum+=nums[right+1];
                    }
                    right++;
                }
            }
            if(minLen == INT_MAX) {
                return 0;
            }
            return minLen;
        }
    };