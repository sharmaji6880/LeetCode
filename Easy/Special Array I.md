> **Problem Number:** 3151 <br>
> **Problem Name:** Special Array I <br>
> **Problem Link:** [https://leetcode.com/problems/special-array-i/](https://leetcode.com/problems/special-array-i/) <br>

    class Solution {
    public:
        bool isArraySpecial(vector<int>& nums) {
            int n = nums.size();
            for(int i=0;i<=n-2;i++) {
                if( (nums[i]+nums[i+1]) %2 == 0 ) {
                    return false;
                } 
            }
            return true;
        }
    };