> **Problem Number:** 1991 <br>
> **Problem Name:** Find the Middle Index in Array <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-middle-index-in-array/](https://leetcode.com/problems/find-the-middle-index-in-array/) <br>

    class Solution {
    public:
        int leftSum(vector<int>& nums, int &i, int &n, vector<int>& prefixSum) {
            if(i == 0) {
                return 0;
            }
            return prefixSum[i-1];

        }
        int rightSum(vector<int>& nums, int &i, int &n, vector<int>& prefixSum) {
            if(i == n-1) {
                return 0;
            }
            return prefixSum[n-1] - prefixSum[i];
        }
        int findMiddleIndex(vector<int>& nums) {
            int n = nums.size();
            vector<int> prefixSum(n,0);
            for(int i = 0; i < n; i++) {
                if(i == 0) {
                    prefixSum[i] = nums[i];
                    continue;
                }
                prefixSum[i] = prefixSum[i-1] + nums[i];

            }
            for(int i = 0;i < n; i++) {
                if(leftSum(nums,i,n,prefixSum) == rightSum(nums,i,n,prefixSum))  {
                    return i;
                }
            }
            return -1;
        }
    };