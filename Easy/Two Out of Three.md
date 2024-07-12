> **Problem Number:** 2032 <br>
> **Problem Name:** Two Out of Three <br>
> **Problem Link:** [https://leetcode.com/problems/two-out-of-three/](https://leetcode.com/problems/two-out-of-three/) <br>

    class Solution {
    public:
        vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
            set<int> s1,s2,s3,s;
            
            for(auto x:nums1) {
                s1.insert(x);
                if(s.count(x) == 0) {
                    s.insert(x);
                }
            }
            for(auto x:nums2) {
                s2.insert(x);
                if(s.count(x) == 0) {
                    s.insert(x);
                }
            }
            for(auto x:nums3) {
                s3.insert(x);
                if(s.count(x) == 0) {
                    s.insert(x);
                }
            }

            vector<int> ans;

            for(auto x:s) {
                if( (s1.count(x) && s2.count(x))  || (s2.count(x) && s3.count(x)) || (s3.count(x) && s1.count(x)) ) {
                    ans.push_back(x);
                }
            }
            return ans;
        }
    };