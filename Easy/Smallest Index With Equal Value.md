> **Problem Number:** 2057 <br>
> **Problem Name:** Smallest Index With Equal Value <br>
> **Problem Link:** [https://leetcode.com/problems/smallest-index-with-equal-value/](https://leetcode.com/problems/smallest-index-with-equal-value/) <br>

    class Solution {
    public:
        int smallestEqual(vector<int>& nums) {
            for(int i = 0; i < nums.size(); i++) {
                if(i % 10 == nums[i]) {
                    return i;
                }
            }
            return -1;
        }
    };