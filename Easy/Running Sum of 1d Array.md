> **Problem Number:** 1480 <br>
> **Problem Name:** Running Sum of 1d Array <br>
> **Problem Link:** [https://leetcode.com/problems/running-sum-of-1d-array/](https://leetcode.com/problems/running-sum-of-1d-array/) <br>

    class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            int n = nums.size();
            vector<int> ans(n,0);
            
            for(int i=0;i<n;i++) {
                if(i == 0) {
                    ans[i] = nums[i];
                    continue;
                }
                ans[i] = ans[i-1] + nums[i];
            }
            return ans;
        }
    };