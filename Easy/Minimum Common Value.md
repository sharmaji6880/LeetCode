> **Problem Number:** 2540 <br>
> **Problem Name:** Minimum Common Value <br>
> **Link:** [https://leetcode.com/problems/minimum-common-value/](https://leetcode.com/problems/minimum-common-value/) <br>

**Using Map** <br>

    class Solution {
    public:
        int getCommon(vector<int>& nums1, vector<int>& nums2) {
            map<int,int> m1,m2;
            for(auto x:nums1) {
                m1[x]++;
            }
            for(auto x:nums2) {
                m2[x]++;
            }
            for(auto x:m1) {
                if(m2.count(x.first)) {
                    return x.first;
                }
            }
            return -1;
        }
    };