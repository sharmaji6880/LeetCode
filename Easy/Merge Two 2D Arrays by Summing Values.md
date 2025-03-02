> **Problem Number:** 2570 <br>
> **Problem Name:** Merge Two 2D Arrays by Summing Values <br>
> **Problem Link:** [https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values](https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values) <br>

    class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int,int> m;
            for(auto x:nums1) {
                m[x[0]] += x[1];
            }
            for(auto x:nums2) {
                m[x[0]] += x[1];
            }
            vector<vector<int>> ans;
            for(auto x:m) {
                ans.push_back({x.first,x.second});
            }
            return ans;
        }
    };