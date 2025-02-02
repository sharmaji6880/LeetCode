> **Problem Number:** 1752 <br>
> **Problem Name:** Check if Array Is Sorted and Rotated <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-array-is-sorted-and-rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated) <br>

    class Solution {
    public:
        bool check(vector<int>& nums) {
            int count = 0,n = nums.size();
            for(int i=0;i<n;i++) {
                if(nums[i] > nums[(i+1)%n]) count++;
            }
            return count<=1? true:false;
        }
    };