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

**Using Two Pointers** <br>

    class Solution {
    public:
        int getCommon(vector<int>& n1, vector<int>& n2) {
            int i=0,j=0;
            while(i < n1.size() && j < n2.size()) {
                if(n1[i]==n2[j]) {
                    return n1[i];
                }else if(n1[i] > n2[j]) {
                    j++;
                }else {
                    i++;
                }
            }
            return -1;
        }
    };