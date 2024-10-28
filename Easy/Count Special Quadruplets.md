> **Problem Number:** 1995 <br>
> **Problem Name:** Count Special Quadruplets <br>
> **Problem Link:** [https://leetcode.com/problems/count-special-quadruplets](https://leetcode.com/problems/count-special-quadruplets) <br>

    class Solution {
    public:
        int countQuadruplets(vector<int>& nums) {
            int count = 0;
            int n = nums.size();
            for(int i = 0; i <= n-4; i++) {
                for(int j = i+1; j <= n-3; j++) {
                    for(int k = j+1; k <= n-2; k++) {
                        for(int l = k+1; l <= n-1; l++) {
                            if(nums[i] + nums[j] + nums[k] == nums[l]) {
                                count += 1;
                            }
                        }
                    }
                }
            }
            return count;
        }
    };