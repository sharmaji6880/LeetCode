> **Problem No.:** 3375  
> **Problem Name:** Minimum Operations to Make Array Values Equal to K  
> **Problem Link:** [https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k](https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k)  


    class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            if(m.find(k) == m.end() && k < m.begin() -> first) {
                return (int) m.size();
            }
            if(m.find(k) == m.begin()) {
                return (int) m.size() - 1;
            }
            return -1;
        }
        
    };