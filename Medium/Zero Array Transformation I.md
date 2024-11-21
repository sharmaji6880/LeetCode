> **Problem Number:** 3355 <br>
> **Problem Name:** Zero Array Transformation I <br>
> **Problem Link:** [https://leetcode.com/problems/zero-array-transformation-i](https://leetcode.com/problems/zero-array-transformation-i) <br>

**Brute Force:** <br>

    //This is a Brute Force Approach and for larger inputs,
    // it might result into TLE
    // Time Complexity: O(n*q)
    // n = nums.size() and q = queries.size()
    class Solution {
    public:
        bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size();
            int num,count;
            for(int i=0;i<n;i++) {
                num = nums[i];
                count = 0;
                for(auto x:queries) {
                    if( i >= x[0] && i <= x[1] ) {
                        count += 1;
                    }
                }
                if( count < num ) {
                    return false;
                }
            }
            return true;
        }
    };