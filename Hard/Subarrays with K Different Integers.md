> **Problem Number:** 992 <br>
> **Problem Name:** Subarrays with K Different Integers <br>
> **Link:** [https://leetcode.com/problems/subarrays-with-k-different-integers/](https://leetcode.com/problems/subarrays-with-k-different-integers/) <br>

**Using Brute Force**

    // Time Complexity: O(n^3)
    // Space Complexity: O(n)
    // For large inputs, it might result into Time Limit Exceeded
    class Solution {
    public:
        int subarraysWithKDistinct(vector<int>& nums, int target) {
            int count = 0;
            for(int i=0;i<nums.size();i++) {
                for(int j=i;j<nums.size();j++) {
                    set<int> s;
                    for(int k=i;k<=j;k++) {
                        s.insert(nums[k]);
                    }
                    if(s.size() == target) count+=1;
                }
            }
            return count;
        }
    };