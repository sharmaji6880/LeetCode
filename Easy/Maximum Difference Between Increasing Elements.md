> **Problem Number:** 2016 <br>
> **Problem Name:** Maximum Difference Between Increasing Elements <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-difference-between-increasing-elements](https://leetcode.com/problems/maximum-difference-between-increasing-elements) <br>

    class Solution {
    public:
        int maximumDifference(vector<int>& nums) {
            set<int> s;
            int maxDiff = INT_MIN;
            for( auto x:nums ) {
                if(!s.empty() && *s.begin() < x && x - *s.begin() > maxDiff) {
                    maxDiff = x - *s.begin();
                }
                s.insert(x);
            }
            return max(maxDiff,-1);
        }
    };