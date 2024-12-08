> **Problem Number:** 3379 <br>
> **Problem Name:** Transformed Array <br>
> **Problem Link:** [https://leetcode.com/problems/transformed-array](https://leetcode.com/problems/transformed-array) <br>

    class Solution {
    public:
        vector<int> constructTransformedArray(vector<int>& nums) {
            int n = nums.size(),steps;
            vector<int> result(n,0);

            for(int i=0;i<n;i++) {
                steps = abs(nums[i]);
                steps %= n;
                if ( nums[i] == 0 ) {
                    result[i] = nums[i];
                }else if ( nums[i] > 0 ) {
                    result[i] = nums[ (i+steps) % n ];
                }else {
                    if( steps <= i  ) {
                        result[i] = nums[i-steps];
                    }else {
                        steps -= i;
                        result[i] = nums[n-steps];
                    }
                }
            }
            return result;
        }
    };