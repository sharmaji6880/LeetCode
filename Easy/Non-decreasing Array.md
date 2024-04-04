> **Problem Number:** 665 <br>
> **Problem Name:** Non-decreasing Array <br>
> **Problem Link:** [https://leetcode.com/problems/non-decreasing-array/](https://leetcode.com/problems/non-decreasing-array/)

    class Solution {
    public:
        bool isValidPair(int i, int j, vector<int> &nums) {
            if(nums[i] <= nums[j]) {
                return true;
            }
            return false;
        }
        bool checkPossibility(vector<int>& nums) {
            if(nums.size() <= 2) {
                return true;
            }
            int n = nums.size(),changes = 0;
            for(int i=0;i<n-1;i++) {
                if(isValidPair(i,i+1,nums)) {
                    continue;
                }
                if(changes) {
                    return false;
                }
                if(i==0 || nums[i+1] >= nums[i-1]) {
                    nums[i] = nums[i+1];
                }else {
                    nums[i+1] = nums[i];
                }
                changes+=1;
            }
            return true;
        }
    };