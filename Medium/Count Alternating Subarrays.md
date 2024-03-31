> **Problem Number:** 3101 <br>
> **Problem Name:** Count Alternating Subarrays <br>
> **Problem Link:** [https://leetcode.com/problems/count-alternating-subarrays/](https://leetcode.com/problems/count-alternating-subarrays/) <br>

    class Solution {
    public:
        long long countAlternatingSubarrays(vector<int>& nums) {
            int n = nums.size();
            vector<int> dp(n,0);

            for(int i=0;i<n;i++) {
                if(i==0) {
                    dp[i]=1;
                    continue;
                }
                if(nums[i]==nums[i-1]) dp[i]=1;
                else dp[i]=dp[i-1]+1;
            }

            long count = 0;
            for(auto x:dp) {
                count+=x;
            }
            return count;
        }
    };