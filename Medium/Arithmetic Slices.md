> **Problem Number:** 413 <br>
> **Problem Name:** Arithmetic Slices <br>
> **Problem Link:** [https://leetcode.com/problems/arithmetic-slices/description/](https://leetcode.com/problems/arithmetic-slices/description/) <br>

    class Solution {
        public int numberOfArithmeticSlices(int[] nums) {
            int n = nums.length, ans = 0, prev = 0;
            for(int i=2;i<n;i++) {
                if(nums[i]-nums[i-1] != nums[i-1]-nums[i-2]) {
                    prev = 0;
                }else {
                    prev += 1;
                }
                ans += prev;
            }
            return ans;
        }
    }