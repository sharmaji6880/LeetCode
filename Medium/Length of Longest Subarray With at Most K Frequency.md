> **Problem Number:** 2958 <br>
> **Problem Name:** Length of Longest Subarray With at Most K Frequency <br>
> **Link:** [https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/) <br>

**Using Brute Force**

    //Time Complexity: O(n^3)
    // Space Complexity: O(n)
    // For larger inputs, this might result into TLE
    class Solution {
    public:
        int maxSubarrayLength(vector<int>& nums, int l) {
            int maxLen = 0;
            for(int i=0;i<nums.size();i++) {
                for(int j=i;j<nums.size();j++) {
                    map<int,int> m;
                    bool flag = true;
                    for(int k=i;k<=j;k++) {
                        m[nums[k]]++;
                        if(m[nums[k]] > l) {
                            flag = false;
                            break;
                        }
                    }
                    if(j-i+1 > maxLen && flag) {
                        maxLen = j-i+1;
                    }
                }
            }
            return maxLen;
        }
    };