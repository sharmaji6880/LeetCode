> **Problem Number:** 961 <br>
> **Problem Name:** N-Repeated Element in Size 2N Array <br>
> **Problem Link:** [https://leetcode.com/problems/n-repeated-element-in-size-2n-array/](https://leetcode.com/problems/n-repeated-element-in-size-2n-array/) <br>

    class Solution {
    public:
        int repeatedNTimes(vector<int>& nums) {
            int n = nums.size()/2;
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            for(auto x:m) {
                if(x.second == n) {
                    return x.first;
                }
            }
            return -1;
        }
    };