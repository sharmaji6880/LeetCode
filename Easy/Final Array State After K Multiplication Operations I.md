> **Problem Number:** 3264 <br>
> **Problem Name:** Final Array State After K Multiplication Operations I <br>
> **Problem Link:** [https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i](https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i) <br>

    class Solution {
    public:
        vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            int n = nums.size();
            int index,min;
            for(int i=1;i<=k;i++) {
                min = INT_MAX;
                for(int j=0;j<n;j++) {
                    if( nums[j] < min ) {
                        min = nums[j];
                        index = j;
                    }
                }
                nums[index] *= multiplier;
            }
            return nums;
        }
    };