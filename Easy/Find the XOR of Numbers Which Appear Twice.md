> **Problem Number:** 3158 <br>
> **Problem Name:** Find the XOR of Numbers Which Appear Twice <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/](https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/) <br>

    class Solution {
    public:
        int duplicateNumbersXOR(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            int ans = 0;
            for(auto x:m) {
                if(x.second == 2) {
                    ans = ans ^ x.first;
                }
            }
            return ans;
        }
    };