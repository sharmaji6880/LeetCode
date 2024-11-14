> **Problem Number:** 2563 <br>
> **Problem Name:** Count the Number of Fair Pairs <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-fair-pairs](https://leetcode.com/problems/count-the-number-of-fair-pairs) <br>

**Using Brute Force:** <br>

    // This is a Brute Force Solution and for larger inputs,
    // might result into TLE
    class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long count = 0;
            int n = nums.size();
            int sum;
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    sum = nums[i] + nums[j];
                    if(sum >= lower && sum <= upper) {
                        count += 1;
                    }
                }
            }
            return count;
        }
    };