> **Problem Number:** 260 <br>
> **Problem Name:** Single Number III <br>
> **Problem Link:** [https://leetcode.com/problems/single-number-iii/](https://leetcode.com/problems/single-number-iii/) <br>

**Using O(n) Memory Space:** <br>

    class Solution {
    public:
        vector<int> singleNumber(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            vector<int> ans;
            for(auto x:m) {
                if(x.second == 1) {
                    ans.push_back(x.first);
                }
            }
            return ans;
        }
    };