> **Problem Number:** 1438 <br>
> **Problem Name:** Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit <br>
> **Problem Link:** [https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit) <br>

    class Solution {
    public:
        int longestSubarray(vector<int>& nums, int limit) {
            map<int,int> m;
            int Min,Max;
            int n = nums.size(), i = 0, j = 0;
            int maxLen = INT_MIN;
            while(i<n) {
                m[nums[j]]++;
                Min = m.begin() -> first;
                Max = (--m.end()) -> first;
                if(Max-Min <= limit) {
                    j++;
                }else {
                    if(j-i > maxLen) maxLen = j-i;
                    m[nums[i]]--;
                    if(m[nums[i]]==0) m.erase(nums[i]);
                    i++;
                    j++;
                }
                if(j==n) {
                    maxLen = max(maxLen,j-i);
                    break;
                }
            }
            return maxLen;
        }
    };