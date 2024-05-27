> **Problem Number:** 3162 <br>
> **Problem Name:** Find the Number of Good Pairs I <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-number-of-good-pairs-i/](https://leetcode.com/problems/find-the-number-of-good-pairs-i/) <br>

    class Solution {
    public:
        int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
            int n = nums1.size();
            int m = nums2.size();

            int count = 0;
            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++) {
                    if(nums1[i] % (nums2[j]*k) == 0) {
                        count+=1;
                    }
                }
            }
            return count;
        }
    };