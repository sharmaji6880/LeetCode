> **Problem Number:** 2206 <br>
> **Problem Name:** Divide Array Into Equal Pairs <br>
> **Problem Link:** [https://leetcode.com/problems/divide-array-into-equal-pairs/](https://leetcode.com/problems/divide-array-into-equal-pairs/) <br>

    class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            for(auto x:m) {
                if(x.second % 2) {
                    return false;
                }
            }
            return true;
        }
    };