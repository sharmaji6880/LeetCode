> **Problem Number:** 2656 <br>
> **Problem Name:** Maximum Sum With Exactly K Elements  <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-sum-with-exactly-k-elements](https://leetcode.com/problems/maximum-sum-with-exactly-k-elements) <br>

    class Solution {
    public:
        int maximizeSum(vector<int>& nums, int k) {
            int maxEle = INT_MIN;
            for(auto x:nums) {
                if( x > maxEle ) {
                    maxEle = x;
                }
            }
            int score = 0;
            for(int i = 1; i <= k; i++) {
                score += maxEle + i - 1;
            }
            return score;
        }
    };