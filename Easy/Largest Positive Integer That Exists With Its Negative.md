> **Problem Number**: 2441 <br>
> **Problem Name:** Largest Positive Integer That Exists With Its Negative <br>
> **Problem Link:** [https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/) <br>

    class Solution {
    public:
        int findMaxK(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            sort(nums.begin(),nums.end());
            for(int i=(int)nums.size()-1;i>=0;--i) {
                if(m.count(-nums[i])) {
                    return nums[i];
                }
            }
            return -1;
        }
    };