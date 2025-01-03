> **Problem Number:** 2270 <br>
> **Problem Name:** Number of Ways to Split Array <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-ways-to-split-array](https://leetcode.com/problems/number-of-ways-to-split-array) <br>

    class Solution {
    public:
        int waysToSplitArray(vector<int>& nums) {
            int n = nums.size(), count = 0;
            vector<long> pSum(n,0);

            for(int i=0;i<n;i++) {
                if( i == 0 ) {
                    pSum[i] = nums[i];
                    continue;
                }
                pSum[i] = pSum[i-1] + nums[i];
            }
            for(int i=0;i<n-1;i++) {
                if( pSum[i] >= pSum.back() - pSum[i] ) {
                    count += 1;
                }
            }
            return count;
        }
    };