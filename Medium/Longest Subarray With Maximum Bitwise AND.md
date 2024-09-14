> **Problem Number:** 2419 <br>
> **Problem Name:** Longest Subarray With Maximum Bitwise AND <br>
> **Problem Link:** [https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/](https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/) <br>

    class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int maxEle = INT_MIN;
            for(auto x:nums) {
                if( x > maxEle ) {
                    maxEle = x;
                }
            }
            int len = 0;
            int maxLen = INT_MIN;

            for(int i=0;i<nums.size();i++) {
                if(nums[i] == maxEle) {
                    len += 1;
                }else {
                    if(len > maxLen) {
                        maxLen = len;
                    }
                    len = 0;
                }
                if( i == nums.size()-1 ) {
                    if( len > maxLen) {
                        maxLen = len;
                    }
                }
            }

            return maxLen;
        }
    };