> **Problem Number:** 2460 <br>
> **Problem Name:** Apply Operations to an Array <br>
> **Problem Link:** [https://leetcode.com/problems/apply-operations-to-an-array](https://leetcode.com/problems/apply-operations-to-an-array) <br>

    class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            vector<int> ans;
            int n = nums.size();
            for(int i=0;i<n-1;i++) {
                if(nums[i] == nums[i+1]) {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }
            int count = 0;
            for(int i=0;i<n;i++) {
                if(nums[i] == 0) {
                    count += 1;
                }else {
                    ans.push_back(nums[i]);
                }
            }
            while(count--) {
                ans.push_back(0);
            }
            return ans;
        }
    };