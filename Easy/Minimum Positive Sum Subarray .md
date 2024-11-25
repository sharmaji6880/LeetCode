> **Problem Number:** 3364 <br>
> **Problem Name:** Minimum Positive Sum Subarray  <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-positive-sum-subarray](https://leetcode.com/problems/minimum-positive-sum-subarray) <br>

    class Solution {
    public:
        int minimumSumSubarray(vector<int>& nums, int l, int r) {
            int minSum = INT_MAX, sum, n = nums.size(),size;

            for(int i=0;i<n;i++) {
                for(int j=i;j<n;j++) {
                    size = j - i + 1;
                    if(size < l || size > r) {
                        continue;
                    }
                    sum = 0;
                    for(int k=i;k<=j;k++) {
                        sum += nums[k];
                    }
                    if( sum < minSum && sum > 0 ) {
                        minSum = sum;
                    }
                }
            }
            return minSum == INT_MAX? -1:minSum;
        }
    };