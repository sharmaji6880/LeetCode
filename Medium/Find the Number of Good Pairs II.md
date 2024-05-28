> **Problem Number:** 3164 <br>
> **Problem Name:** Find the Number of Good Pairs II <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-number-of-good-pairs-ii/](https://leetcode.com/problems/find-the-number-of-good-pairs-ii/) <br>

    class Solution {
    public:
        long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
            map<int,int> m1,m2;
            for(auto x:nums1) {
                m1[x]++;
            }

            for(int i=0;i<nums2.size();i++) {
                nums2[i]*=k;
            }
            for(auto x:nums2) {
                m2[x]++;
            }
            int maxEle = INT_MIN;
            for(auto x:nums1) {
                if(x > maxEle) {
                    maxEle = x;
                }
            }
            long count = 0;
            for(auto x:m2) {
                long ans = 0;
                for(int i=1;i*x.first<=maxEle;i++) {
                    ans+= m1[i*x.first];
                }
                count+= ans * x.second;
            }
            return count;
        }
    };