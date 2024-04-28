> **Problem Number:** 3131 <br>
> **Problem Name:** Find the Integer Added to Array <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-integer-added-to-array-i/](https://leetcode.com/problems/find-the-integer-added-to-array-i/) <br>

    class Solution {
    public:
        int addedInteger(vector<int>& nums1, vector<int>& nums2) {
            int Min1 = INT_MAX;
            int Min2 = INT_MAX;

            for(auto x:nums1) {
                if(x < Min1) {
                    Min1 = x;
                }
            }
            for(auto x:nums2) {
                if(x < Min2) {
                    Min2 = x;
                }
            }
            return Min2-Min1;
        }
    };