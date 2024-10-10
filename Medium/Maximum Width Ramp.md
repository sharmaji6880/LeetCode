> **Problem Number:** 962 <br>
> **Problem Name:** Maximum Width Ramp <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-width-ramp/](https://leetcode.com/problems/maximum-width-ramp/) <br>

**Using Brute Force:**

    class Solution {
    public:
        int maxWidthRamp(vector<int>& nums) {
            int n = nums.size();
            int maxWidth = INT_MIN;
            for(int i = 0; i < n - 1; i++ ) {
                for(int j = i + 1; j < n; j++) {
                    if( j - i > maxWidth  && nums[j] >= nums[i] ) {
                        maxWidth = j - i;
                    }
                }
            }
            return max(0,maxWidth);
        }
    };