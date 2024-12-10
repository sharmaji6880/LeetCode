> **Problem Number:** 2176 <br>
> **Problem Name:** Count Equal and Divisible Pairs in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array](https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array) <br>

    class Solution {
    public:
        int countPairs(vector<int>& nums, int k) {
            int count = 0;
            int n = nums.size();

            for(int i = 0; i < n; i++) {
                for(int j = i+1; j < n;j++) {
                    if(nums[i] == nums[j] && (i*j) % k == 0) {
                        count += 1;
                    }
                }
            }
            return count;
        }
    };