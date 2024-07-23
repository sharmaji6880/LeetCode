> **Problem Number:** 1636 <br>
> **Problem Name:** Sort Array by Increasing Frequency <br>
> **Problem Link:** [https://leetcode.com/problems/sort-array-by-increasing-frequency/](https://leetcode.com/problems/sort-array-by-increasing-frequency/) <br>

    map<int,int> m;
    class Solution {
    public:
        static bool cmp(int a, int b) {
            if(m[a] == m[b]) {
                return a > b;
            }
            return m[a] < m[b];
        }
        vector<int> frequencySort(vector<int>& nums) {
            m.clear();
            for(auto x:nums) {
                m[x]++;
            }
            sort(nums.begin(),nums.end(),cmp);
            return nums;
        }
    };