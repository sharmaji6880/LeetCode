> **Problem Number:** 2006 <br>
> **Problem Name:** Count Number of Pairs With Absolute Difference K <br>
> **Problem Link:** [https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k](https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k) <br>

    class Solution {
    public:
        int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for( int i = 0; i < n-1 ; i++ ) {
            for( int j = i + 1 ; j < n ; j++ ) {
                if( abs(nums[i] - nums[j]) == k ) {
                    count += 1;
                }
            }
        }  
        return count;
        }
    };