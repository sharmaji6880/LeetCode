> **Problem Number:** 287 <br>
> **Problem Name:** Find the Duplicate Number <br>
> **Link:** [https://leetcode.com/problems/find-the-duplicate-number/](https://leetcode.com/problems/find-the-duplicate-number/) <br>

    class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            if(m.count(x)) {
                return x;
            }
            m[x]++;
        } 
        return 0;
        }
    };
