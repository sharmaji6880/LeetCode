> **Problem Number:** 1122 <br>
> **Problem Name:** Relative Sort Array <br>
> **Problem Link:** [https://leetcode.com/problems/relative-sort-array/](https://leetcode.com/problems/relative-sort-array/) <br>

    class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            map<int,int> m;
            for(auto x:arr1) {
                m[x]++;
            }
            arr1 = {};
            for(auto x:arr2) {
                for(int i=0;i<m[x];i++) {
                    arr1.push_back(x);
                }
                m[x] = 0;
            }
            for(auto x:m) {
                for(int i=0;i<x.second;i++) {
                    arr1.push_back(x.first);
                }
            }
            return arr1;
        }
    };