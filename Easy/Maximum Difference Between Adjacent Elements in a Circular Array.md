> **Problem Number:** 3423 <br>
> **Problem Name:** Maximum Difference Between Adjacent Elements in a Circular Array <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array](https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array) <br>

    class Solution {
    public:
        int maxAdjacentDistance(vector<int>& nums) {
            int maxDiff = INT_MIN, n = nums.size(),diff;
            for(int i=0;i<n;i++) {
                diff = abs(nums[(i+1)%n]-nums[i]);
                if(diff > maxDiff) maxDiff = diff;
            }
            return maxDiff;
        }
    };