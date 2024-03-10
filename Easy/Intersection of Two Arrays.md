> **Problem Number:** 349 <br>
> **Problem Name:** Intersection of Two Arrays <br>
> **Link:** [https://leetcode.com/problems/intersection-of-two-arrays/](https://leetcode.com/problems/intersection-of-two-arrays/) <br>

**Using Set**

    class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            set<int> s1,s2;
            vector<int> ans;
            for(auto x:nums1) {
                s1.insert(x);
            }
            for(auto x:nums2) {
                s2.insert(x);
            }
            for(auto x:s1) {
                if(s2.count(x)) {
                    ans.push_back(x);
                }
            }
            return ans;
        }
    };