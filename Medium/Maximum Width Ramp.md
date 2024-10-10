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

**Improvized Brute Force:**

    // In this approach, in the inner loop , we begin from 
    // the last index so that we don't have to check on those extra 
    // indices since we are only looking for the max width
    // and it makes sense to start from the rightmost position
    // than to start searching from extreme left
    class Solution {
    public:
        int maxWidthRamp(vector<int>& nums) {
            int n = nums.size();
            int maxWidth = INT_MIN;
            
            for(int i=0; i<n-1; i++) {
                for(int j = n-1; j > i; j--) {
                    if(nums[j] >= nums[i] && j - i > maxWidth) {
                        maxWidth = j - i;
                    }
                }
            }
            return max(0,maxWidth);
        }
    };